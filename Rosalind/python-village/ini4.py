a = int(input())
b = int(input())

i = a
if (i % 2 == 0):
    i += 1
soma = 0

while (i <= b):
    soma += i
    i += 2

print(soma)
