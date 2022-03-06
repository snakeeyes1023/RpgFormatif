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
    /// Créer un assassin
    /// </summary>
    Assassin();

    /// <summary>
    /// obtenir évolution d'un assassin
    /// </summary>
    Assassin obtenirEvolution();

};
