/*
Author : Fontom's
*/
#include "Dresseur.h"
#include <iostream>
#include <ctime>

Dresseur::Dresseur(std::string nom)
{
    this->nom = nom;
}

void Dresseur::capture(Pokemon pokemon)
{
    this->pokemons.push_back(pokemon);
}

void Dresseur::entrainer(std::string nom)
{
    for (auto& pokemon : this->pokemons)
    {
        if (pokemon.getNom() == nom)
        {
            pokemon.setPV(pokemon.getPV() + 10);
        }
    }
}

std::string Dresseur::afficher()
{
    std::string result = this->nom + " :\n";
    for (auto pokemon : this->pokemons)
    {
        result += pokemon.afficher() + "\n";
    }
    return result;
}

Pokemon &Dresseur::getStrongestPokemon()
{
    Pokemon *strongestPokemon = nullptr;
    for (auto &pokemon : this->pokemons)
    {
        if (strongestPokemon == nullptr || pokemon.getPV() > strongestPokemon->getPV())
        {
            strongestPokemon = &pokemon;
        }
    }
    return *strongestPokemon;
}

void Dresseur::combat(Dresseur &dresseur)
{
    Pokemon &pokemon1 = this->getStrongestPokemon();
    Pokemon &pokemon2 = dresseur.getStrongestPokemon();
    
    //  Initialisation générateur
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    // Tirage au sort
    int totalPV = pokemon1.getPV() + pokemon2.getPV();
    int random = std::rand() % totalPV;

    if (random < pokemon1.getPV())
    {
        pokemon2.setPV(pokemon1.getPV() - 10);
    }
    else
    {
        pokemon1.setPV(pokemon2.getPV() - 10);
    }
}

void Dresseur::combatDead(Dresseur &dresseur)
{
    Pokemon &pokemon1 = this->getStrongestPokemon();
    Pokemon &pokemon2 = dresseur.getStrongestPokemon();

    // Initialisation générateur
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    while (pokemon1.getPV() > 0 && pokemon2.getPV() > 0)
    {
        // Tirage au sort
        int totalPV = pokemon1.getPV() + pokemon2.getPV();
        int random = std::rand() % totalPV;

        if (random < pokemon1.getPV())
        {
            pokemon2.setPV(pokemon2.getPV() - 10);
        }
        else
        {
            pokemon1.setPV(pokemon1.getPV() - 10);
        }

        std::cout << pokemon2.getNom() << " : " << pokemon2.getPV() << " PV" << std::endl;
        std::cout << pokemon1.getNom() << " : " << pokemon1.getPV() << " PV" << std::endl;
    }
}