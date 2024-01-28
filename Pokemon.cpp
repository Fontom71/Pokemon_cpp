/*
Author : Fontom's
*/
#include "Pokemon.h"

Pokemon::Pokemon(std::string nom, Type type, int pv)
{
    this->nom = nom;
    this->type = type;
    this->pv = pv;
}

std::string Pokemon::getNom()
{
    return this->nom;
}

Type Pokemon::setType(Type type)
{
    return this->type = type;
}

Type Pokemon::getType()
{
    return this->type;
}

int Pokemon::setPV(int pv)
{
    return this->pv = pv;
}

int Pokemon::getPV()
{
    return this->pv;
}

std::string Pokemon::afficher()
{
    std::string typeString;
    switch (this->type)
    {
    case Normal:
        typeString = "Normal";
        break;
    case Eau:
        typeString = "Eau";
        break;
    case Feu:
        typeString = "Feu";
        break;
    case Plante:
        typeString = "Plante";
        break;
    case Roche:
        typeString = "Roche";
        break;
    default:
        typeString = "Normal";
        break;
    }
    return this->nom + " (" + typeString + ") " + std::to_string(this->pv) + " PV";
}