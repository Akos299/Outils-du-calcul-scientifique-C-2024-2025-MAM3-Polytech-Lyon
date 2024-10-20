/**
 * Le but de cet exercice est de voir comment utiliser
 * la fonction fwrite afin d'écrire dans un fichier
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{

  int x, y;
  char nomfich[101];

  FILE *sortie; // flux associe au fichier a creer
  printf("donnez le nom de votre fichier a creer : ");
  scanf("%101s", nomfich);
  sortie = fopen(nomfich, "wb"); // ooverture du fichier en mode binaire
  if (!sortie)
  {
    printf("Ouverture du fichier impossible \n");
    exit(-1);
  }
  printf("donnez  la valeur de x : ");
  scanf("%d", x);
  fwrite(&x, sizeof(x), 1, sortie); // écriture de la valeur de x dans le fichier associé au flux "sortie"
  fclose(sortie);
}
