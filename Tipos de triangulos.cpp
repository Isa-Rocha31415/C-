#include<stdio.h>
#include<conio.h>
#include<math.h>
//Librerias
int main()
{
	//Declarar las variables
	int A, B, C, P; //Variables enteras
	float a,s; //variablesflotanters o decimales
	printf("\n\a Introduce el lado A: ");scanf ("%i",&A);
	printf("\n\a Introduce el lado B: ");scanf ("%i",&B);
	printf("\n\a Introduce el lado C: ");scanf ("%i",&C);
//Hacer comparaciones
	if(A!=B && B!=C) //se ejecutan lo que es verdad
	{ printf ("\n > Es un triangulo Equilatero"); }
   else //luego se ejecuta lo que es no 
	if(A !=B && B !=C && C!=A){
	printf("\n > Es un triangulo Escaleno"); }
   else
 { printf("\n > Es un triangulo Isoceles"); }  
P=A+B+C; // se calcula el perimetro
s=(A+B+C)/2.0; //se calcula el semiperimetro
a=sqrt((s*((s-A)*(s-B)*(s-C)))); //se usa la formula de Heron 
printf("\n\n\t E1 perimetro del triangulo es = %d", P);
printf("n\n\t El semi-Perimetro es = %f",s);
printf("Unidades Lineales");
printf("n\n\t El Area del triangulo es = %f", a);
printf(" Unidades Cuadradas");
printf("n\n\t Ptrograma realizado por Isa31415");
  getch();
}
