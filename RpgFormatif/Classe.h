/*
Chaque classe a �galement un type de ressource qui lui est propre.
Par exemple de l'endurance pour le guerrier, l'adr�naline pour l'assassin et le mana pour le magicien.
La m�thode de r�g�n�ration de cette resource est diff�rente pour chaque classe.
*/

#pragma once
#include "TypeRessource.h"

class Classe
{
public:

	/// <summary>
	/// reg�nerer la ressource de la classe
	/// </summary>
	void regenererRessource() {  };

	float m_tableExperience[20];
	float m_pvParNiveau;
	float m_modifAttaqueParNiveau;

	float m_valRessource;
	TypeRessource m_typeRessource;
};

