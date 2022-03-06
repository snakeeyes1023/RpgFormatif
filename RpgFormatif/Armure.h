/*
Et les armures ont:
Un coefficient de d�fense
*/

#pragma once

#include "Item.h"

class Armure :
	public Item
{
public:
	/// <summary>
	/// Cr�er un armure avec un nom
	/// </summary>
	/// <param name=""></param>
	Armure(std::string);

	/// <summary>
	/// Cr�er un armure
	/// </summary>
	/// <param name=""></param>
	Armure();

	float obtenirCooeficientDefense();
private:
	float m_cooeficientDefense;
};

