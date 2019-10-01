// Examen1JeuVideo.cpp : définit le point d'entrée pour l'application console.
//
#include "Implant.h"
#include "Cyborg.cpp"
#include "Cyborg.h"
#include "stdafx.h"
#include <vector>
#include <cstdlib>
#include <iostream>
using namespace std;


void main()
{
	int choix;

	cout << "Entrez : 1 pour afficher les 25 cyborgs" << endl;
	cout << "Entrez : 2 pour afficher les implants" << endl;
	cout << "Entrez : 3 pour afficher la création de cyborg" << endl;
	cin >> choix;

	if (choix == 1)
	{
		menu1();
	}
	else if (choix == 2) 
	{
		menu2();
	}
	else 
	{
		menu3();
	}

	cin.get();
}

void menu1() 
{
	vector<Cyborg> cyborgs;
	for (int i = 1; i <= 25; ++i)
	{
		int a = rand() % 101;
		int b = rand() % 101;
		int c = rand() % 101;
		Special d = static_cast<Special>(rand() % 11);
		cyborgs.push_back(Cyborg(i, a, b, c, d));
		string x = cyborgs[i].Afficher();
		cout << x;
	}
}
void menu2() 
{
	Implant implant;
	string x = implant.Afficher();
	cout << x;
}
void menu3() 
{
	int a;
	int b;
	int c;
	int d;
	int e;
	Special f;

	cout << "Entrez un numéro de cyborg supérieur à 25 : ";
	cin >> a;
	cout << "Entrez la force de votre cyborg : ";
	cin >> b;
	cout << "Entrez la vitesse de votre cyborg : ";
	cin >> c;
	cout << "Entrez la défense de votre cyborg : ";
	cin >> d;
	cout << "Entrez un nombre entre 1 et 10 pour la caractéristique spéciale de votre cyborg (1. Feu 2. Glace 3. Terre 4. Air 5. Célestre 6. Démoniaque 7. Dragon 8. Fée 9. Lumière 10. Ténèbre): ";
	cin >> e;
	e = e - 1;
	f = static_cast<Special>(e);
	Cyborg cyborg(a, b, c, d, f);
}

