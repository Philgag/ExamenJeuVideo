#pragma once
#include <string>
using namespace std;
enum Special{feu, glace, terre, air, c�lestre, d�moniaque, dragon, f�e, lumi�re, t�n�bre};

class Cyborg
{
private:
	int numero;
	int force;
	int vitesse;
	int defense;
	int prix;
	Special special;


public:
	Cyborg(int numero, int force, int vitesse, int defense, Special special);

	string Afficher();

	~Cyborg();
};

