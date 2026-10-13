#ifndef VOITURE_H
#define VOITURE_H

#include <string>

class CVoiture {
private:
    std::string carburant;
    string marque; 
    string modele;
    int puissance;
    int vitesse;
    double posX;
    double posY;
    double kilometrageTotal;

public:
    CVoiture(string marque, string modele, int puissance, string carburant);

    void accelerer(int);
    void affiche();
    void arreter();
    void demarrer();
    void ralentir(int);
    void deplacer(double deltaX, double deltaY);

    // Getters
    double getPosX() const;
    double getPosY() const;
    double getKilometrageTotal() const;

    // Setters
    void setPosX(double NewPosX);
    void setPosY(double NewPosY);
    void setKilometrageTotal(double NewKilometrage);
};

#endif
