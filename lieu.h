#ifndef LIEU_H
#define LIEU_H

#include <string>
#include <vector>
#include <iostream>

class Lieu{
    
    protected:
        std::string _name;
        std::string _description; 
        int _diff; 
        std::vector<int> _lieuDispo;
        
     

    public:
        std::string getName();
        // renvoie le nom du lieu

        std::string getDescription();
        // renvoie la description du lieu

        std::vector<int> getDestinations();
        // renvoie la liste des destinations

        bool Lieu::deplacement(Lieu depart, int choix);
        // se déplace à une destination 

        Lieu(); 
        Lieu(std::string name, std::string description, int difficulty, std::vector<int> tableauLieu); 

}; 


#endif