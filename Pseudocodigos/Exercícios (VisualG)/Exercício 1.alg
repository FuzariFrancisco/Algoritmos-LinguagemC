Algoritmo "custo_fabrica"

Var valor_compra,valor_venda,lucro,impostos:real

Inicio
escreva("Digite o Valor de Compra ")
leia(valor_compra)
impostos<-valor_compra*(45/100)
lucro<-valor_compra*(12/100)
valor_venda<-impostos+lucro+valor_compra
escreval("Impostos ",impostos:7:2)
escreval("Lucro ",lucro:7:2)
escreval("Valor da Compra ",valor_compra:7:2)
escreva("Valor de Venda ",valor_venda:7:2)

Fimalgoritmo