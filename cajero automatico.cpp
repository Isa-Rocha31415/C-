//Programa en C++ que simula en Cajero Automático  DATA-BANK
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <iostream>
#include <windows.h>

using namespace std;
int main (void)
{
	
inicio:
	
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute(hConsole, 1);
    const string claveCorrecta = "1234";
    cout << "\nBienvenido al cajero automatico"<<endl;
    cout << "Ingrese su NIP: ";
    string clave = "";
    cin >> clave;
    if (clave != claveCorrecta)
    {
    
    	cout << "NIP incorrecto"<<endl;
    	SetConsoleTextAttribute(hConsole, 4);

        return 0;
    }
    
    cout << "Clave correcta\n Bienvenido\n";


{
 int i,o,NIP,opciones;
 float  SALDO,X,DEP,RET,DON;
 SALDO=0;
 Menu:
 printf("\n\a ESTE PROGRAMA HACE USO DE SWITCH COMO UN GO-TO COMPUTADO \n ");
 printf("\n\n * BANCO DE DATOS LOGICOS BCDL SA DE CV *\n ");
 printf("\n\a * ELIGE LA OPCION A REALIZAR  * ");
 SetConsoleTextAttribute(hConsole, 5);
 printf("\n\n\t\t 1.- CONSULTA DE SALDOS **");
 SetConsoleTextAttribute(hConsole, 6);
 printf("\n\t\t 2.- DEPOSITO DE EFECTIVO **");
 SetConsoleTextAttribute(hConsole, 7);
 printf("\n\t\t 3.- RETIRO DE EFECTIVO **");
 SetConsoleTextAttribute(hConsole, 8);
 printf("\n\t\t 4.- DESEAS DONAR AL TELETON ? **");
 SetConsoleTextAttribute(hConsole, 9);
 printf("\n\t\t 5.- SALIR DEL PROGRAMA **");
 printf("\n\n\n\t\t >>   ");scanf("%d",&i);
 switch(i){
 case 1:
 printf("\n\n\t * CONSULTA DE SALDOS *");
 printf("\n\a SALDO DISPONIBLE EN LA CUENTA >> %f",SALDO);
 break;
 case 2:
 printf("\n\n\t * DEPOSITO DE EFECTIVO *");
 printf("\n\n\t\a INTRODUCE LA CANTIDAD QUE DESEA DEPOSITAR: ");scanf("%f",&DEP);
     SALDO=SALDO+DEP;
 printf("\n\n\t SU SALDO ACTUAL ES DE >> %f",SALDO);
 SetConsoleTextAttribute(hConsole, 3);
 break;
 case 3:
 printf("\n\n\t * RETIRO DE EFECTIVO *");
 printf("\n\n\t\a INTRODUCE LA CANTIDAD DE SALDO QUE DESEA RETIRAR : ");scanf("%f",&RET);
 SALDO=SALDO-RET;
 printf("\n\n\t SU SALDO ACTUAL ES = %f",SALDO);
 break;
 case 4:
 printf("\n\n\t * DESEA DFONAR AL TELETON ? *");
 printf("\n\a * ELIGE LA OPCION A REALIZAR  * ");
         printf("\n\n\t\t 1.- SI DESCEO DONAR **");
         printf("\n\t\t 2.- SALIR DEL PROGRAMA **");
 printf("\n\n\n\t\t >>   ");scanf("%d",&o);
 switch(o){
 case 1:
 printf("\n\n\t * INTRODUCE LA CANTIDAD QUE DESEA DONAR : ");scanf("%f",&X);
 SALDO=SALDO-X;
 printf("\n\n\t SU SALDO ACTUAL ES = %f",SALDO);
 break;
 }
 break;
  default:
    printf ("\n\t\a\a GRACIAS POR USAR ESTE CAJERO AUTOMATICO  \n");break;
 }
 system ("pause");
getch;
system("cls");
printf("\n\aDESEAS HACERLO OTRA VEZ ? (1)Si o (2)No ");
scanf("%i",&opciones);
if(opciones==1){
goto Menu;}
if(opciones==2){
salir:
{
printf("\n\t GRACIAS POR USAR ESTE PROGRAMA ");
printf("\n\t FIN ");
printf("\n\t  ");
}
}
printf("\n\a PROGRAMA REALIZADO POR Isaa \n\n");
    system("PAUSE");
    return 0;
}
}
