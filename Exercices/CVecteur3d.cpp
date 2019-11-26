#include "CVecteur3d.h"
#include <iostream>


float CVecteur3d::getX()
{
	return this->fltX;
}

void CVecteur3d::setX(float fltX)
{
	this->fltX = fltX;
}

float CVecteur3d::getY()
{
	return this->fltY;
}

void CVecteur3d::setY(float fltY)
{
	this->fltY = fltY;
}

float CVecteur3d::getZ()
{
	return this->fltZ;
}

void CVecteur3d::setZ(float fltZ)
{
	this->fltZ = fltZ;
}


CVecteur3d::CVecteur3d()
{
	this->fltX = NULL;
	this->fltY = NULL;
	this->fltZ = NULL;
}

void CVecteur3d::initialisation(float fltX, float fltY, float fltZ)
{
	this->fltX = fltX;
	this->fltY = fltY;
	this->fltZ = fltZ;
}

void CVecteur3d::affichage()
{
	std::cout << "X: " << this->getX() << std::endl;
	std::cout << "X: " << this->getY() << std::endl;
	std::cout << "X: " << this->getZ() << std::endl;
}
