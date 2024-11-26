#include <iostream>
using namespace std;

void zanzibarV1();
void zanzibarV2();

int main() {

    zanzibarV1();
    zanzibarV2();
    return 0;
}

void zanzibarV1(){
    //Variables des 3 lancers de des
    int de1=0;
    int de2=0;
    int de3=0;

    // Demander à l'utlisateur la valeur des 3 des
    cout<<" Saisir la valeur du premier de (entre 1 et 6) ";
    cin>>de1;

    cout<<" Saisir la valeur du second de (entre 1 et 6) ";
    cin>>de2;

    cout<<" Saisir la valeur du troisieme de (entre 1 et 6) ";
    cin>>de3;
}

void zanzibarV2(){
    //Tableau comprenant les valeurs d'un lancer
    int de[3] = {0};

    // Demander à l'utlisateur la valeur des 3 des
    cout<<" Saisir la valeur du premier de (entre 1 et 6) ";
    cin>>de[0];

    cout<<" Saisir la valeur du second de (entre 1 et 6) ";
    cin>>de[1];

    cout<<" Saisir la valeur du troisieme de (entre 1 et 6) ";
    cin>>de[2];

}