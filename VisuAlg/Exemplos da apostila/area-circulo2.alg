algoritmo "area-circulo2"
// Função :
// Autor :
// Data : 24/7/2008
// Página 16
var
area:real
raio:real
inicio
escreva("Informe o raio: ")
leia(raio)
se raio > 0 entao
   area <- Pi*(raio^2)
   escreva("A área é ", area:3:2)
senao
   escreva("Valor incorreto, por favor use números positivos e não-nulos")
fimse
fimalgoritmo
