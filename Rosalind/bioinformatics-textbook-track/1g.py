import itertools


def ball_edit_distance_d(pattern, d):
    output = []
    indexes = range(len(pattern))
    for i in itertools.combinations(indexes, d):
        for j in itertools.product("ACGT", repeat=d):
            s = list(pattern)
            for k in range(d):
                s[i[k]] = j[k]
                output = output + ["".join(s)]
    return list(set(output))


def countaproxkmers(genome, k, d):
    kmers = {}
    balls = {}
    for i in range(len(genome)-k):
        l = balls.get(genome[i:i+k], ball_edit_distance_d(genome[i:i+k], d))
        for kmer in l:
            kmers[kmer] = kmers.get(kmer, 0)+1
    return kmers


def mostfrequentapproxkmers(genome, k, d):
    kmers = countaproxkmers(genome, k, d)
    top = max(kmers.values())
    m = [k for k, v in kmers.items() if v == top]
    print(' '.join(m))

genome = input()
k = int(input())
d = int(input())

print("Algoritmo com O(n^3); N = " + str(len(genome)))
mostfrequentapproxkmers(genome, k, d)
