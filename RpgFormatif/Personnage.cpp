#include "Personnage.h"

Personnage::Personnage(std::string nom, Classe classe)
{
	m_vie = 100;
	m_niveau = 1;
	m_experience = 0;
	m_nom = nom;
	m_role = classe;
	m_niveau = 1;
}

void Personnage::attaquer(Acteur& acteur)
{	
	acteur.recevoirDegat(2 * obtenirCoefficientAttaque());
}

void Personnage::recevoirDegat(float degat)
{
	m_vie -= (degat / obtenirCoefficientDefense());
}

Classe Personnage::pouvoir()
{
	return m_role;
}

float Personnage::obtenirCoefficientAttaque()
{
	return m_role.m_modifAttaqueParNiveau * m_niveau;
}

float Personnage::obtenirCoefficientDefense()
{
	return 1.3f;
}

