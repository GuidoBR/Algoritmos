def reverse_complement(genoma):
    dicionario = {"A": "T", "T": "A", "C": "G", "G": "C"}
    complemento_reverso = [dicionario[x] for x in genoma[::-1]]
    return "".join(complemento_reverso)


def genetic_code(x):
    return {
    'UUC': 'F', 'CUC': 'L', 'AUC': 'I', 'GUC': 'V', 'UUU': 'F', 'CUU': 'L', 'AUU': 'I', 'GUU': 'V', 'UUA': 'L',
    'CUA': 'L', 'AUA': 'I', 'GUA': 'V', 'UUG': 'L', 'CUG': 'L', 'AUG': 'M', 'GUG': 'V', 'UCU': 'S', 'CCU': 'P',
    'ACU': 'T', 'GCU': 'A', 'UCC': 'S', 'CCC': 'P', 'ACC': 'T', 'GCC': 'A', 'UCA': 'S', 'CCA': 'P', 'ACA': 'T',
    'GCA': 'A', 'UCG': 'S', 'CCG': 'P', 'ACG': 'T', 'GCG': 'A', 'UAU': 'Y', 'CAU': 'H', 'AAU': 'N', 'GAU': 'D',
    'UAC': 'Y', 'CAC': 'H', 'AAC': 'N', 'GAC': 'D', 'UAA': '', 'CAA': 'Q', 'AAA': 'K', 'GAA': 'E', 'UAG': '',
    'CAG': 'Q', 'AAG': 'K', 'GAG': 'E', 'UGU': 'C', 'CGU': 'R', 'AGU': 'S', 'GGU': 'G', 'UGC': 'C', 'CGC': 'R',
    'AGC': 'S', 'GGC': 'G', 'UGA': '', 'CGA': 'R', 'AGA': 'R', 'GGA': 'G', 'UGG': 'W', 'CGG': 'R', 'AGG': 'R',
    'GGG': 'G',
}.get(x)


def dna2rna(dna):
    return dna.replace('T', 'U')


def rna2aminoacid(rna):
    amino_acid = ''
    for i in range(0, len(rna), 3):
        traducao = genetic_code(rna[i:i+3])
        if traducao != '':
            amino_acid +=traducao
    return amino_acid

dna = input()
amino_acid = input()

for letra in range(len(dna)-len(amino_acid)*3-1):
    palavra = dna[letra:letra+len(amino_acid)*3]
    if (rna2aminoacid(dna2rna(palavra)) == amino_acid) or (rna2aminoacid(dna2rna(reverse_complement(palavra))) == amino_acid):
        print(palavra)
