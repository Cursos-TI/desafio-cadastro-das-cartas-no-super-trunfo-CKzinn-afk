#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Perguntar, armazenar variaveis das cartas e calcular renda per capta e densidade populacional 
int main(){
//Carta 001
char Estado001[3];
char Codigo001[4];
char Nome001[50];
unsigned long int Populacao001;
float area001;
float PIB001;
int PT001;
float densidade001;
float PiBper001;
float poder001;

//Carta 002
char Estado002[3];
char Codigo002[4];
char Nome002[50];
unsigned long int Populacao002;
float area002;
float PIB002;
int PT002;
float densidade002;
float PiBper002;
float poder002;

//Comparação de uma unica carta
int comparacao;


//Cadastro da Carta 001

printf("Olá, seja bem vindo ao jogo de Super Trunfo!\nVamos começar cadastrando sua primeira cidade?\n");

//Estado 001
printf("Qual o estado da sua carta?\n");
scanf("%s", Estado001);

//Codigo da Carta 001
printf("Código da sua carta:\n");
scanf("%3s", Codigo001);

//Nome da Cidade 001
printf("Nome da cidade:\n");
scanf("%s", Nome001);

//População 001
printf("Quantos habitantes?\n");
scanf("%lu", &Populacao001);

//área 001
printf("Qual a área total?\n");
scanf("%f", &area001);

//PiB 001
printf("Qual o PiB?\n");
scanf("%f", &PIB001);

//Pontos Turisticos 001
printf("Quantos pontos turisticos exitem?\n");
scanf("%d", &PT001);

//Calculo da Densidade Populacional da carta 1
if (area001 != 0)
{
    densidade001 = (float)Populacao001 / area001;
} else
{
    densidade001 = 0.0f;
}


//Calculo PiB per Capita da carta 1



if (Populacao001 != 0)
{
    PiBper001 = (PIB001 * 1000000000.0f) / (float)Populacao001; 
} else
{
    PiBper001 = 0.0f;
}




//Soma do super poder da carta
if (densidade001 != 0)
{
    poder001 = Populacao001 + area001 + PIB001 + PT001 + (1.0 / densidade001) + PiBper001;
//(1.0 / densidade001) para que quanto maior a densidade menor sera o resultado, ou seja, quanto maior a densidade menos ela irá ter influencia
} else
{
   poder001 = Populacao001 + area001 + PIB001 + PT001 + PiBper001; 
   printf("Atenção\nSua densidade e igual a 0, seu poder pode sofrer alteração!\n");
}



//Cadastro da Carta 002

printf("Parabéns! você concluiu o cadastro da sua primeira carta\nPronto para ir para a próxima?\n");

//Estado 002
printf("Qual o estado da sua segunda carta?\n");
scanf("%3s", Estado002);

//Codigo da Carta 002
printf("Código da sua carta:\n");
scanf("%s", Codigo002);

//Nome da Cidade 002
printf("Nome da cidade:\n");
scanf("%s", Nome002);

//População 002
printf("Quantos habitantes?\n");
scanf("%lu", &Populacao002);

//área 002
printf("Qual a área total?\n");
scanf("%f", &area002);

//PiB 002
printf("Qual o PiB?\n");
scanf("%f", &PIB002);

//Pontos Turisticos 002
printf("Quantos pontos turisticos exitem?\n");
scanf("%d", &PT002);

//Calculo da Densidade Populacional da carta 2
if (area002 != 0)
{
    densidade002 = (float) Populacao002 / area002;
} else
{
    densidade002 = 0.0f;
}




//Calculo PiB per Capita da carta 2
if (Populacao002 != 0)
{
    PiBper002 = (PIB002 * 1000000000.0f) / Populacao002; 
} else
{
    PiBper002 = 0.0f;
}

//Soma do super poder da carta
if (densidade002 != 0)
{
    poder002 = Populacao002 + area002 + PIB002 + PT002 + (1.0 / densidade002) + PiBper002;
//(1.0 / densidade001) para que quanto maior a densidade menor sera o resultado, ou seja, quanto maior a densidade menos ela irá ter influencia
} else
{
   poder002 = Populacao002 + area002 + PIB002 + PT002 + PiBper002; 
   printf("Atenção\nSua densidade e igual a 0, seu poder pode sofrer alteração!");
}


//Descrição da carta 001
printf("Carta 001\n:");
printf("Estado: %s\n", Estado001);
printf("Código: %s\n", Codigo001);
printf("Nome da Cidade: %s\n", Nome001);
printf("População: %lu\n", Populacao001);
printf("Área: %.2f km²\n", area001);
printf("PiB: %.2f reais\n", PIB001);
printf("Número de pontos turísticos: %d\n", PT001);
printf("Densidade Populacional: %.2f hab/km²\n", densidade001);
printf("PiB per Capita: %.2f bilções de reais\n", PiBper001);
printf("O Poder da sua carta e: %.2f\n", poder001);

//Descrição da carta 002
printf("Carta 002\n:");
printf("Estado: %s\n", Estado002);
printf("Código: %s\n", Codigo002);
printf("Nome da Cidade: %s\n", Nome002);
printf("População: %lu\n", Populacao002);
printf("Área: %.2f km²\n", area002);
printf("PiB: %.2f reais\n", PIB002);
printf("Número de pontos turísticos: %d\n", PT002);
printf("Densidade Populacional: %.2f hab/km²\n", densidade002);
printf("PiB per Capita: %.2f bilhões de reais\n", PiBper002);
printf("O Poder da sua carta e: %.2f\n", poder002);

//Comparação de uma unica carta:
printf("Escolha um atributo para comparar:\n 1: População\n 2: Área\n 3: PiB\n 4: Pontos Turisticos\n 5: Densidade\n 6: Pib per capita\n 7: Poder\n 8: Sair");
scanf("%d", &comparacao);

switch (comparacao)
{
case 1:
//Populacao
printf("Atributo: População\n Carta 1 - %s (%s): %lu\n Carta 2 - %s (%s): %lu\n", Nome001, Estado001, Populacao001, Nome002, Estado002, Populacao002);
    if (Populacao001 > Populacao002)
    {
        printf("Carta 1 e a vencedora\n");
    } else if (Populacao002 > Populacao001)
        {
        printf("Carta 2 e a vencedora\n");
        } else
        {
            printf("EMPATE");
        }
        
    break;

case 2:
//Area
        printf("Atributo: Área\n Carta 1 - %s (%s): %.2f\n Carta 2 - %s (%s): %.2f\n", Nome001, Estado001, area001, Nome002, Estado002, area002);
    if (area001 > area002)
    {
        printf("Carta 1 e a vencedora\n");
    } else if (area002 > area001){
        printf("Carta 2 e a vencedora\n");
    } else
    {
        printf("EMPATE");
    }

    break;

case 3:
//PiB
printf("Atributo: PiB\n Carta 1 - %s (%s): %.2f\n Carta 2 - %s (%s): %.2f\n", Nome001, Estado001, PIB001, Nome002, Estado002, PIB002);
            if (PIB001 > PIB002)
        {
        printf("Carta 1 e a vencedora\n");
        } else if (PIB002 > PIB001)
        {
        printf("Carta 2 e a vencedora\n");
        } else{
            printf("EMPATE");   
        }
    break;

case 4:
//Pontos Turisticos
printf("Atributo: Pontos Turisticos\n Carta 1 - %s (%s): %d\n Carta 2 - %s (%s): %d\n", Nome001, Estado001, PT001, Nome002, Estado002, PT002);
    if (PT001 > PT002)
    {
        printf("Carta 1 e a vencedora\n");
    } else if (PT001 < PT002)
    {
        printf("Carta 2 e a vencedora\n");
    } else{
            printf("EMPATE");   
        }
    break;
case 5:
//Densidade
printf("Atributo: Densidade\n Carta 1 - %s (%s): %.2f\n Carta 2 - %s (%s): %.2f\n", Nome001, Estado001, densidade001, Nome002, Estado002, densidade002);
    if (densidade001 < densidade002)
    {
        printf("Carta 1 e a vencedora\n");
    } else if (densidade001 > densidade002)
    {
        printf("Carta 2 e a vencedora\n");
    } else{
            printf("EMPATE");   
        }

break;
case 6:
//Renda per Capita
printf("Atributo: Renda per Capita\n Carta 1 - %s (%s): %.2f\n Carta 2 - %s (%s): %.2f\n", Nome001, Estado001, PiBper001, Nome002, Estado002, PiBper002);
    if (PiBper001 > PiBper002)
    {
        printf("Carta 1 e a vencedora\n");
    } else if (PiBper001 < PiBper002)
    {
        printf("Carta 2 e a vencedora\n");
    } else{
            printf("EMPATE");   
        }
    break;
case 7:
//Poder
printf("Atributo: Poder\n Carta 1 - %s (%s): %.2f\n Carta 2 - %s (%s): %.2f\n", Nome001, Estado001, poder001, Nome002, Estado002, poder002);
    if (poder001 > poder002)
    {
        printf("Carta 1 e a vencedora\n");
    } else if (poder001 < poder002)
    {
        printf("Carta 2 e a vencedora\n");
    } else{
            printf("EMPATE");   
        }
    break;
//sair
    case 8: printf("você escolheu sair");
    break;
default: printf("Numero invalido");
}

return 0;
}
