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
    /// Cr�er un ombre
    /// </summary>
    Ombre();

    /// <summary>
    /// obtenir �volution d'un ombre
    /// </summary>
    Classe obtenirEvolution();
};

