/*
* Le joueur peut attaquer d'autre acteurs, etc.
*/

#pragma once

#include <iostream>

#include "Acteur.h"
#include "Classe.h"
#include "Arme.h"
#include "Armure.h"
#include "Item.h"

using namespace std;

class Personnage :
    public Acteur
{
public:

    Personnage(std::string nom, Classe classe);

    /// <summary>
    /// Attaquer un autre acteur
    /// </summary>
    /// <param name="acteur">Ennemie acteur</param>
    virtual void attaquer(Acteur& acteur) override;


    /// <summary>
    /// Recevoir des dégat
    /// </summary>
    /// <param name="degat">nombre de vie a enlever</param>
    virtual void recevoirDegat(float degat) override;

    Classe pouvoir();

    Classe m_role;

private:

   Item m_equipement;
   Arme m_arme;
   Armure m_armure;
   Item m_items[10];

   float obtenirCoefficientAttaque();

   float obtenirCoefficientDefense();
};

