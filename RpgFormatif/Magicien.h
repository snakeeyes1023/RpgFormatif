/*
Le magicien
*/

#pragma once
#include "Classe.h"
#include "Sorcier.h"

class Magicien :
    public Classe
{
public:
    /// <summary>
    /// Cr�er un Magicien
    /// </summary>
    Magicien();

    /// <summary>
    /// Cr�er un Magicien a partir d'une classe
    /// </summary>
    Magicien(Classe base);

    /// <summary>
    /// obtenir �volution du Magicien
    /// </summary>
    /// <returns></returns>
    Sorcier obtenirEvolution();

    /// <summary>
    /// Regenerer les ressources du magicien
    /// </summary>
    void regenererRessource();

    /// <summary>
    /// Lance un boule de feu
    /// </summary>
    void sortFeu();

    /// <summary>
    /// rajoute des pv au magicien
    /// </summary>
    void sortProtection();

    /// <summary>
    /// Redonne du mana
    /// </summary>
    float regeneration();
};

