algoritmo "cifra-de-cesar"
// Função :
// Autor :
// Data : 16/9/2008
// Seção de Declarações 
var
y,x:inteiro
inicio
escreva("Entre com a posição da letra (ex.: A=0, B=1, C=2, Z=25) : ")
leia(x)
y <- (x + 3) mod 26
escreva("O texto cifrado para a letra informada é: ", y)
fimalgoritmo
