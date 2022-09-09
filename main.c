#include <stdio.h>
#include <stdlib.h>

int main()
{ float A,B,R;
   int o;
    printf("saisir le premiere nombre :");
     scanf("%f",&A);
     printf("saisir le deuxieme nombre:");
    scanf("%f",&B);

    printf(" pour la somme choisi :1\n");

     printf(" pour la substraction choisi :2\n");

     printf(" pour le produit choisi :3\n");

     printf(" pour la  division choisi :4\n");

    scanf("%d",&o);


   switch   (o)
{

 case 1 : R=A+B;
      printf("%.2f+%.2f=%.2f",A,B,R);
      break;
      case 2 : R=A-B;
      printf("%.2f-%.2f=%.2f",A,B,R);
      break;
   case 3 : R=A*B;
      printf("%.2f*%.2f=%.2f",A,B,R);
      break;
  case 4 : R=A/B;
      printf("%.2f/%.2f=%.2f",A,B,R);
      break;
}












    return 0;
}
