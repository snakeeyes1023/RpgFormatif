/*
Le Assassin
*/

#pragma once
#include "Classe.h"

class Assassin :
    public Classe
{
public:
    /// <summary>
    /// Cr�er un assassin
    /// </summary>
    Assassin();

    /// <summary>
    /// obtenir �volution d'un assassin
    /// </summary>
    Assassin obtenirEvolution();

};
