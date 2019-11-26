#include "CVecteur3d.h"
#include "affichages.h"
#include <iostream>

int main()
{
	CVecteur3d vect1;
	CVecteur3d vect2(5, 10, 15);
	AfficheCoincide(vect1.coincideVal(vect2));
	


	//tests
	/*vect1.affichage();
	vect2.affichage();*/
	

	vect1.initialisation(5, 10, 15);
	AfficheCoincide(vect2.coincideRef(vect1));
	AfficheSomeScal(vect1, vect2, 0);

	vect2.initialisation(3, 6, 9);
	AfficheCoincide(vect1.coincideAdr(&vect2));
	AfficheSomeScal(vect1, vect2, 1);
	/*vect1.affichage();*/
	
	AffichageInstances(CVecteur3d::Count());

	return 0;
}

