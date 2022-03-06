/*
Le Chevalier
*/

#pragma once
#include "Classe.h"
#include "Assassin.h"

class Chevalier :
    public Classe
{
public:

    /// <summary>
    /// Cr�er un chevalier
    /// </summary>
    Chevalier();

    /// <summary>
    /// obtenir �volution de l'chevalier
    /// </summary>
    /// <returns></returns>
    Assassin obtenirEvolution();
};
