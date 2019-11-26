#pragma once

class CVecteur3d
{
	//membres
private:
	float fltX, fltY, fltZ;


	//prototype des methodes
public:
	// getter & setter
	float getX();
	void setX(float fltX);

	float getY();
	void setY(float fltY);

	float getZ();
	void setZ(float fltZ);


	//Exercice 69

	//constructeurs inline
	inline CVecteur3d(float fltX, float fltY, float fltZ)//;
	{
		this->fltX = fltX;
		this->fltY = fltY;
		this->fltZ = fltZ;
	}
	
	//overcharge d'un constructeur
	CVecteur3d();

	//fonction membre
	void initialisation(float fltX, float fltY, float fltZ);

	void affichage();

	//exercice 70
	
	//coincide par valeur
	bool coincideVal(CVecteur3d Vect);

	//Coincide par adresse
	bool coincideAdr(CVecteur3d* Vect);

	//Coincide par referrence
	bool coincideRef(CVecteur3d &Vect);

	//destructeur
	~CVecteur3d();



};

