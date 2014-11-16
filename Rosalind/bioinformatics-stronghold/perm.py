def anagrama(elements):
    if len(elements) <=1:
        return elements
    else:
        tmp = []
        for perm in anagrama(elements[1:]):
            for i in range(len(elements)):
                tmp.append(perm[:i] + elements[0:1] + perm[i:])
        return tmp

def fatorial(n):
    if n == 0:
        return 1
    return fatorial(n-1) * n

# Leitura
n = int(input())
lista = "".join(map(str, list(range(1, n+1))))

# Processamento
resultados = fatorial(n)
resultado = sorted(anagrama(lista))

# Saida
print(resultados)
for i in range(len(resultado)):
    print(" ".join(map(str, (resultado[i]))))

