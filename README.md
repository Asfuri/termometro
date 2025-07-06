# :thermometer::rock: Termômetro Rudimentar

- ### [:dart: Objetivo](#dart-objetivo-1)
- ### [:ice_cube: Circuito](#ice_cube-circuito-1)
- ### [:fire: Como rodar](#fire-como-rodar-1)
- ### [:arrow_down: Baixar o projeto](https://github.com/hvslucas/termometro/archive/refs/heads/main.zip)

## Disciplina de Eletrônica Aplicada I

Esse foi um projeto desenvolvido por discentes do curso de *Engenharia da Computação da Universidade Federal da Paraíba*, curso este que pertence ao *[Centro de Informática](http://ci.ufpb.br/)*, localizado na *[Rua dos Escoteiros S/N - Mangabeira - João Pessoa - Paraíba - Brasil](https://g.co/kgs/xobLzCE)*. O programa desenvolvido, juntamente com o circuito proposto, nesta atividade teve como finalidade permitir ao docente avaliar o entendimento dos alunos sobre o conteúdo, por meio da implementação prática do conceito, sem a atribuição de pontuação formal.

### :thermometer: Autores:

-  :ice_cube:  *[Eduardo Asfuri Carvalho](https://github.com/Asfuri)*
-  :fire:  *[Lucas Henrique Vieira da Silva](https://github.com/hvslucas)*

[![cachorro-com-febre-_2_](https://github.com/user-attachments/assets/90730a3e-68d8-423f-a419-95b36df38b5d)](#thermometerrock-termômetro-rudimentar)

## :dart: Objetivo

Este projeto tem como objetivo construir um termômetro rudimentar utilizando a leitura da tensão em um diodo. A proposta é explorar a característica da tensão do diodo, que varia de forma aproximadamente linear com a temperatura, permitindo estimar a temperatura ambiente por meio dessa medição. O circuito foi proposto pelo docente, visando a implementação do código e a realização das medições necessárias para a formulação da função temperatura/tensão.

### :chart_with_upwards_trend: Resultados

Utilizando uma fonte de tensão (bateria DC), um resistor de 1 kΩ e um diodo retificador 1N4007, observamos algumas situações distintas. As diferenças ocorreram, principalmente, pela ausência de um medidor de temperatura em certas medições e, em outras, pela variação da tensão no diodo para valores fora do intervalo esperado. Ainda assim, considerando alguns valores de referência, foi possível obter funções lineares que, de fato, correspondiam aos valores esperados. Os resultados podem ser encontrados na planilha disponível no repositório:

### 	[:open_file_folder: Planilha](medicoes_diodos.xlsx)

## :ice_cube: Circuito

O circuito é bem simples, uma fonte de 5 V (ou qualquer outro valor permitido pela documentação dos componentes, de maneira que não modifique a tensão de passagem de corrente do diodo), um resistor de 1 KΩ e um diodo (o indicado foi o 1N4007, com tensão de 0.7 V em 25° C)

![Captura de tela 2025-07-01 212355](https://github.com/user-attachments/assets/465bfb04-5efd-4c8e-bb27-1bad10451208)

Ao colocar o arduino para medir a tensão e um display para o termômetro ficar autonomo de uma conexão USB:

![image](https://github.com/user-attachments/assets/c3b265f5-f05f-4036-b20a-637d4db7b42e)

Bem... O resto o código explica, um dia talvez eu termine esse repositório. Pfv me cobre se você precisar disso!


