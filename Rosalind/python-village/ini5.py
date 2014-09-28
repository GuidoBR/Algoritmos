arquivo = open('entrada5.txt', 'r')
numero_linha = 0
for linha in arquivo:
    numero_linha += 1
    if (numero_linha % 2 == 0):
        print(linha.replace('\n', ''))
