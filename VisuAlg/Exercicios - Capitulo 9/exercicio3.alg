algoritmo "exerc3"
// Fun��o :
// Autor :
// Data : 24/7/2008
// P�gina 41
var
nome:caracter
hora:real
valorHora:real
filho:inteiro
salarioBruto:real
salario:real
inicio
escreva("Insira o nome do funcion�rio: ")
leia(nome)
escreva("Insira a quantidade de horas trabalhadas: ")
leia(hora)
escreva("Quanto vale uma hora de trabalho desse funcion�rio? ")
leia(valorHora)
escreva("Quantos filhos esse funcion�rio tem? ")
leia(filho)
salarioBruto <- hora * valorHora
salario <- salarioBruto + (filho * (salarioBruto * 3/100))
escreva("o S�lario do funcion�rio ", nome, "�", salario)
fimalgoritmo
