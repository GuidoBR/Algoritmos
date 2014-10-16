def HammingDistance(sA, sB):
    if (sA == sB):
        return 0
    else:
        contador = 0
        for i in range(len(sA)):
            if sA[i] != sB[i]:
                contador += 1
        return contador

stringA = input()
stringB = input()
print(HammingDistance(stringA, stringB))
