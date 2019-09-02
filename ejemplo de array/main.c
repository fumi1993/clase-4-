#include <stdio.h>
#include <stdlib.h>

int main()
{
   int contador=0;
   int acumulador=0;
   int i;
   int vectorDeNumeros[10]={1,2,3,4,5,-5,-4,-3,-2,-1};
   float promedio;

  /* for(i=0;i<3;i++){
        printf("ingrese un numero");
    scanf("%d",&vectorDeNumeros[i]);
   }*/
   for(i=0;i<10;i++){
    printf("%d\n",vectorDeNumeros[i]);
   }
   printf("\n\n");
    for(i=0;i<10;i++){
        if(vectorDeNumeros[i]<0){
            printf("%d\n",vectorDeNumeros[i]);
            }
    for(i=0;i<10;i++){
        if(vectorDeNumeros[i]>0){
            contador++;
            acumulador = acumulador + vectorDeNumeros[i];
        }

    }
    promedio = (float)acumulador/contador;
    printf("el promedio es %f",promedio);
        }
        return 0;
    }


