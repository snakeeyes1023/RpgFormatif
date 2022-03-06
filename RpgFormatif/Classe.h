/*
Chaque classe a également un type de ressource qui lui est propre.
Par exemple de l'endurance pour le guerrier, l'adrénaline pour l'assassin et le mana pour le magicien.
La méthode de régénération de cette resource est différente pour chaque classe.
*/

#pragma once
#include "TypeRessource.h"

class Classe
{
public:

	/// <summary>
	/// regénerer la ressource de la classe
	/// </summary>
	void regenererRessource() {  };

	float m_tableExperience[20];
	float m_pvParNiveau;
	float m_modifAttaqueParNiveau;

	float m_valRessource;
	TypeRessource m_typeRessource;
};

