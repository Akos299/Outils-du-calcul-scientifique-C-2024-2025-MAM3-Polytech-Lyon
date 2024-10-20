/* Le but de cet exercice est de voir comment utiliser la fonction
 *  scanf.
 */

// 1. Inclure le(s) fichier d'entête necessaire(s)
#include <stdio.h>

// 2. Fonction principal main. Pour l'instant ne nous préocupons pas de arguments.
int main(int argc, char **argv)
{
  // declaration sans initialisation de trois variables entiers
  int n, m, p;
  printf("donnez la valeur de n : ");
  scanf("%d", &n);
  printf("n vaut %d .\n", n);
  printf("donnez la valeur de p : ");
  scanf("%d", &p);
  printf("p vaut %d .\n", p);

  /**
   * reprener l'exercice pour :
   * 1. des variables de float
   * 2. jouer avec les gabarits et la précision comme dans l'exo précédents
   */
  return 0;
}
