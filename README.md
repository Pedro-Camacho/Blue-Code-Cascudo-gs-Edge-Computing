# Blue-Code-Cascudo-gs-Edge-Computing
O cascudo é o prototipo de um barco autônomo que prestará serviço para tanto criadores de peixes terem acesso aos dados em relação aos seus viveiros nos oceanos abertos, tanto para pesquisadores realizarem coletas de dados, a interpretação deles e tranformaram eles em informações valiosas para o cenário de pesquisas.
## Link para o video explicativo:

## Montagem 
Os componentes usados para prototipar nosso projeto foram:
 * Arduino Uno
 * Sensor Ldr
 * Sensor de temperatura TMP
 * Botão
 * Servo Motor
 * 2 Potenciometro
 * Motor CC

## Prototipo
 ![Global Solution (1)](https://github.com/Pedro-Camacho/Blue-Code-Cascudo-gs-Edge-Computing/assets/49591140/59fbd475-7f81-4a79-9d97-47562d39fd15)

 ## Leituras
 - Sensor LDR(Turbidez) <br/> 
 Utilizamos o sensor Ldr como uma forma simples de ler a luminosidade que simula a turbidez da água que é basicamente uma medida para saber quanta luminosidade passa na água, no nosso código representamos o dados da seguinte maneira eles vão de 0 a 500, o valor de turbidez normalmente é medido de 0 a 5 sendo zero uma água limpa em que a luminosidade passa sem problemas e 5 um nivel bem escuro onde a luz tem dificuldade de passa, de 0 a 500 podemos ter uma boa sensibilidade no sensor ldr e uma medida mais precisa.
 - Sensor de temperatura <br/> 
 O sensor de temperatura retornara a temperatura no momento para poder retornar.
 - Potenciometro para Ph <br/> 
 Infelizmente no Tinkercadd não posuimos nenhum componente para simular a leitura do Ph, como o ph da água é lido de 0 a 14, utilizamos um map para registrar os valores aproximados de 0 140 simulando uma casa decimal.
 - Potenciomentro e Servo Motor para controle de direção <br/> 
 Utilizando um potenciomentro conseguimos regular o angulo no nosso servo motor assim podendo dar direção ao nosso cascudo.
 - Botão e motor CC <br/> 
 Com um botão pressionamos eles para acionar o motor assim movimentar nosso cascudo.

##  INTEGRANTES

- Pedro Almeida Camacho rm: 556831
- Diógenes Henrique do Santos Costa rm: 559127
