#include <stdio.h>
#include <stdlib.h>

int main()
{
    int S,I,T[10],J,swap,i;
    printf("donner la taile du tableau:\n");
    scanf("%d",&S);
    printf("entrer les %d entiers du tableau:\n",S);
    for (i=0;i<S;i++)
    scanf("%d",&T[i]);
printf("le tableau avant tri\n");
for (i=0;i<S;i++)
printf("T[%d]=%d\n",i,T[i]);

for (J=0;J<S;J++){
    for (i=J+1;i<S;i++){

if (T[J]>T[i]){

swap=T[J];
T[J]=T[i];
T[i]=swap;
    }
}
}
 printf("le tableau apres tri\n");
for (I=0;I<S;I++)
printf("T[%d]=%d\n",I,T[I]);


    return 0;

}
