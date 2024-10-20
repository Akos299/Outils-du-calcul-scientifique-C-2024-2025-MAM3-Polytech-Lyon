/* Le but de cet exercice est de voir comment utiliser les fonctions
* printf et scanf.
*/

// 1. Inclure le(s) fichier d'entete necessaires

#include<stdio.h>


// 2. Fonction principal main. Pour l'instant ne nous preocupons pas de arguments.

int main(int argc, char ** argv)
{

	printf("programme d'affichage sur la sortie standard \n");
	//format d'entree et code de format 
printf(" entier %d\n", 2);
printf(" decimal %f\n, 3.14);
printf("notation exponentielle %e\n", 124.56);

//parametre de gabarit
printf("entier %5d\n", 2);
printf("decimal %10f\n", 1.24136663888);

//controle de la precision des formats
printf("decimal %10.3f\n", 1.34267452); // gabarit min 10 et 3 chiffres apres le point

//gabarit et precision variables
int n,p;
float x;
x = 3.14562;
for(n=6;n<=8;n++)
  for(p=0; p<=5;p++)
    printf(" %d.%d : %*.*f\n, n,p,n,p,x);

} 
