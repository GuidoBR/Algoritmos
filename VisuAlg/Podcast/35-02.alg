algoritmo "podcast35-02"
// Função :
// Autor :
// Data : 11/8/2008
// Seção de Declarações
var
i, c, s:inteiro
n:vetor[1..10] de inteiro
inicio
para c <- 1 ate 10 faca
   escreval("Escreva um número: ")
   leia(n [c])
   s <- s + n [c]
fimpara
escreval("O resultado é:" ,s)
escreval("Resumindo... você digitou os valores: " )
para i <- 1 ate 10 faca
   escreval(n [i])
fimpara
fimalgoritmo
