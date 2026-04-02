#include <iostream>
#include <string>
using namespace std;
void saisie_nom(string tab[],int n){
    for(int i=0;i<n;i++){
        cout<<"entrez le nom de l'eleve"<<i+1<<endl;
        cin>>tab[i];
    }
}
void saisie_notes(float tab[],int n){
    for(int i=0;i<n;i++){
        cout<<"entrez la note de l'eleve"<<i+1<<endl;
        cin>>tab[i];
    }
}
float moyenne(float tab[],int n){
    float moy,somme(0);
    for(int i=0;i<n;i++){
            somme=somme+tab[i];
    }
    return moy=somme/n;
}
int main (){
cout<<"Bienvenue, veuillez entrer le nombre d'eleve"<<endl;
int n;
cin>>n;
const int TAILLE=n;
string nom[TAILLE];float notes[TAILLE];
cout<<"tapez: "<<endl<<"1.pour saisir les noms des eleves"<<endl<<"2. pour saisir la notes des eleves"<<endl<<"3.pour calculer et afficher la moyenne des eleves"<<endl<<"4. pour quitter"<<endl;
int choix ;
cin>> choix;
do{
    switch(choix){
        case 1:
            saisie_nom(nom,TAILLE);
            break;
        case 2:
            saisie_notes(notes,TAILLE);
            break;
        case 3:
            cout<<"la moyenne generale de la classe est:"<<moyenne(notes,TAILLE)<<endl;
            break;
        case 4:
            cout<<"aurevoir"<<endl;
            break;
        default:
            cout<<"entree invalide"<<endl;
    }
}while(choix!=4);
return 0;
}
