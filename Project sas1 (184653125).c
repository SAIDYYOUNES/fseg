#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */





		typedef struct {
    char nom[1000];
    int code;
    int quantite;
    float prix;
}produit;

typedef struct{
char nom[100];
char date_vente[100];
int code;
float prix_ttc;
int quantite;

}state;
state s[100];

int main ()
{

  int i,n,a,check,j=0, d=0; ;
float somme=0;
int total=0;
  int N,search,c_produit;
  check=0;
  c_produit=-1 ;
  time_t t = time (NULL);
  produit p[100];
  menu :

  printf
    ("\n                                                                                           %s",
     ctime (&t));
  printf ("bonjour veiller saisir le nombre d'operation souhaiter:\n");
  printf ("pour chercher un  produit:1\n");
  printf ("pour ajouter un nouveau produit:2\n");
  printf ("pour ajouter plusieur nouveaux produits:3\n");
  printf ("pour lister les produits en stock:4\n");
  printf ("pour effectuer l'achat d'un produit:5\n");
  printf ("pour afficher l'etat du stock:6\n");
  printf ("pour alimenter le stock:7\n");
  printf ("pour suprimer un produit du stock:8\n");
  printf ("pour statique du vente:9\n");
  scanf ("%d", &N);
  switch (N){
  case 1 : //==================recherche d'un produit==============================================================//
            {
            	system("cls");

             printf ("pour chercher a l'aide du code du produit:1\n");
             printf ("pour chercher a l'aide du quantite du produit:2\n");
               search:
				scanf ("%d", &search);
			  switch (search){
                  case 1 : {

				                printf ("saisir le code du produit a rechercher:\n");
                               scanf("%d",&n);
                               for (i=0;i<=c_produit;i++){
                                  if (n==p[i].code){


                                    a=i;
                                    printf("le nom : %s\n",p[a].nom);
                                     printf(" le prix :%.2fDH\n",p[a].prix);
									 printf(" la quantite :%d\n",p[i].quantite);
									 printf("=============================");
									 check=1;
									 goto menu;
									 break;
									 }}

                                 if (check==0)
                                   printf("produit n'existe pas") ;


                                     goto menu;

									 break;
									 }
	                case 2 :{
					int i,v;
					printf ("saisir la quantite du produit a rechercher:\n");
                               scanf("%d",&v);
                               for (i=0;i<=c_produit;i++){
                                  if (v==p[i].quantite){


                                    a=i;
                                    printf("le nom : %s\n",p[a].nom);
                                     printf(" le prix :%.2fDH\n",p[a].prix);
									 printf(" le code :%d\n",p[a].code);
									 check=1;
									 goto menu;
									 break;
									 }}

                                 if (check==0)
                                   printf("produit n'existe pas") ;


                                     goto menu;

									 break;
									 }
							}


			   break;}

	case 2 : {
	    //==================ajouter un produit==============================================================//
					system("cls");

				i=c_produit+1;
				printf("saisir les information du nouveau produit\n");
				printf ("le code du produit:");
                scanf ("%d", &p[i].code);
                printf ("le nom du produit:");
                scanf ("%s", p[i].nom);
                printf ("le prix du produit:");
                scanf ("%f", &p[i].prix);
                printf ("la quantite du produit:");
                scanf ("%d", &p[i].quantite);
                c_produit++;
                goto menu;
				break;}

	// ==========================ajouter plusieur produit=======================================================================
	case 3 : {
				system("cls");

				printf ("saisir le nombre du produit a ajouter:");
                scanf ("%d", &n);


				for(i=c_produit+1;i<=n+c_produit;i++){
					j++;
				printf("saisir les information du produit %d :\n",j);
				printf ("le code du produit %d:",j);
                scanf ("%d", &p[i].code);
                printf ("le nom du produit %d:",j);
                scanf ("%s", p[i].nom);
                printf ("le prix du produit %d:",j);
                scanf ("%f", &p[i].prix);
                printf ("la quantite du produit %d:",j);
                scanf ("%d", &p[i].quantite);}
                c_produit=c_produit+n;

                goto menu;
                break;}
    case 4 :{ //==================ordre des produit==============================================================//
        system("cls");
        int l;
             printf ("pour lister les produit en ordre alphabetique :1\n");
             printf ("pour lister les produit en ordre des prix:2\n");

				scanf ("%d", &l);

           switch (l){
                  case 1 : {
                  	int i,j;
                      produit swap;
                   for (i = 0; i <= c_produit; i++) {
                    for ( j = 0; j <= c_produit-1; j++)
                        if (strcmp(p[j].nom, p[j+1].nom) == 1) {
                            swap= p[j];
                            p[j] = p[j+1];
                            p[j+1] = swap;}}
                          j=1;
                        for (i = 0; i <= c_produit; i++){




                printf ("le nom du produit %d:%s\n",j, p[i].nom);

                printf ("le prix du produit %d:%.2fDH\n",j, p[i].prix);
                 printf ("le prix TTC du produit %d:%.2fDH\n",j,p[i].prix*1.15);
                  printf ("la quantite du produit du produit %d:%d\n",j,p[i].quantite);
                  printf("=============================\n");
                  j++;

						}

                break;  }

                 case 2:{

                     produit swap;
                     for (i=0;i<c_produit;i++){
                    for (j=i+1;j<=c_produit;j++){
                       if (p[i].prix<p[j].prix) {
                        swap=p[i];
                         p[i]=p[j];
                          p[j]=swap;}}}
                           j=1;
                        for (i = 0; i <= c_produit; i++){



                printf ("le nom du produit %d:%s\n",j, p[i].nom);

                printf ("le prix du produit %d:%.2fDH\n",j, p[i].prix);
                  printf ("le prix TTC du produit %d:%.2fDH\n",j,p[i].prix*1.15);
                   printf("=============================\n");
				  	j++;}

                    break;   }
                    }
                    goto menu;
                    break;}



  case 5:{ system("cls");
      int x,b,k;

      printf("donner le code du produit acheter:");
      scanf("%d",&x);
      printf("donner la quantite du produit acheter:");
      scanf("%d",&k);
       for (i=0;i<=c_produit;i++){

                        if (x==p[i].code){
                        	b=i;
                        	break;}}
                           if (k>p[b].quantite){
                           	printf("quantite du stock est insufisante");
						   }
                           else {

                        	p[b].quantite=p[b].quantite-k;
                        	s[d].code=p[b].code;
                        	s[d].quantite=k;
                        	s[d].prix_ttc=p[b].prix*1.15;
                        	strcpy(s[d].nom,p[b].nom);
                          	strcpy(s[d].date_vente,ctime (&t));

                       somme=somme+(s[d].prix_ttc*k);
                       total+=k;


                       printf("quantite vendus:%d\n",s[d].quantite);
                       printf("code du produit:%d\n",s[d].code);
                       printf("prix de vente:%.2f\n",s[d].prix_ttc);
                       printf("nom du produit:%s\n",s[d].nom);
                       printf("date de vente:%s\n",s[d].date_vente);
                        d++;}


goto menu;
      break;}
    case 6 : { 	//=============================== etat du stock //============================================================
                     system("cls");
                           int check1=0;
                           if (c_produit>=0){
			              for (i=0;i<=c_produit;i++){
                                  if (p[i].quantite<3){
								  printf("les produits presque a epuisee sont :%s\n",p[i].nom) ;
								  check1=1;
			                       }}

			                     if (check1==0)
								{
								    printf("tous les produit sont en stock");}
								    }
                           if (c_produit<0){printf("aucun produit est enregistrer");}
                           goto menu;
					  break;}
	case 7:  {//==================alimentation du stock==============================================================//
       int a,b;
       system("cls");
       printf ("saisir le code du produit a alimenter:");
                scanf ("%d", &a);
                 printf ("saisir la quantite du produit a alimenter:");
                scanf ("%d", &b);
                 for (i=0;i<=c_produit;i++){
                                  if (a==p[i].code){
                p[i].quantite=p[i].quantite+b;}
                break;
                }
         goto menu;
   break;}
case 8 : { //==================suprimer un produit==============================================================//
    int s,b;
	system("cls");
	printf("saisir le code du produit a supprimer");
		scanf ("%d", &s);
               for (i=0;i<=c_produit;i++){
                        if (s==p[i].code){
                        	b=i;
                        	break;}}

                        for (b=b;b<=c_produit;b++){
                          p[b] = p[b+1];}

    	c_produit--;
    	printf("le produit a ete supprimer du stock");
    	goto menu;
		break;
	}
	case 9 : {

	    system("cls");

	    int stat;
	    if (somme>0){

    printf ("Afficher le total des prix des produits vendus en journée courante\
:1\n");
                printf ("Afficher la moyenne des prix des produits vendus en journée courante\
:2\n");
                printf ("Afficher le Max des prix des produits vendus en journée courante\
:3\n");
                printf ("Afficher le Min des prix des produits vendus en journée courante\
4\n");
                scanf ("%d", &stat);
           switch (stat){ float moyene;
                  case 1 : {
                  	printf("la somme de aujourdhui %s est :%.2f",ctime (&t),somme);
               goto menu;
                       break;}
                  case 2 : {
                    printf("la moyenne des prix aujourdhui:%.2f",somme/total);
                    goto menu;
                   break;}
                   case 3 : {
                   	state exchange;
                     for (i=0;i<d;i++){
                    for (j=i+1;j<=d;j++){
                       if (s[i].prix_ttc<s[j].prix_ttc) {
                        exchange=s[i];
                         s[i]=s[j];
                          s[j]=exchange;}}}
                          printf("le max des prix vendus aujourdhui:%.2f",s[0].prix_ttc);
                         goto menu;
                    break;}
                   case 4 :  {state exchange;
                     for (i=0;i<d-1;i++){
                    for (j=i+1;j<d;j++){
                       if (s[i].prix_ttc>s[j].prix_ttc) {
                        exchange=s[i];
                         s[i]=s[j];
                          s[j]=exchange;}}}
                          printf("le min des prix vendus aujourdhui:%.2f",s[0].prix_ttc);

                           goto menu;
                   break;}
                 }
	}
	else
	{printf( "aucune vente n'a encore effectuer");
	}
	goto menu;
       break;    }
 }
 return 0;
}


