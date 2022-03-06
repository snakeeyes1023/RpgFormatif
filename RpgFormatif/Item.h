/*
Les items
Un nom
Une qualit� (commun, rare, �pique, l�gendaire)
Une valeur ($$)
Une liste des classes qui peuvent l'utiliser
Un pourcentage de chance de rester derri�re un monstre lorsqu'il meurt
*/

#pragma once
#include "Qualite.h"
#include "Classe.h"
#include <vector>
#include <iostream>

class Item
{	
public:
	std::string m_nom;
	int m_dropChance;
	Qualite m_qualite;
	float m_valeur;
	std::vector<Classe> m_utilisable;
};

