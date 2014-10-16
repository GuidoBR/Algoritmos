import sys


def ler_arquivo(nome_arquivo):
    arquivo = open(nome_arquivo, 'r')
    dic_dna = {}
    for l in arquivo:
        linha = l.replace('\n', '')
        linha = linha.replace('>', '')
        if linha[0] == 'R':
            dic_dna[linha] = ''
            id = linha
        else:
            dic_dna[id] += linha
    return dic_dna


def calcular_conteudo_gc(dic_dna):
    dic_gc = {}
    for id, dna in dic_dna.items():
        contagem_gc = 0
        for nucleotideo in dna:
            if nucleotideo == 'G' or nucleotideo == 'C':
                contagem_gc += 1
        dic_gc[id] = (contagem_gc / len(dna)) * 100
    return dic_gc


def maximo_dicionario(dicionario):
    return max(dicionario.keys(), key=(lambda key: dicionario[key]))

dic_dna = ler_arquivo(sys.argv[1])
conteudo_gc = calcular_conteudo_gc(dic_dna)
chave = maximo_dicionario(conteudo_gc)
print(chave)
print(round(conteudo_gc[chave], 6))
