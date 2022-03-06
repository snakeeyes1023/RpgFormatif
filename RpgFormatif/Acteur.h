/*
Les acteurs sont divisés en 2 catégories
Joueur
Ennemi
*/

#pragma once
#include <iostream>

class Acteur
{
public:

	/// <summary>
	/// Attaquer un autre acteur
	/// </summary>
	/// <param name="acteur">Ennemie acteur</param>
	virtual void attaquer(Acteur& acteur) = 0;

	/// <summary>
	/// Recevoir des dégat
	/// </summary>
	/// <param name="degat">nombre de vie a enlever</param>
	virtual void recevoirDegat(float degat) = 0;

	/// <summary>
	/// Faire mourrir l'acteur
	/// </summary>
	void mort();

	/// <summary>
	/// Ajouter des pv a l'acteur
	/// </summary>
	/// <param name="vie">nombre pv a ajouter</param>
	void ajouterPv(float vie);

	/// <summary>
	/// Otbenir nombre pv
	/// </summary>
	/// <returns>pv</returns>
	float obtenirPv();

protected:
	std::string m_nom;
	int m_niveau;
	int m_experience;
	float m_vieMax;
	float m_vie;
};

