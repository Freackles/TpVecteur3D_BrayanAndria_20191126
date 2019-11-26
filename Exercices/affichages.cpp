#include <iostream>
#include "affichages.h"
#include "CVecteur3d.h"


void AfficheCoincide(bool bTest)
{
	if (bTest)
	{
		std::cout << "Les vecteurs sont égaux" << std::endl;
	}
	else
	{
		std::cout << "Les vecteurs ne sont pas égaux" << std::endl;
	}
}

void AfficheSomeScal(CVecteur3d vect, CVecteur3d vect2, int test)
{
	CVecteur3d vectTemp;

	//si on souhaite obtenir la somme
	if (test = 0)
	{
		vectTemp = vect.sommeVect(vect2);
		std::cout << "La somme de ces 2 vecteurs est" << std::endl;
		vectTemp.affichage();
	}

	//si on souhaite le produit scalaire
	else
	{
		vectTemp = vect.prodScalaire(vect2);
		std::cout << "Le produit scalaire de ces 2 vecteurs est" << std::endl;
		vectTemp.affichage();
	}
}
