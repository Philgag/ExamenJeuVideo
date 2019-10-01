#include "stdafx.h"
#include "Implant.h"
#include <string>
using namespace std;


Implant::Implant()
{
	this->nom = "Bras robotique";
	this->partie = Bras;
	this->modif = 10;
	this->rarete = Rare;
	this->prix = 1000;
}

string Afficher()
{
	string stats;
	stats = "Nom : " + nom + ", Partie du corp : " + to_string(partie) + ", modification : +" + to_string(modif) + ", Rareté : " + to_string(rarete) + ", Prix : " + to_string(prix) + "$";
	return stats;
}


Implant::~Implant()
{
}
