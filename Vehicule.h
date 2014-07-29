#include <iostream>
#include<vector>
using namespace std;


/**<*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
                                        //
 class Vehicule                         //
 {                                      //
   public :                             //
     Vehicule(int,int);                 //
     virtual void affiche();            //
     virtual int nbr_roue() const = 0 ; //
                                        //
   protected :                          //
     int m_prix ;                       //
     int annee_fabr;                    //
                                        //
 };                                     //
                                        //
/**<*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

/**<*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
                                        //
class Voiture : public Vehicule         //
{                                       //
   public :                             //
      Voiture(int,int,int);             //
      virtual void affiche()  ;         //
      int nbr_roue() const;             //
                                        //
   private :                            //
    int m_portes;                       //
};                                      //
                                        //
/**<*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

/**<*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
                                        //
class Camion : public Vehicule          //
{                                       //
    public :                            //
      Camion(int,int,double);           //
      virtual void affiche() ;          //
      int nbr_roue() const;             //
                                        //
    private:                            //
      double m_poids;                   //
};                                      //
                                        //
/**<*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

/**<*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
                                        //
class Moto : public Vehicule            //
{                                       //
   public :                             //
     Moto(int,int,float);               //
     virtual void affiche() ;           //
     int nbr_roue() const;              //
                                        //
   private :                            //
     float m_vitesse;                   //
};                                      //
/**<*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

/**<*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
                                        //
 class  Garage                          //
{                                       //
   private :                            //
     vector<Vehicule*> listeVehicules ; //
                                        //
   public :                             //
     ~Garage(){}                        //
     int   get_taille();                //
     void  ajouter_Vehicule(Vehicule*); //
     void  affiche();                   //
     void  detruire_tout();             //
                                        //
};                                      //
                                        //
/**<*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/







