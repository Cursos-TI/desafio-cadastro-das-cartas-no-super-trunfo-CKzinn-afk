#include <stdio.h>

int main(){
//Carta 001
char Estado001[2];
char Codigo001[3];
char Nome001[20];
int População001;
float área001;
float PiB001;
int PT001;
float densidade001;
float PiBper001;

//Carta 002
char Estado002[2];
char Codigo002[3];
char Nome002[20];
int População002;
float área002;
float PiB002;
int PT002;
float densidade002;
float PiBper002;

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
scanf("%d", &População001);

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


//Descrição da carta 001
printf("Carta 001\n:");
printf("Estado: %s\n", Estado001);
printf("Código: %s\n", Codigo001);
printf("Nome da Cidade: %s\n", Nome001);
printf("População: %d\n", População001);
printf("Área: %.2f km²\n", área001);
printf("PiB: %.2f  bilhões de reais\n", PiB001);
printf("Número de pontos turísticos: %d\n", PT001);
printf("Densidade Populacional: %.2f hab/km²\n", densidade001);
printf("PiB per Capita: %.2f reais\n", PiBper001);

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

return 0;
}
