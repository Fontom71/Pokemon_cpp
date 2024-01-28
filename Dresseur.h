/*
Author : Fontom's
*/
#pragma once

#include <string>
#include "Pokemon.h"
#include <list>

class Dresseur
{
private:
    std::string nom;
    std::list<Pokemon> pokemons;
public:
    Dresseur(std::string nom);
    void capture(Pokemon pokemon);
    void entrainer(std::string nom);
    std::string afficher();
    Pokemon& getStrongestPokemon();
    void combat(Dresseur& dresseur);
    void combatDead(Dresseur& dresseur);
};
