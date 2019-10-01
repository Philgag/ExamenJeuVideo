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
	stats = "Numéro : " + to_string(numero) + ", Force : " + to_string(force) + ", Vitesse : " + to_string(vitesse) + ", Défense : " + to_string(defense) + ", Caractéristique Spéciale : " + to_string(special);
	return stats;
}


Cyborg::~Cyborg()
{
}
