#pragma once
#include <string>
using namespace std;
enum Special{feu, glace, terre, air, célestre, démoniaque, dragon, fée, lumière, ténèbre};

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

