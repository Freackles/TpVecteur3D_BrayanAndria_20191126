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


	//exercice 71

	//norme
	float norme();

	//normax valeur
	CVecteur3d normaxVal(CVecteur3d vect, CVecteur3d vect2);

	//normax Adresse
	CVecteur3d normaxAdr(CVecteur3d *vect, CVecteur3d *vect2);

	//normax Reference
	CVecteur3d normaxRef(CVecteur3d& vect1, CVecteur3d& vect2);

	//exercice 72

	//fonction d'affichage
	void AfficheSomeScal(CVecteur3d vect, CVecteur3d vect2, int test);

	//somme de 2 vecteurs
	CVecteur3d sommeVect(CVecteur3d vect);

	//produit scalaire de 2 vecteurs
	CVecteur3d prodScalaire(CVecteur3d vect);
};

