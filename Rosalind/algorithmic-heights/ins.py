def insertion_sort_count(lista):
    '''
        Conta a quantidade de trocas no Insertion sort
    '''
    tamanho = len(lista)
    numero_trocas = 0
    for i in range(2, tamanho):
        k = i
        while k >= 1 and lista[k] < lista[k-1]:
            lista[k-1], lista[k] = lista[k], lista[k-1] # troca
            k  -= 1
            numero_trocas += 1
    return numero_trocas

def main():
    with open('entrada') as dados_entrada:
        k = dados_entrada.readline().strip()
        lista = [line.split() for line in dados_entrada.readlines()]
    l = list(map(int, lista[0]))
    print(insertion_sort_count(l))

if __name__ == '__main__':
    main()

