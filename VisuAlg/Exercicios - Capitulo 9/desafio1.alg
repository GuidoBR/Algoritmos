algoritmo "desa1"
// Fun��o :
// Autor :
// Data : 24/7/2008
// P�gina 41
var
chopp,pizza,cobertura,total,pessoa,totalPessoa,quantPizza,quantCobertura,quantChopp,semitotal:real
inicio
chopp <- 0.8
pizza <- 10
cobertura <- 1.5
escreva("Quantas pizzas? ")
leia(quantPizza)
escreva("Quantos choops? ")
leia(quantChopp)
escreva("Quantas coberturas? ")
leia(quantCobertura)
escreva("Quantas pessoas? ")
leia(pessoa)
semitotal <- (quantPizza * pizza) + (quantChopp * chopp) + (quantCobertura * cobertura)
total <- (semitotal * 10/100) + semitotal
escreval("A conta � " , total)
totalPessoa <- total/pessoa
escreva("Cada pessoa dever� pagar: ", totalPessoa)
fimalgoritmo
