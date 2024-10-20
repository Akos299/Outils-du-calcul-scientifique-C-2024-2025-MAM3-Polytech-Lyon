#include<stdio.h>
#include<stdlib.h>

int main()
{
  char nom;
 int x,y;
 char nomfich[81];
 
 FILE * entree ; // flux associe au fichier a creer
 printf("donnez le nom de votre fichier a creer : ");
 scanf("%80s", nomfich);
entree = fopen(nomfich, "rb"); // ooverture du fichier en mode binaire
if(!entree){printf("Ouverture du fichier impossible \n");
	exit(-1);
}
if(feof){printf("fin de fichier \n");}
fread(&x,sizeof(x),1,entree);
printf("la valeur de x vaut : %d .  \n");
 fclose(entree);
}
