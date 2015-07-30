def plus_minus(lista):
    p = [x for x in lista if x > 0]
    n = [x for x in lista if x < 0]
    z = [x for x in lista if x == 0]
    print("{0:.3f}".format((len(p) / len(lista))))
    print("{0:.3f}".format((len(n) / len(lista))))
    print("{0:.3f}".format((len(z) / len(lista))))


if __name__ == '__main__':
    ignora_isso_aqui = int(input())
    lista_entrada = input()
    lista = [int(x) for x in lista_entrada.split()]

    plus_minus(lista)
