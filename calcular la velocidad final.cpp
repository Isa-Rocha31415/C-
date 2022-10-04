#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int t,i,n,SN,YN;
	float velk,velm,vf,a,d;
	inicio: //Rutina principal
	system("cls"); // Limpia pantalla
	printf("\n Programa que calcula la velocidad parcial de un auto");
	printf("\n Que parte del reposo Y en X seg., Alcanza un VF=X km/hr \n");
	printf("\n\t Primero se hace una rutina para convertir de km a m/s ");
	printf("\n\t\a *Desea convertir de km/h a m/s 1>Si 2>No >> "); scanf("%d",&SN);
	if(SN==1){
	printf("\n <SUBRUTINA> Conversor de Unidades de Km/h a m/s ");
	printf("\n\n\t\a Dame la velocidad final VF:km/h     >> "); scanf("%f",&velk);
	velm=(velk*1000)/3600;
	printf("\n\t La velocidad en m/s es                >>$.4f",velm);
	getch(); } //(%.4f) 3 decimales a velm
	printf("\n\t Como el Auto parte del reposo        >> Vo=0  ");
	printf("\n\t Dame el tiempo total de recorrido en seg.     >>  "); scanf("%d",&t);
	a=velm/t;
	printf("\t La aceleracion es constante su valor es   >>%.4f  \n",a);
	for(i=1;i<=t;i++) {
		vf=a*i;
		d=(pow(vf,2))/(2*a); // Pow es el codigo para elevar una potencia Vf, 2 al cuadrado
		printf("\n\t En el tiempo > %d", i );printf("\t Vel = > %.4f ",vf);printf("\t Distancia = > %.4f ",d);}
	printf("\n\n\t Desea Iniciar Nuevamente ? 1>Si 2>No      >> ");scanf("%d",&YN);
	if (YN==1) {goto inicio;}
	else {goto fin;}
	fin:
		system("cls");
		printf("\n\n\t      ------FIN------- \n");
		printf("\n\n\t Prog, Realizado por Isaaa31415 \n\a\a");
	{
	}
