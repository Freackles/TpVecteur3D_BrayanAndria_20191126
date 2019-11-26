#include "CVecteur3d.h"
#include <iostream>

int main()
{
	CVecteur3d vect1;
	CVecteur3d vect2(5, 10, 15);


	//tests
	vect1.affichage();
	vect2.affichage();

	vect1.initialisation(3, 6, 9);
	vect1.affichage();
	

	return 0;
}

