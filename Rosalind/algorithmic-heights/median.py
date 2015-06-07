inteiros = []
n = int(input())
for i in range(n):
    a = int(input())
    inteiros.append(a)
k = int(input())
inteiros.sort()
print(inteiros[k-1])
# solucão não foi testada porque preciso fazer o problema
# "bins" e o "par3" primeiro
