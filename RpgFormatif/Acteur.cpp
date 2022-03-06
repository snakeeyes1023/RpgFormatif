#include "Acteur.h"

void Acteur::attaquer(Acteur& acteur)
{
	acteur.recevoirDegat(Acteur::m_niveau * 0.3f);
}

void Acteur::recevoirDegat(float degat)
{
	m_vie -= degat;

	if (m_vie <= 0)
	{
		mort();
	}
}

void Acteur::mort()
{
	std::cout << m_nom << " est mort.";
	m_vie = 0;
	m_niveau = 0;
	m_experience = 0;
}

void Acteur::ajouterPv(float vie)
{
	m_vie += vie;

	if (m_vie > m_vieMax)
	{
		m_vie = m_vieMax;
	}
}

float Acteur::obtenirPv()
{
	return m_vie;
}
