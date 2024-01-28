/*
Author : Fontom's
*/
#include "Pokemon.h"
#include <iostream>
#include "Dresseur.h"

int main(int argc, char const *argv[])
{
    /* Début question 2 */
    Pokemon evoli("Evoli", Normal, 55);
    std::cout << evoli.afficher() << std::endl;
    Pokemon bulbizarre("Bulbizarre");
    std::cout << bulbizarre.afficher() << std::endl;
    bulbizarre.setType(Plante);
    bulbizarre.setPV(45);
    std::cout << bulbizarre.afficher() << std::endl;
    /* Fin question 2 */

    /* Début question 4 */
    Dresseur sacha("Sacha");
    sacha.capture(evoli);
    sacha.capture(bulbizarre);
    std::cout << sacha.afficher() << std::endl;
    sacha.entrainer("Evoli");
    std::cout << sacha.afficher() << std::endl;
    /* Fin de question 4 */

    /* Début question 6 */
    Dresseur ondine("Ondine");
    Pokemon pikachu("Pikachu", Feu, 80);
    Pokemon carapuce("Carapuce", Eau, 90);
    Pokemon salameche("Salameche", Feu, 100);
    ondine.capture(pikachu);
    ondine.capture(carapuce);
    ondine.capture(salameche);
    std::cout << sacha.afficher() << std::endl;
    std::cout << ondine.afficher() << std::endl;
    std::cout << sacha.getStrongestPokemon().afficher() << std::endl;
    std::cout << ondine.getStrongestPokemon().afficher() << std::endl;
    sacha.combat(ondine);
    std::cout << sacha.getStrongestPokemon().afficher() << std::endl;
    std::cout << ondine.getStrongestPokemon().afficher() << std::endl;
    sacha.combatDead(ondine);
    std::cout << sacha.afficher() << std::endl;
    std::cout << ondine.afficher() << std::endl;
    /* Fin question 6 */

    return 0;
}
