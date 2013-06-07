from math import ceil
n = input()
fila = ["Sheldon", "Leonard", "Penny", "Rajesh", "Howard"]

i = 0
elemento = 1
qtd = 5
while i <= n:
	i += qtd
	elemento *= 2
	qtd *= 2
	
print fila[int(ceil((n - (i - qtd * 0.5)) / (elemento * 0.5)) - 1)]
