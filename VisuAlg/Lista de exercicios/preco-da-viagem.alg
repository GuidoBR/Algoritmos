algoritmo "preco-da-viagem"
// Função :
// Autor :
// Data : 30/8/2008
// Seção de Declarações 
var
d, dl, preco, lg, dg:real
inicio
escreva("Informe a distancia (em km): ")
leia(d)
escreva("Informe quantos quilometros o carro 'anda' com 1 litro: ")
leia(dl)
escreva("Informe o preço do combustivel: ")
leia(preco)
lg <- d / dl // litros gastos
dg <- lg * preco // dinheiro gasto
escreva("Você vai gastar ", lg:3:2, " litros de combustivel e R$", dg:3:2)

fimalgoritmo
