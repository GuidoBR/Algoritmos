algoritmo "media-harmonica"
// Função :
// Autor :
// Data : 24/7/2008
// Página 14
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
escreva("A média harmonica do aluno ",nome, " é:" ,MH:2:2)
fimalgoritmo
