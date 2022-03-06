#include "Ennemie.h"

Ennemie::Ennemie(std::string nom)
{
	m_nom = nom;
	m_vie = 100;
	m_vieMax = 100;
	m_experience = 0;
	m_niveau = 1;
	m_coefficientDefense = 2;
}

void Ennemie::attaquer(Acteur& acteur)
{
	acteur.recevoirDegat(m_coefficientDegat * m_niveau);
}

void Ennemie::recevoirDegat(float degat)
{
	Acteur::recevoirDegat(degat / m_coefficientDefense);
}
