algoritmo "cifra-de-cesar"
// Fun��o :
// Autor :
// Data : 16/9/2008
// Se��o de Declara��es 
var
y,x:inteiro
inicio
escreva("Entre com a posi��o da letra (ex.: A=0, B=1, C=2, Z=25) : ")
leia(x)
y <- (x + 3) mod 26
escreva("O texto cifrado para a letra informada �: ", y)
fimalgoritmo
