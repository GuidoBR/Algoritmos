algoritmo "exerc4"
// Função :
// Autor :
// Data : 24/7/2008
// Página 41
var
nome:caracter
salarioFixo:real
vendas:inteiro
percentual:real
salario:real
inicio
escreva("Informe o nome do vendedor: ")
leia(nome)
escreva("Informe o sálario fixo do vendedor: ")
leia(salarioFixo)
escreva("Informe o total de vendas do vendedor: ")
leia(vendas)
escreva("Informe o percentual que o vendedor ganha a cada venda: ")
leia(percentual)
salario <- salarioFixo + (vendas * ((percentual/100) * salarioFixo))
escreva("O sálario do vendedor", nome, "é ", salario)
fimalgoritmo
