palavras = input().split()

dicionario = {}
for palavra in palavras:
    dicionario[palavra] = dicionario.get(palavra, 0) + 1

for chave, valor in dicionario.items():
    print(chave, valor)
