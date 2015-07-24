algoritmo "media-simples-2"
// Função :
// Autor :
// Data : 25/7/2008
// Página 21
var
teste1,teste2,teste3,media:real
nome:caracter
i:inteiro
inicio
repita
   escreva("Informe o nome: ")
   leia(nome)
   escreva("Informe a nota do teste 1: ")
   leia(teste1)
   escreva("Informe a nota do teste 2: ")
   leia(teste2)
   escreva("Informe a nota do teste 3: ")
   leia(teste3)
   media <- (teste1 + teste2 + teste3)/3
   se media > 10.0 entao
      media <- 10
   fimse
   escreval("A média do aluno ",nome," é ",media:2:2)
   i <- i + 1
ate i > 20
fimalgoritmo
