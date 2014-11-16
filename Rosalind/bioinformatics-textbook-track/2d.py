def peptides(n, d, massa_aminoacido):
    for massa in massa_aminoacido:
        if (n - massa) in d:
            d[n] = d.get(n, 0) + d[n - massa]
    return d


def contador_peptide(M, massa_aminoacido):
    dic = {0: 1}
    minimo = min(massa_aminoacido)
    for i in range(M - minimo + 1):
        j = i + minimo
        peptides(j, dic, massa_aminoacido)
    return dic[M]

tabela_massa = {
    "G": 57,
    "A": 71,
    "S": 87,
    "P": 97,
    "V": 99,
    "T": 101,
    "C": 103,
    "I": 113,
    "L": 113,
    "N": 114,
    "D": 115,
    "K": 128,
    "Q": 128,
    "E": 129,
    "M": 131,
    "H": 137,
    "F": 147,
    "R": 156,
    "Y": 163,
    "W": 186,
}
massa_aminoacido = sorted(list(set(tabela_massa.values())))
m = int(input())
print(contador_peptide(m, massa_aminoacido))
