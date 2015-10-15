def naive(p, t):
    occurrences = []
    for i in range(len(t) - len(p) + 1):  # loop over alignments
        match = True
        for j in range(len(p)):  # loop over characters
            if t[i+j] != p[j]:  # compare characters
                match = False
                break
        if match:
            occurrences.append(i)  # all chars matched; record
    return occurrences

def reverseComplement(s):
    complement = {'A': 'T', 'C': 'G', 'G': 'C', 'T': 'A', 'N': 'N'}
    t = ''
    for base in s:
        t = complement[base] + t
    return t

def readGenome(filename):
    genome = ''
    with open(filename, 'r') as f:
        for line in f:
            # ignore header line with genome information
            if not line[0] == '>':
                genome += line.rstrip()
    return genome

def readFastq(filename):
    sequences = []
    qualities = []
    with open(filename) as fh:
        while True:
            fh.readline()  # skip name line
            seq = fh.readline().rstrip()  # read base sequence
            fh.readline()  # skip placeholder line
            qual = fh.readline().rstrip() # base quality line
            if len(seq) == 0:
                break
            sequences.append(seq)
            qualities.append(qual)
    return sequences, qualities

if __name__ == "__main__":
	genome = readGenome('lambda_virus.fa')
	question1 = len(naive('AGGT', genome)) + len(naive('ACCT', genome))
	question2 = len(naive('TTAA', genome))
	question3 = min(genome.find('ACTAAGT'), genome.find(reverseComplement('ACTAAGT')))
	question4 = min(genome.find('AGTCGA'), genome.find(reverseComplement('AGTCGA')))

	human_genome = readFastq('ERR037900_1.first1000.fastq')

	print(question1)
	print(question2)
	print(question3)
	print(question4)
