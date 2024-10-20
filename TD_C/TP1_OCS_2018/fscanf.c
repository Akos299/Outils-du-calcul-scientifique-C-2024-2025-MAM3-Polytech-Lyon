/**
 * Le but de cet exercice est de voir comment utiliser
 * la fonction fread afin d'écrire dans un fichier
 */

// 1. entête pour utiliser les fonctions printf et scanf
#include <stdio.h>

// 2. entête pour utiliser les fonctions fopen, fread, fclose
#include <stdlib.h>

// 3. fonction principale main
int main()
{
  /** Déclaration de variables
   *
   */
  int x, y;
  char nomfich[101];

  FILE *entree; // flux associe au fichier a creer
  printf("donnez le nom de votre fichier a creer : ");
  scanf("%100s", nomfich);
  /**
   * ouverture du fichier en mode lecture "r"
   * Q1.Donnez un nom de fichier existant à "nomfich"
   * Q2.Donnez un nom de fichier non existant à "nomfich"
   *
   * Pour plus d'infos sur l'utilisation de cette fonction
   * en plus dus support de cours vous pouvez vous réferer à
   * la ressource suivante : https://koor.fr/C/cstdio/fopen.wp
   */
  entree = fopen(nomfich, "r"); // on peut aussi utiliser "rt"
  if (!entree)                  // vérifier que l'ouverture s'est dérouler sans problèmes
  {
    printf("Ouverture du fichier impossible \n");
    exit(-1);
  }
  if (feof) // vérifier que l'on est pas à la fin du fichier
  {
    printf("fin de fichier \n");
  }
  /**
   * lecture de la valeur de x depuis le flux créer
   */
  fscanf(entree, "%d", x); // lecture de la valeur de x depuis le fichier associé au flux "entree"
  printf("la valeur de x vaut : %d .  \n");
  fclose(entree);

  return 0;
}
