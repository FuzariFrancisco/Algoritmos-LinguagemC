Algoritmo "ordenados"

Var num1,num2,num3,cont:real

Inicio
 escreval("Digite o primeiro n�mero ")
 leia(num1)
 escreval("Digite o segundo n�mero ")
 leia(num2)
 escreval("Digite o terceiro n�mero ")
 leia(num3)
 se (num1>num2) e (num2>num3) entao
   escreva(num3,num2,num1)
 senao
    se (num1>num3) e (num3>num2) entao
     escreva(num2,num3,num1)
    senao
       se (num2>num1) e (num1>num3) entao
        escreva(num3,num1,num2)
       senao
          se (num2>num3) e (num3>num1) entao
           escreva(num1,num3,num2)
          senao
             se (num3>num2) e (num2>num1) entao
              escreva(num1,num2,num3)
             senao
                se (num3>num1) e (num1>num2) entao
                 escreva(num2,num1,num3)
             fimse
          fimse
       fimse
    fimse
 fimse
fimse

Fimalgoritmo


