//Vehicule
========
#include <iostream>
#include"Vehicule.h"

using namespace std;

/**< =======..........===============================....==========================================...........========= */

Vehicule ::  Vehicule(int p=0 ,int a=2000):
   m_prix(p) ,annee_fabr(a) {}

/**< =======..........===============================....==========================================...........========= */

Voiture :: Voiture(int prix=0 ,int annee=2000 ,int porte=0 ):
   Vehicule(prix ,annee) ,m_portes(porte) {}

/**< =======..........===============================....==========================================...........========= */

Camion :: Camion(int prix=0 ,int annee=2000 ,double pd=0.0):
   Vehicule(prix ,annee) ,m_poids(pd) {}

/**< =======..........===============================....==========================================...........========= */

Moto ::  Moto(int prix=0 ,int annee=2000 ,float vit=0.0):
   Vehicule(prix ,annee) ,m_vitesse(vit)  {}
/**< =======..........===============================....==========================================...........========= */

void Vehicule  :: affiche() {  cout << "Ceci est une Veh"<< endl;   }
/**< =======..........===============================....==========================================...........========= */

void Voiture  :: affiche() {  cout << "Ceci est une voiture avec " << m_portes << " portes et coutant "
                                     << m_prix << " euros,l'annee de Fabrication "<<annee_fabr<< endl;     }

/**< =======..........===============================....==========================================...........========= */

void Moto    :: affiche() {cout << "Ceci est une moto allant a " << m_vitesse << " km/h et coutant "
                                    << m_prix << " euros,l'annee de Fabrication "<<annee_fabr <<endl;      }

/**< =======..........===============================....==========================================...........========= */

void Camion  :: affiche() {cout << "Ceci est une Camion allant a " << m_poids << " kg et coutant "
                                    << m_prix << " euros,l'annee de Fabrication "<<annee_fabr<< endl;      }

/**< =======..........===============================....==========================================...........========= */

int Voiture :: nbr_roue() const{ return 4;}
int Moto    :: nbr_roue() const{ return 2;}
int Camion  :: nbr_roue() const{ return 4;}

/**< =======..........===============================....==========================================...........========= */

/////  class Garage :
int Garage :: get_taille()
{  return listeVehicules.size();  }

/**< =======..........===============================....==========================================...........========= */

void Garage :: ajouter_Vehicule(Vehicule* nouveau){
    if( nouveau != nullptr)
        listeVehicules.push_back(nouveau);
}
/**< =======..........===============================....==========================================...........========= */

void Garage :: affiche() {
  for(auto &veh : listeVehicules )
             veh->affiche();
}
/**< =======..........===============================....==========================================...........========= */

void Garage :: detruire_tout(){
    for( auto veh : listeVehicules )
        delete veh ;
  listeVehicules .clear();

  /*swap(listeVehicules.back ,
       listeVehicules[index]);

  listeVehicules.pop_back();*/
}
/**< =======..........===============================....==========================================...........========= */
