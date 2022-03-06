// RpgFormatif.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Personnage.h"
#include "Ennemie.h"
#include "Assassin.h"
#include "Sorcier.h"
#include "Magicien.h"
#include "Ombre.h"

int main()
{
	#pragma region Exercice 1

	//création d'ennemie et personnage
	Personnage joueur = Personnage("Snake", Assassin());
	Ennemie ennemie = Ennemie("Mechant");

	//attaque de base
	joueur.attaquer(ennemie);
	ennemie.attaquer(joueur);

	//Création de plein de classe
	Personnage sorcier = Personnage("Sorcier", Sorcier());
	Personnage magicien = Personnage("Magicien", Magicien());
	Personnage ombre = Personnage("Ombre", Ombre());

	#pragma endregion


	#pragma region Exercice 2

	//Utilisation de sorts d'un sorcier
	Sorcier sorcierSort = (Sorcier)sorcier.pouvoir();
	ennemie.recevoirDegat(sorcierSort.sortPoussiere());

	//Utilisation de sorts d'un magicien
	Magicien magicientSort = (Magicien)magicien.pouvoir();
	magicien.ajouterPv(magicientSort.regeneration());

	//(Évolution)
	sorcier.m_role = sorcierSort.obtenirEvolution();
	magicien.m_role = magicientSort.obtenirEvolution();

	#pragma endregion


	#pragma region Exercice 3

	//Création d'une arme
	Arme arme = Arme("Fusil");
	arme.m_qualite = Qualite::rare;
	arme.m_valeur = 10;
	arme.m_maxDg = 100;
	arme.m_minDg = 10;

	//Création d'une armure
	Armure armure = Armure("Fusil");
	armure.m_qualite = Qualite::epique;

	#pragma endregion

	std::cout << "Voir Code!\n";
}