algoritmo "eq2grau"
// Fun��o : Apresenta as raizes da equa��o do 2� grau
// Autor : Guido
// Data : 16/8/2008
// Se��o de Declara��es
var
x1, x2, a, b, c, delta:real
inicio
escreva("Insira a, b e c: ")
leia(a)
leia(b)
leia(c)
delta <- (b*b) - 4 * a * c
se delta >= 0 entao
   x1 <- -b + delta^0.5 / (2*a)
   x2 <- -b - delta^0.5 / (2*a)
   escreval("As raizes s�o: " ,x1, x2)
senao
   escreval("N�o h� raizes reais")
fimse
fimalgoritmo
