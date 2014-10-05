entrada = input()
quantidade_a = 0
quantidade_c = 0
quantidade_t = 0
quantidade_g = 0

for letra in entrada:
    if letra == 'A':
        quantidade_a += 1
    elif letra == 'C':
        quantidade_c += 1
    elif letra == 'T':
        quantidade_t += 1
    elif letra == 'G':
        quantidade_g += 1

print(quantidade_a, quantidade_c, quantidade_g, quantidade_t)
