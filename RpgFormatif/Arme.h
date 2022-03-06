/*
les armes ont:
Une plage (min - max) de dommage modifiée par sa qualité
Un méthode pour calculer le dommage lors d'une attaque
*/

#pragma once
#include "Item.h"

class Arme :
	public Item
{
public:
	/// <summary>
	/// créer un arme
	/// </summary>
	Arme();

	/// <summary>
	/// créer un arme avec un nom
	/// </summary>
	Arme(std::string nom);
	int m_minDg;
	int m_maxDg;
};

