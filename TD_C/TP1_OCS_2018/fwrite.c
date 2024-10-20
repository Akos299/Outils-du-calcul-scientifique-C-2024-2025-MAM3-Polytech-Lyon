#include<stdio.h>
#include<stdlib.h>

int main()
{
  char nom;
 int x,y;
 char nomfich[81];
 
 FILE * sortie ; // flux associe au fichier a creer
 printf("donnez le nom de votre fichier a creer : ");
 scanf("%80s", nomfich);
sortie = fopen(nomfich, "wb"); // ooverture du fichier en mode binaire
if(!sortie){printf("Ouverture du fichier impossible \n");
	exit(-1);
}
 printf("donnez  la valeur de x : ");
 scanf("%d",  x);
 fwrite(&x, sizeof(x), 1, sortie);
 fclose(sortie);
}
