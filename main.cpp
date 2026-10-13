#include "voiture.h"
#include <iostream>

using namespace std;

int main() {
    /*
    // Création d'une instance de CVoiture
    CVoiture voiture("Peugeot", "208", 100, "Essence");

    // Afficher les informations initiales de la voiture
    cout << "=== Informations de la voiture ===" << endl;
    voiture.affiche();


    // Démarrer la voiture
    cout << "=== Démarrage ===" << endl;
    voiture.demarrer();


    // Accélérer
    cout << "=== Accélération de 50 km/h ===" << endl;
    voiture.accelerer(50);
    // Afficher les informations de la voiture après accélération
    voiture.affiche();

    // Ralentir
    cout << "=== Ralentissement de 20 km/h ===" << endl;
    voiture.ralentir(20);
    // Afficher les informations de la voiture après ralentissement
    voiture.affiche();

    // Arrêter la voiture
    cout << "=== Arrêt ===" << endl;
    voiture.arreter();
    
    // Afficher les informations finales de la voiture
    voiture.affiche();

    return 0;
    */

    // Création de deux voitures
    CVoiture voiture1();
    CVoiture voiture2();

    // Déplacer la première voiture
    voiture1.deplacer(10.0, 5.0);
    voiture1.deplacer(-3.0, 2.0);

    voiture1.afficherPosition();

    cout << endl;

    // Déplacer la deuxième voiture
    voiture2.deplacer(7.0, -4.0);
    voiture2.deplacer(2.0, 3.0);

    voiture2.afficherPosition();

    cout << endl;

    // Affichage des kilométrages
    cout << "Kilométrage total de la voiture 1: " << voiture1.getKilometrageTotal() << " km" << endl;
    cout << "Kilométrage total de la voiture 2: " << voiture2.getKilometrageTotal() << " km" << endl;

    return 0;
}
