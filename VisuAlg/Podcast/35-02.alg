algoritmo "podcast35-02"
// Fun��o :
// Autor :
// Data : 11/8/2008
// Se��o de Declara��es
var
i, c, s:inteiro
n:vetor[1..10] de inteiro
inicio
para c <- 1 ate 10 faca
   escreval("Escreva um n�mero: ")
   leia(n [c])
   s <- s + n [c]
fimpara
escreval("O resultado �:" ,s)
escreval("Resumindo... voc� digitou os valores: " )
para i <- 1 ate 10 faca
   escreval(n [i])
fimpara
fimalgoritmo
