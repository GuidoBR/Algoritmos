def subpeptides(peptide):
    p = list(peptide)
    tamanho = len(p)
    saida = [peptide]
    p_extendido = p + p[:tamanho-2]
    for i in range(tamanho):
        for j in range(tamanho-1):
            saida += ["".join(p_extendido[i:i+j+1])]
    return saida


def massa_subpeptide(peptide, tabela_massa):
    contador = 0
    for i in peptide:
        contador += tabela_massa[i]
    return contador


def cyclospectrum(peptide, tabela_massa):
    saida = [0]
    lista_subs = subpeptides(peptide)
    for s in lista_subs:
        saida += [massa_subpeptide(s, tabela_massa)]
    return sorted(saida)

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
peptide = input()
print(" ".join(map(str, cyclospectrum(peptide, tabela_massa))))
