#include "Armure.h"

Armure::Armure(std::string nom)
{
    m_nom = nom;
}

Armure::Armure()
{
    m_nom = "Défault";
}

float Armure::obtenirCooeficientDefense()
{
    return m_cooeficientDefense;
}
