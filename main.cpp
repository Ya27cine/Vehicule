#include <iostream>
#include<vector>
#include"Vehicule.h"

using namespace std;

int main()
{
   Garage vehicule ;

   vehicule.ajouter_Vehicule(new Voiture(2400,2001,4));
   vehicule.ajouter_Vehicule(new Moto(1450,2010,180.5));
   vehicule.ajouter_Vehicule(new Camion(5000,2013,887.90));

    vehicule.affiche() ;

    vehicule.detruire_tout();

    return 0;
}
