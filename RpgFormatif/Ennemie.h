/*
un ennemi:
Un coefficient d'attaque et de d�fense selon son niveau
De 0 � 3 items qu'il va laisser derri�re lorsqu'il meurt
Un nombre de points de dommage de base
Lorsqu'il attaque on tient compte du niveau pour les dommages finaux
Lorsqu'il re�oit des d�g�ts il faut tenir compte de son coefficient de d�fense
*/


#pragma once
#include "Acteur.h"
#include "Classe.h"
#include "Arme.h"
#include "Armure.h"
#include "Item.h"

class Ennemie :
    public Acteur
{
public:

    /// <summary>
    /// Cr�er un ennemie
    /// </summary>
    /// <param name="nom">nom de l'ennemie</param>
    Ennemie(std::string nom);

    /// <summary>
	/// Attaquer un autre acteur
	/// </summary>
	/// <param name="acteur">Ennemie acteur</param>
    virtual void attaquer(Acteur& acteur) override;


    /// <summary>
    /// Recevoir des d�gat
    /// </summary>
    /// <param name="degat">nombre de vie a enlever</param>
    virtual void recevoirDegat(float degat) override;

private:
    Item m_drop[3];

    float m_coefficientDefense;

    float m_coefficientDegat;

    float m_dommageBase;
};

