/*
Les items
Un nom
Une qualité (commun, rare, épique, légendaire)
Une valeur ($$)
Une liste des classes qui peuvent l'utiliser
Un pourcentage de chance de rester derrière un monstre lorsqu'il meurt
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

