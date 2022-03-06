/*
les armes ont:
Une plage (min - max) de dommage modifi�e par sa qualit�
Un m�thode pour calculer le dommage lors d'une attaque
*/

#pragma once
#include "Item.h"

class Arme :
	public Item
{
public:
	/// <summary>
	/// cr�er un arme
	/// </summary>
	Arme();

	/// <summary>
	/// cr�er un arme avec un nom
	/// </summary>
	Arme(std::string nom);
	int m_minDg;
	int m_maxDg;
};

