#include "Assassin.h"

Assassin::Assassin()
{
	m_pvParNiveau = 2;
	m_modifAttaqueParNiveau = 3;
	m_typeRessource = TypeRessource::adrenaline;
	m_valRessource = 1;
}

Assassin Assassin::obtenirEvolution()
{
	return Assassin();
}
