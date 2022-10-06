#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,n;
printf("\n === UP-DOWN COUNTER ===");
printf("\n Hasta que numero deseas que llegue el contador >>  ");
scanf("%d",&n);
printf("\a");
for (i=0;i<=n;i++)
{
printf("\n\t %d",i);
Sleep(400);
}
n=n-1;
printf("\a");
for (i=n;i>=0;i--)
{
printf("\n\t %d",i);
Sleep(400);
}
 printf("\a");
 printf("\n ");
 getch();
}
