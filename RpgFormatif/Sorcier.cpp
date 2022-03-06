#include "Sorcier.h"
#include "Personnage.h"

Sorcier::Sorcier()
{
}

Sorcier::Sorcier(Classe classe)
{
	m_modifAttaqueParNiveau = classe.m_modifAttaqueParNiveau;
	m_pvParNiveau = classe.m_pvParNiveau;
	m_valRessource = classe.m_valRessource;
	m_typeRessource = classe.m_typeRessource;
}

Sorcier Sorcier::obtenirEvolution()
{
	return Sorcier();
}

float Sorcier::sortPoussiere()
{
	return 0.0f;
}


float Sorcier::regeneration()
{
	m_valRessource -= 10;
	return m_pvParNiveau * 1.5f;
}
