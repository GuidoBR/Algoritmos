algoritmo "media-harmonica"
// Fun��o :
// Autor :
// Data : 24/7/2008
// P�gina 14
var
a:real
b:real
c:real
MH:real
nome:caracter
inicio
escreva("Qual o nome do aluno? ")
leia(nome)
escreva("Qual a primeira nota do aluno? " )
leia(a)
escreva("Qual a segunda nota do aluno? " )
leia(b)
escreva("Qual a terceira nota do aluno? " )
leia(c)
MH <- 3/(1/a + 1/b + 1/c)
escreva("A m�dia harmonica do aluno ",nome, " �:" ,MH:2:2)
fimalgoritmo
