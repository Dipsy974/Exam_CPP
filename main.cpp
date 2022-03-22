//Exercice 1 

#include <iostream>
#include <string>

using namespace std; 


int main(){

    string dest1 = "Bourg-Palette";
    string dest2 = "Hyrule"; 
    string choix;
    string arriv;

    cout << "Où voulez-vous aller ? 1: " << dest1 << " ou 2: " << dest2  << " ?"<< endl;
    cin >> choix;

    switch(stoi(choix)){
            case 1:
                arriv = dest1;
                break;
            case 2:
                arriv = dest2; 
                break;
    }

    cout << "Vous avez atteint " << arriv << ". Bon séjour !" << endl; 

    return 0; 
}