algoritmo "imc"
// Fun��o : Calcula o Indice de massa corporal de uma pessoa
// Autor :
// Data : 30/8/2008
// Se��o de Declara��es 
var
altura, peso, imc:real
inicio
escreva("Informe a sua altura (em m): ")
leia(altura)
escreva("Informe o seu peso (em kg): ")
leia(peso)
imc <- peso / (altura)^2
escreva("O seu IMC � ", imc:2:2)
fimalgoritmo
