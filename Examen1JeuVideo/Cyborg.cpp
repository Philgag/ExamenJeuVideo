#include "stdafx.h"
#include "Cyborg.h"
#include <string>
using namespace std;


Cyborg::Cyborg(int numero, int force, int vitesse, int defense, Special special)
{
	this->numero = numero;
	this->force = force;
	this->vitesse = vitesse;
	this->defense = defense;
	this->special = special;
}

string Afficher()
{
	string stats;
	stats = "Num�ro : " + to_string(numero) + ", Force : " + to_string(force) + ", Vitesse : " + to_string(vitesse) + ", D�fense : " + to_string(defense) + ", Caract�ristique Sp�ciale : " + to_string(special);
	return stats;
}


Cyborg::~Cyborg()
{
}
