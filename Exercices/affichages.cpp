#include <iostream>
#include "affichages.h"


void AfficheCoincide(bool bTest)
{
	if (bTest)
	{
		std::cout << "Les vecteurs sont �gaux" << std::endl;
	}
	else
	{
		std::cout << "Les vecteurs ne sont pas �gaux" << std::endl;
	}
}