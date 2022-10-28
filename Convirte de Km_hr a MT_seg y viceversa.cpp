//Programa que convierte Unidades de Km/hr a Mt/seg y Viceversa...
//A continuación se establecen las librerías a ser usadas
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
main()
{
int sino,selec; //variables enteras
float Velk,Velm ; //variables flotantes
Programa:{
system("cls");
printf("\n\t** Conversor de Unidades Km/hr a Mt/seg y Viceversa **\n");
printf("\n\t** Teclea <1> de Km/hr a--> Mt/seg **\n");
printf("\t** Teclea <2> de Mt/seg a--> Km/hr **\n");
printf("\t** Escribe tu eleccion - - - - - - - >> ");scanf("%d",&selec);
if(selec<1||selec>2){printf("\n\t Opcion Invalida!... Escribe 1 o 2 :\n\n");
system("pause");
goto Programa;}
if(selec==1){
printf("\n\t** Dame la Velocidad en Km/hr >> ");scanf("%f",&Velk);
Velm=(Velk*1000/3600);
printf("\n\t** Velocidad = %.3f",Velm);printf(" Mt/Seg");}
else {
printf("\n\t** Dame la Velocidad en Mts/seg >> ");scanf("%f",&Velm);
Velk=(Velm*3600/1000);
printf("\n\t** Velocidad = %.3f",Velk);printf(" Km/hr");}
volver: //Rutina de Salida
printf("\n\n\t Deseas hacer otra Conversion de Unidades? 3>Si * 4>No ");scanf("%i",&sino);
if(sino<3||sino>4){printf("\n\t Opcion Invalida!... Escribe 3 o 4 :");
goto volver;}
if(sino==3){goto Programa;}
else
system("cls");
printf("\n\n\n\n\a\a\a\a\a");
printf("\n\n\n\n\a\a\a\a\a");
printf("\n\n\n\n\a\a\a\a\a");
printf("\n\n ================= FIN DE PROGRAMA ======================");
printf("\n\n Programa Realizado por Armando Martin ENMSS Mexico MMXVII \n\n");
}
return 0;}
