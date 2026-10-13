#include "voiture.h"
#include <iostream>
#include <cmath>

using namespace std;

// Constructeur
CVoiture::CVoiture(string marque, string modele, int puissance, string carburant) {
    this->marque = marque;
    this->modele = modele;
    this->puissance = puissance;
    this->carburant = carburant;
    this->vitesse = 0;
    this->posX = 0.0;
    this->posY = 0.0;
    this->kilometrageTotal = 0.0;
}

//Accélérer
void CVoiture::accelerer(int valeur) {
    vitesse += valeur;
}

//Afficher les informations
void CVoiture::affiche()
{
    cout << "Marque: " << marque << endl;
    cout << "Modèle: " << modele << endl;
    cout << "Puissance: " << puissance << " CV" << endl;
    cout << "Carburant: " << carburant << endl;
    cout << "Vitesse actuelle: " << vitesse << " km/h" << endl;
}

// Arrêter
void CVoiture::arreter() {
    vitesse = 0;
}

// Démarrer
void CVoiture::demarrer() {
    vitesse = 0;
}

// Ralentir
void CVoiture::ralentir(int valeur) {
    vitesse -= valeur;
    if (vitesse < 0) {
        vitesse = 0; // La vitesse ne peut pas être négative
    }
}

void CVoiture::deplacer(double deltaX, double deltaY) {
    posX += deltaX;
    posY += deltaY;
    kilometrageTotal += sqrt(deltaX * deltaX + deltaY * deltaY);
}

void CVoiture::afficherPosition(){
    cout << "Position actuelle: (" << posX << "km, " << posY << "km)" << endl;
    cout << "Kilométrage total: " << kilometrageTotal << " km" << endl;
}

// Getters
double CVoiture::getPosX() const {
    return posX;
}

double CVoiture::getPosY() const {
    return posY;
}

double CVoiture::getKilometrageTotal() const {
    return kilometrageTotal;
}

// Setters
void CVoiture::setPosX(double NewPosX) {
    posX = NewPosX;
}

void CVoiture::setPosY(double NewPosY) {
    posY = NewPosY;
}

void CVoiture::setKilometrageTotal(double NewKilometrage) {
    kilometrageTotal = NewKilometrage;
}