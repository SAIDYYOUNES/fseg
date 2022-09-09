#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float A,B,R;
   int o;

    printf(" pour la somme choisi :1\n");

     printf(" pour la substraction choisi :2\n");

     printf(" pour le produit choisi :3\n");

     printf(" pour la  division choisi :4\n");

     printf(" pour la  puissance choisi :5\n");

     printf(" pour la racine d'un nombre choisi :6\n");

     printf(" pour le cos d'un nombre choisi :7\n");

     printf(" pour le sin d'un nombre choisi :8\n");

      printf(" pour le tan d'un nombre choisi :9\n");

      printf(" pour log d'un nombre choisi :10\n");

      printf(" pour l'exponentielle d'un nombre choisi :11\n");

    scanf("%d",&o);


    if (o<6) { printf("saisir le premiere nombre :");
     scanf("%f",&A);
     printf("saisir le deuxieme nombre:");
    scanf("%f",&B);


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
  case 5 : R=pow(A,B);
      printf("%.2f^%.2f=%.2f",A,B,R);
      break;
}
    }
  else
    { printf("saisir la valeur a traiter :");
     scanf("%f",&A);


    switch(o) {
    case 6 :

    R=(sqrt(A));
      printf("%.2f^2=%.2f",A,R);
break;
case 7 :

    R=cos(A);
      printf("cos(%.2f)=%.2f",A,R);
break;
case 8 :

    R=sin(A);
      printf("sin(%.2f)=%.2f",A,R);
break;
case  9:

    R=tan(A);
      printf("tan(%.2f)=%.2f",A,R);
break;

    case  10:

    R=log(A);
      printf("log(%.2f)=%.2f",A,R);
break;

   case  11:

    R=exp(A);
      printf("exp(%.2f)=%.2f",A,R);
break;


    }


    }


    return 0;
}
