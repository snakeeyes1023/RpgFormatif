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
    /// Créer un chevalier
    /// </summary>
    Chevalier();

    /// <summary>
    /// obtenir évolution de l'chevalier
    /// </summary>
    /// <returns></returns>
    Assassin obtenirEvolution();
};
