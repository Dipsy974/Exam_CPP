//Exercice 3-4

#include "Lieu.cpp"
#include <iostream>
#include <string>

using namespace std; 


int main(){

    // string dest1 = "Bourg-Palette";
    // string dest2 = "Hyrule"; 
    // string choix;

    // cout << "Où voulez-vous aller ?  " << dest1 << " ou  " << dest2  << " ?"<< endl;
    // cin >> choix;
    // while(choix != dest1 && choix != dest2){
    //         cout << "Choisir parmi  " << dest1 << " ou  " << dest2  << "."<< endl;
    //         cin >> choix;
    // }

  
    // cout << "Vous avez atteint " << choix << ". Bon séjour !" << endl; 

    int turn = 0; 
    int choix; 
  
    Lieu * lieu1 = new Lieu("Hyrule", "C'est joli ici.", 12, {1,2});
    Lieu * lieu2 = new Lieu("Bourg-Palette", "Attention aux rats.", 1, {0,2});
    Lieu * lieu3 = new Lieu("Zanarkand", "Un peu vide.", 5, {0});

    vector<Lieu *> listeLieux = {lieu1, lieu2, lieu3}; 

    Lieu * currentLieu = lieu1; 


    cout << "Vous êtes à "<<currentLieu->getName() << " . " << currentLieu->getDescription() << endl; 

    while(turn <3){
        cout << "Ou voulez-vous aller ? " << endl;
        for(int i = 0; i< currentLieu->getDestinations().size(); i++){
            cout << i  << " : " << listeLieux[currentLieu->getDestinations().at(i)]->getName() << endl; ; 
        }
        cin >> choix; 
        // while(currentLieu->deplacement(currentLieu,choix) == false){
        //     cin >> choix;
        // }
        currentLieu = listeLieux.at(choix); 
        turn++; 
    }
    


    return 0; 
}