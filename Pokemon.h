/*
Author : Fontom's
*/
#pragma once

#include "Type.h"
#include <string>

class Pokemon
{
private:
    std::string nom;
    Type type;
    int pv;

public:
    Pokemon(std::string nom, Type type = Normal, int pv = 50);
    std::string getNom();
    Type setType(Type type);
    Type getType();
    int setPV(int pv);
    int getPV();
    std::string afficher();
};
