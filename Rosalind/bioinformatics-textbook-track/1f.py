def hamming_distance(s1, s2):
    if (len(s1) == len(s2)):
        return sum(ch1 != ch2 for ch1, ch2 in zip(s1, s2))
    else:
        return 10000


def procurar_todas_substrings(texto, palavra, d):
    posicoes_encontradas = []
    for i in range(len(texto)):
        if hamming_distance(texto[i:i+len(palavra)], palavra) <= d:
            posicoes_encontradas.append(i)
    return posicoes_encontradas


pattern = input()
text = input()
distancia = int(input())
print(' '.join(map(str, procurar_todas_substrings(text, pattern, distancia))))
