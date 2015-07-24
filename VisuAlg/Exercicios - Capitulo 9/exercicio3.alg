algoritmo "exerc3"
// Função :
// Autor :
// Data : 24/7/2008
// Página 41
var
nome:caracter
hora:real
valorHora:real
filho:inteiro
salarioBruto:real
salario:real
inicio
escreva("Insira o nome do funcionário: ")
leia(nome)
escreva("Insira a quantidade de horas trabalhadas: ")
leia(hora)
escreva("Quanto vale uma hora de trabalho desse funcionário? ")
leia(valorHora)
escreva("Quantos filhos esse funcionário tem? ")
leia(filho)
salarioBruto <- hora * valorHora
salario <- salarioBruto + (filho * (salarioBruto * 3/100))
escreva("o Sálario do funcionário ", nome, "é", salario)
fimalgoritmo
