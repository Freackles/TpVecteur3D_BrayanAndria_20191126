#include <iostream>
#include "affichages.h"


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