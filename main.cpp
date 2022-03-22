//Exercice 1 

#include <iostream>
#include <string>

using namespace std; 


int main(){

    string dest1 = "Bourg-Palette";
    string dest2 = "Hyrule"; 
    string choix;

    cout << "Où voulez-vous aller ?  " << dest1 << " ou  " << dest2  << " ?"<< endl;
    cin >> choix;
    while(choix != dest1 && choix != dest2){
            cout << "Choisir parmi  " << dest1 << " ou  " << dest2  << "."<< endl;
            cin >> choix;
    }

  
    cout << "Vous avez atteint " << choix << ". Bon séjour !" << endl; 

    return 0; 
}