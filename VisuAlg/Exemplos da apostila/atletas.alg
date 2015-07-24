algoritmo "atletas"
// Função :
// Autor :
// Data : 24/7/2008
// Página 18
var
nome:caracter
idade:inteiro
categoria:caracter
inicio
escreva("Informe o nome: ")
leia(nome)
escreva("Informe a idade: ")
leia(idade)
escolha idade
caso 5,6,7,8,9,10
   categoria <- "Infantil"
caso 11,12,13,14,15
   categoria <- "Juvenil"
caso 16,17,18,19,20
   categoria <- "Junior"
caso 21,22,23,24,25
   categoria <- "Profissional"
outrocaso
   categoria <- "Invalido"
fimescolha
escreva("O ", nome, " está na categoria: ", categoria)
fimalgoritmo
