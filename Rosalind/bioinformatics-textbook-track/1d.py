def processar_genoma(genome, k, L):
    todos_kmer = []
    for i in range(len(genome)):
        subgenoma = genome[i:i+L]
        kmer = {}
        for j in range(len(subgenoma)):
            palavra = subgenoma[j:j+k]
            if palavra in kmer:
                kmer[palavra] += 1
            else:
                kmer[palavra] = 1
        todos_kmer.append(kmer)
    return todos_kmer


def processar_dicionario(dicionario_kmer):
    lista_solucao = []
    for dic in dicionario_kmer:
        for chave, valor in dic.items():
            if valor >= t:
                lista_solucao.append(chave)
    return lista_solucao


genome = input()
k = int(input())  # tamanho da palavra (k-mer)
L = int(input())  # tamanho do intervalo
t = int(input())  # quantidade de repeticoes

dicionario_kmer = processar_genoma(genome, k, L)
solucao = processar_dicionario(dicionario_kmer)

print(' '.join(set(solucao)))
