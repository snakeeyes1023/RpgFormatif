/*
L'ombre
*/

#pragma once
#include "Classe.h"
class Ombre :
    public Classe
{
public:

    /// <summary>
    /// Créer un ombre
    /// </summary>
    Ombre();

    /// <summary>
    /// obtenir évolution d'un ombre
    /// </summary>
    Classe obtenirEvolution();
};

