algoritmo "area-circulo2"
// Fun��o :
// Autor :
// Data : 24/7/2008
// P�gina 16
var
area:real
raio:real
inicio
escreva("Informe o raio: ")
leia(raio)
se raio > 0 entao
   area <- Pi*(raio^2)
   escreva("A �rea � ", area:3:2)
senao
   escreva("Valor incorreto, por favor use n�meros positivos e n�o-nulos")
fimse
fimalgoritmo
