#include "Magicien.h"
#include "Sorcier.h"

Magicien::Magicien()
{
}


Magicien::Magicien(Classe classe)
{
	m_modifAttaqueParNiveau = classe.m_modifAttaqueParNiveau;
	m_pvParNiveau = classe.m_pvParNiveau;
	m_valRessource = classe.m_valRessource;
	m_typeRessource = classe.m_typeRessource;
}

Sorcier Magicien::obtenirEvolution()
{
	return Sorcier();
}

void Magicien::regenererRessource()
{
}

void Magicien::sortFeu()
{
}

void Magicien::sortProtection()
{
}

float Magicien::regeneration()
{
	return m_pvParNiveau * 2.4;
}
