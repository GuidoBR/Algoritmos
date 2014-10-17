def skew_diagram(genome):
    qtd_c = 0
    qtd_g = 0
    skew = [0]
    for i in range(len(genome)):
        if (genome[i] == 'C'):
            qtd_c += 1
        elif (genome[i] == 'G'):
            qtd_g += 1
        skew.append(qtd_g - qtd_c)
    return skew


def escrever_lista(lista):
    print(" ".join(map(str, lista)))


def posicoes_minimas(lista):
    minimo = lista[0]
    lista_minimos = [0]
    for i in range(len(lista)):
        if lista[i] < minimo:
            minimo = lista[i]
            lista_minimos = []
            lista_minimos.append(i)
        elif lista[i] == minimo:
            minimo = lista[i]
            lista_minimos.append(i)
    return lista_minimos


genome = input()
skew = (skew_diagram(genome))
escrever_lista(posicoes_minimas(skew))
