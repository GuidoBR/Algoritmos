import itertools


def reversecomplement(genome):
    function = {"A": "T", "T": "A", "C": "G", "G": "C"}
    output = [function[x] for x in genome[::-1]]
    return "".join(output)


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


def countaproxkmersandreversecomp(genome, k, d):
    kmers = {}
    balls = {}
    for i in range(len(genome)-k):
        g = genome[i:i+k]
        l1 = balls.get(g, ball_edit_distance_d(g, d))
        h = reversecomplement(g)
        l2 = balls.get(h, ball_edit_distance_d(h, d))
        for kmer in l1+l2:
            kmers[kmer] = kmers.get(kmer, 0) + 1
    return kmers


def mostfrequentapproxkmersandreverse(genome, k, d):
    kmers = countaproxkmersandreversecomp(genome, k, d)
    top = max(kmers.values())
    m = [k for k, v in kmers.items() if v == top]
    print(" ".join(m))

genome = input()
k = int(input())
d = int(input())

mostfrequentapproxkmersandreverse(genome, k, d)
