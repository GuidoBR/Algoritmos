dna_string = input()
reverse = dna_string[::-1]
complemento = ''
for letra in reverse:
    if letra == 'A':
        complemento += 'T'
    elif letra == 'C':
        complemento += 'G'
    elif letra == 'G':
        complemento += 'C'
    elif letra == 'T':
        complemento += 'A'
print(complemento)
