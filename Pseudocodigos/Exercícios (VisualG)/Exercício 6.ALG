Algoritmo "cardapio"

Var total,total_vendas,hamburger1,cheeseburger2,batata_frita3,refrigerante4,milkshake5,servicos,quantidade1,quantidade2,quantidade3,quantidade4,quantidade5:real



Inicio
  hamburger1<-9.50
  cheeseburger2<-10.30
  batata_frita3<-8.50
  refrigerante4<-3.50
  milkshake5<-7.00
  escreval("Digite a quantidade de Hamburgers ")
  leia(quantidade1)
  escreval("Digite a quantidade de Cheeseburgers ")
  leia(quantidade2)
  escreval("Digite a quantidade de Batatas Fritas ")
  leia(quantidade3)
  escreval("Digite a quantidade de Refrigerantes ")
  leia(quantidade4)
  escreval("Digite a quantidade de MilkShakes ")
  leia(quantidade5)
  hamburger1<-hamburger1*quantidade1
  cheeseburger2<-cheeseburger2*quantidade2
  batata_frita3<-batata_frita3*quantidade3
  refrigerante4<-refrigerante4*quantidade4
  milkshake5<-milkshake5*quantidade5
  escreval(quantidade1," Hamburgeres: ",hamburger1)
  escreval(quantidade2," Cheeseburgers: ",cheeseburger2)
  escreval(quantidade3," Batatas Fritas: ",batata_frita3)
  escreval(quantidade4," Refrigerantes: ",refrigerante4)
  escreval(quantidade5," MilkShakes: ",milkshake5)
  total<-hamburger1+cheeseburger2+batata_frita3+refrigerante4+milkshake5
  servicos<-total*0.10
  escreval("Serviços: ",servicos)
  total_vendas<-total+servicos
  escreva("Valor total da compra: ",total_vendas)
Fimalgoritmo