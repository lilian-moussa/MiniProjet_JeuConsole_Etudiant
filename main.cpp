#include <iostream>
using namespace std;

void zanzibarV1();


int main() {

    zanzibarV1();

    return 0;
}

//Fonction de zanzibar
void zanzibarV1(){
    //Variables des 3 lancers de des
    int de1=0;
    int de2=0;
    int de3=0;
    int totalScore=0; //Score total du joueur

    // Jouer pendant 3 tours
    for (int tour = 1; tour <= 3; tour++) {
        cout << "Tour " << tour << " : " << endl;

        // Demander à l'utlisateur la valeur des 3 des
        cout << " Saisir la valeur du premier de (entre 1 et 6) " << endl;
        cin >> de1;

        cout << " Saisir la valeur du second de (entre 1 et 6) " << endl;
        cin >> de2;

        cout << " Saisir la valeur du troisieme de (entre 1 et 6) " << endl;
        cin >> de3;

        // Vérifier si les valeurs sont valides (entre 1 et 6)
        if ((de1 >= 1 && de1 <= 6) && (de2 >= 1 && de2 <= 6) && (de3 >= 1 && de3 <= 6)) {
            cout << "Les valeurs des lancers sont valides." << endl;

        } else {
            cout << "Une ou plusieurs valeurs sont incorrectes. Les valeurs doivent être entre 1 et 6." << endl;
        }

        // Affichage du score total après ce tour
        cout << "Score total après ce tour : " << totalScore << endl << endl;

        if (de1 || de2 || de3 == 1){
            totalScore=100;
        }
        else
            if(de1 || de2 || de3 == 6){
                totalScore=60;
            }
            else{
                totalScore= de1 + de2 + de3;
            }

    }

    // Affichage du score final après 3 tours
    cout << "Le score final du joueur après 3 tours est : " << totalScore << endl;

}
