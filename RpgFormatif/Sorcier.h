/*
Le sorcier
*/

#pragma once
#include "Classe.h"
class Sorcier :
    public Classe
{
public:

    /// <summary>
    /// Cr�er un Sorcier
    /// </summary>
    Sorcier();

    /// <summary>
    /// Cr�er un Sorcier a partir d'une classe
    /// </summary>
    Sorcier(Classe classe);

    /// <summary>
    /// obtenir �volution du Sorcier
    /// </summary>
    /// <returns></returns>
    Sorcier obtenirEvolution();

    /// <summary>
    /// Manque d'imagination
    /// </summary>
    /// <returns></returns>
    float sortPoussiere();

    /// <summary>
    /// Regenerer du mana
    /// </summary>
    /// <returns></returns>
    float regeneration();
};

