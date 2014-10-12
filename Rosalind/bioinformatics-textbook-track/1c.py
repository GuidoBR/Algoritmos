pattern = input()
genome = input()


def pattern_matching(genome, pattern):
    k = len(pattern)
    resultado = []
    for i in range(len(genome)):
        if genome[i:i+k] == pattern:
            resultado.append(i)
    return resultado


def escrever_lista_inteiros(lista):
    print(' '.join(map(str, lista)))

escrever_lista_inteiros(pattern_matching(genome, pattern))
