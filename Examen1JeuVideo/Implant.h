#pragma once
#include <string>
using namespace std;
enum Corp{Bras, Jambe, Torse};
enum Rarete{Commun, Rare, �pic, L�gendaire};

class Implant
{
private:
	string nom;
	Corp partie;
	int modif;
	Rarete rarete;
	int prix;

public:
	Implant();

	string Afficher();

	~Implant();
};

