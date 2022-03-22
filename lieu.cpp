#ifndef LIEU_CPP
#define LIEU_CPP

#include "Lieu.h"
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

    Lieu::Lieu(){
        _name = "Inconnu";
        _description = "Inconnue";
        _diff = 0;
        _lieuDispo={}; 

    } 

    Lieu::Lieu(string name, string description, int difficulty, vector<int> tableauLieu){
        _name = name;
        _description = description;
        _diff = difficulty;
        _lieuDispo = tableauLieu; 
    } 
        
     
    string Lieu::getName(){
        return _name; 
    }
    // renvoie le nom du lieu


    string Lieu::getDescription(){
        return _description; 
    }
    // renvoie la description du lieu

    vector<int> Lieu::getDestinations(){
        return _lieuDispo; 

    }
    // renvoie la liste des destinations

    bool Lieu::deplacement(Lieu depart, int choix){
        
        if (count(depart.getDestinations().begin(), depart.getDestinations().end(), choix)) {
            
            return true; 
        }
        else {
            cout << "Déplacement impossible ici.";
            return false; 
        }
        return false; 
    }




#endif