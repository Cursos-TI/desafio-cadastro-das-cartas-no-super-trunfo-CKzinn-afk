#include <stdio.h>

//Perguntar, armazenar variaveis das cartas e calcular renda per capta e densidade populacional 
int main(){
//Carta 001
char Estado001[2];
char Codigo001[3];
char Nome001[20];
unsigned long int População001;
float área001;
float PiB001;
int PT001;
float densidade001;
float PiBper001;
float poder001;

//Carta 002
char Estado002[2];
char Codigo002[3];
char Nome002[20];
unsigned long int População002;
float área002;
float PiB002;
int PT002;
float densidade002;
float PiBper002;
float poder002;


//Cadastro da Carta 001

printf("Olá, seja bem vindo ao jogo de Super Trunfo!\nVamos começar cadastrando sua primeira cidade?\n");

//Estado 001
printf("Qual o estado da sua carta?\n");
scanf("%s", &Estado001);

//Codigo da Carta 001
printf("Código da sua carta:\n");
scanf("%s", &Codigo001);

//Nome da Cidade 001
printf("Nome da cidade:\n");
scanf("%s", &Nome001);

//População 001
printf("Quantos habitantes?\n");
scanf("%ld", &População001);

//área 001
printf("Qual a área total?\n");
scanf("%f", &área001);

//PiB 001
printf("Qual o PiB?\n");
scanf("%f", &PiB001);

//Pontos Turisticos 001
printf("Quantos pontos turisticos exitem?\n");
scanf("%d", &PT001);

//Calculo da Densidade Populacional da carta 1
densidade001 = (float)(População001 / área001);

//Calculo PiB per Capita da carta 1
PiBper001 = PiB001 / População001;

//Soma do super poder da carta
poder001 = População001 + área001 + PiB001 + PT001 + (1.0 / densidade001) + PiBper001;
//(1.0 / densidade001) para que quanto maior a densidade menor sera o resultado, ou seja, quanto maior a densidade menos ela irá ter influencia

//Cadastro da Carta 002

printf("Parabéns! você concluiu o cadastro da sua primeira carta\nPronto para ir para a próxima?\n");

//Estado 002
printf("Qual o estado da sua segunda carta?\n");
scanf("%s", &Estado002);

//Codigo da Carta 002
printf("Código da sua carta:\n");
scanf("%s", &Codigo002);

//Nome da Cidade 002
printf("Nome da cidade:\n");
scanf("%s", &Nome002);

//População 002
printf("Quantos habitantes?\n");
scanf("%d", &População002);

//área 002
printf("Qual a área total?\n");
scanf("%f", &área002);

//PiB 002
printf("Qual o PiB?\n");
scanf("%f", &PiB002);

//Pontos Turisticos 002
printf("Quantos pontos turisticos exitem?\n");
scanf("%d", &PT002);

//Calculo da Densidade Populacional da carta 2
densidade002 = (float) População002 / área002;

//Calculo PiB per Capita da carta 2
PiBper002 = PiB002 / População002;

//Soma do super poder da carta
poder002 = População002 + área002 + PiB002 + PT002 + (1.0 / densidade002) + PiBper002;
//(1.0 / densidade001) para que quanto maior a densidade menor sera o resultado, ou seja, quanto maior a densidade menos ela irá ter influencia

//Descrição da carta 001
printf("Carta 001\n:");
printf("Estado: %s\n", Estado001);
printf("Código: %s\n", Codigo001);
printf("Nome da Cidade: %s\n", Nome001);
printf("População: %ld\n", População001);
printf("Área: %.2f km²\n", área001);
printf("PiB: %.2f  bilhões de reais\n", PiB001);
printf("Número de pontos turísticos: %d\n", PT001);
printf("Densidade Populacional: %.2f hab/km²\n", densidade001);
printf("PiB per Capita: %.2f reais\n", PiBper001);
printf("O Poder da sua carta e: %.2f\n", poder001);

//Descrição da carta 002
printf("Carta 002\n:");
printf("Estado: %s\n", Estado002);
printf("Código: %s\n", Codigo002);
printf("Nome da Cidade: %s\n", Nome002);
printf("População: %d\n", População002);
printf("Área: %.2f km²\n", área002);
printf("PiB: %.2f  bilhões de reais\n", PiB002);
printf("Número de pontos turísticos: %d\n", PT002);
printf("Densidade Populacional: %.2f hab/km²\n", densidade002);
printf("PiB per Capita: %.2f reais\n", PiBper002);
printf("O Poder da sua carta e: %.2f\n", poder002);

//comparar variaveis das cartas
//População
printf("População:");
if (População001 > População002){
 printf("Carta 1 venceu\n");
}
else
{
 printf("Carta 2 venceu\n");
}

//Area
printf("Área:");
if (área001 > área002){
 printf("Carta 1 venceu\n");
}
else
{
 printf("Carta 2 venceu\n");
}

//PiB
printf("PiB:");
if (PiB001 > PiB002){
 printf("Carta 1 venceu\n");
}
else
{
 printf("Carta 2 venceu\n");
}

//Pontos Turisticos
printf("Pontos Turisticos:");
if (PT001 > PT002){
 printf("Carta 1 venceu\n");
}
else
{
 printf("Carta 2 venceu\n");
}

//Densidade Populacional
printf("Densidade populacional:");
if (densidade001 > densidade002){
 printf("Carta 1 venceu\n");
}
else
{
 printf("Carta 2 venceu\n");
}

//PiB per Capita
printf("PiB per Capita:");
if (PiBper001 > PiBper002){
 printf("Carta 1 venceu\n");
}
else
{
 printf("Carta 2 venceu\n");
}

//Super Poder
printf("Super Poder:");
if (poder001 > poder002){
 printf("Carta 1 venceu\n");
}
else
{
 printf("Carta 2 venceu\n");
}

return 0;
}

//Na pagina do trabalho não dizia nada sobre usar if e o else então resolvi aprender sobre pra facilitar, mas se houver problema eu refaço da outra maneira
