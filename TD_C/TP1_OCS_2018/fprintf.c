
/**
 * Le but de cet exercice est de voir comment utiliser
 * la fonction fprintf afin d'écrire dans un fichier
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
  char nom;
  int x, y;
  char nomfich[81];

  FILE *sortie; // flux associe au fichier a creer
  printf("donnez le nom de votre fichier a creer : ");
  scanf("%80s", nomfich);
  sortie = fopen(nomfich, "w"); // ouverture du fichier on peut aussi utiliser "wt"
  if (!sortie)
  {
    printf("Ouverture du fichier impossible \n");
    exit(-1);
  }
  printf("donnez  la valeur de x : ");
  scanf("%d", x);
  fprintf(sortie, "%d\n", x);  // écriture de la valeur de x dans le fichier associé au flux "sortie"
  fclose(sortie);
}
