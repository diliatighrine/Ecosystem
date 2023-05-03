#include <stdio.h>
#include <stdlib.h>
#include "ecosys.h"
#include <assert.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#include "ecosys.h"

int main(){

	int i =	 0;
	int x;
	int y;

	srand(time(NULL));

	Animal *proie = NULL;
	Animal *predateur = NULL;
	Animal *tete =NULL;




	for (i=0;i<20;i++){

		x=(int) (rand() % SIZE_Y );
		y=(int) (rand() % SIZE_X );
		ajouter_animal(x,y,0,&proie);

		x=(int) (rand() * SIZE_Y );
		y=(int) (rand() * SIZE_X );
		ajouter_animal(x,y,0,&predateur);
	}

	printf("nb predateurs : %u " , compte_animal_it(predateur));
	printf("nb proies : %u " , compte_animal_it(proie));

	afficher_ecosys(proie,predateur);

	liberer_liste_animaux(predateur);
	liberer_liste_animaux(proie);

	return 0;
}






