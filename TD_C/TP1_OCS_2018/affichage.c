/* Le but de cet exercice est de voir comment utiliser la fonction
 * printf.
 */

// 1. Inclure le(s) fichier d'entête necessaire(s)

#include <stdio.h>

// 2. Fonction principal main. Pour l'instant ne nous préocupons pas de arguments.

int main(int argc, char **argv)
{

  printf("================== programme d'affichage sur la sortie standard =================== \n");
  /***
   * code de format :
   *  %d pour les entiers
   *  %f pour les flotants
   *  %e pour la notation scientifique
   *  */
  printf(" ===== Codes de format =====\n");
  printf(" entier %d\n", 2); // %d pour le format
  printf(" decimal %f\n", 3.14);
  printf("notation exponentielle %e\n", 1.24136663888);

  /**
   *  parametre de gabarit
   */
  printf(" ===== Controle de gabarit =====\n");
  printf("entier %5d\n", 2);
  printf("decimal %10f\n", 1.24136663888);

  /**
   * controle de la precision des formats
   */
  printf(" ===== Controle de la precision des formats =====\n");
  printf("decimal %10.3f\n", 1.34267452); // gabarit min 10 et 3 chiffres apres le point

  /**
   * Un exemple un pleu plus compliqué utilisant une précision variable
   */
  int n, p;
  float x;
  x = 3.14562;
  for (n = 6; n <= 8; n++)
    for (p = 0; p <= 5; p++)
      printf(" %d.%d : %*.*f\n", n, p, n, p, x);

  return 0; // valeur de retour de la function main
}
