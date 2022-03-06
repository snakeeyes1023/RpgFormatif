/*
Et les armures ont:
Un coefficient de défense
*/

#pragma once

#include "Item.h"

class Armure :
	public Item
{
public:
	/// <summary>
	/// Créer un armure avec un nom
	/// </summary>
	/// <param name=""></param>
	Armure(std::string);

	/// <summary>
	/// Créer un armure
	/// </summary>
	/// <param name=""></param>
	Armure();

	float obtenirCooeficientDefense();
private:
	float m_cooeficientDefense;
};

