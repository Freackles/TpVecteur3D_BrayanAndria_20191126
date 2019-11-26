#include "CVecteur3d.h"
#include <iostream>
#include <cmath>


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

bool CVecteur3d::coincideVal(CVecteur3d Vect) {
	if ((this->fltX == Vect.fltX) && (this->fltY == Vect.fltY) && (this->fltZ == Vect.fltZ))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool CVecteur3d::coincideAdr(CVecteur3d * Vect) {
	if ((this->fltX == Vect->fltX) && (this->fltY == Vect->fltY) && (this->fltZ == Vect->fltZ))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool CVecteur3d::coincideRef(CVecteur3d &Vect)
{
	if ((this->fltX == Vect.fltX) && (this->fltY == Vect.fltY) && (this->fltZ == Vect.fltZ))
	{
		return true;
	}
	else
	{
		return false;
	}
}

CVecteur3d::~CVecteur3d()
{
}

float CVecteur3d::norme()
{
	return sqrt(powf(this->fltX, 2.0f) + powf(this->fltY, 2.0f) + powf(this->fltZ, 2.0f));
}

CVecteur3d CVecteur3d::normaxVal(CVecteur3d vect, CVecteur3d vect2)
{
	if (vect2.norme() > vect.norme())
	{
		return vect2;
	}
	else
	{
		return vect;
	}
}

CVecteur3d CVecteur3d::normaxAdr(CVecteur3d* vect, CVecteur3d* vect2)
{
	if (vect2->norme() > vect->norme())
		return *vect2;
	else
	{
		return *vect;
	}
}

CVecteur3d CVecteur3d::normaxRef(CVecteur3d& vect1, CVecteur3d& vect2)
{
	if (vect2.norme() > vect1.norme())
		return vect2;
	else
	{
		return vect1;
	}
}

CVecteur3d CVecteur3d::sommeVect(CVecteur3d vect)
{
	return CVecteur3d(this->fltX+vect.fltX, this->fltY+vect.fltY, this->fltZ+vect.fltZ);
}

CVecteur3d CVecteur3d::prodScalaire(CVecteur3d vect)
{
	return CVecteur3d(this->fltX * vect.fltX, this->fltY * vect.fltY, this->fltZ * vect.fltZ);
}
