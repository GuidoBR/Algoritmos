# leitura dos argumentos
dna_string = input()
k = int(input())

# criando dicionário com todos os k-mer
kmer = {}
for i in range(len(dna_string)):
    palavra = dna_string[i:i+k]
    if palavra in kmer:
        kmer[palavra] += 1
    else:
        kmer[palavra] = 1

# criando lista com os k-mer máximos
max = 0
lista_max_kmer = []
for key in kmer:
    if kmer[key] > max:
        lista_max_kmer = [key]
        max = kmer[key]
    elif kmer[key] == max:
        lista_max_kmer += [key]

# saida
print(lista_max_kmer)
