def procurar_todas_substrings(texto, palavra):
    posicoes_encontradas = []
    for i in range(len(texto)):
        if texto[i:i+len(palavra)] == palavra:
            # No problema o indice do array começa com 1, por isso o + 1 aqui
            posicoes_encontradas.append(i+1)
    return posicoes_encontradas

s = input()
t = input()

print(' '.join(map(str, procurar_todas_substrings(s, t))))
