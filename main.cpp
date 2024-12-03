#include <iostream>
#include <cstdlib> // Pour utiliser rand() et srand()
#include <ctime>   // Pour utiliser time() pour initialiser rand()
using namespace std;

// Fonction de zanzibar pour un match entre 2 joueurs
void zanzibarV1();

int main() {
    // Initialisation du générateur de nombres aléatoires
    srand(time(0));

    // Lancer la fonction de match entre deux joueurs
    zanzibarV1();

    return 0;
}

// Fonction de zanzibar pour le match entre 2 joueurs
void zanzibarV1() {
    // Variables pour les 3 lancers de dés
    int de1 = 0, de2 = 0, de3 = 0;
    int scoreTour = 0;    // Score de chaque tour
    int totalScoreJoueur1 = 0; // Score total du joueur 1
    int totalScoreJoueur2 = 0; // Score total du joueur 2

    // Score de victoire
    const int scoreVictoire = 300;

    // Jouer jusqu'à ce qu'un joueur atteigne le score de victoire
    while (totalScoreJoueur1 < scoreVictoire && totalScoreJoueur2 < scoreVictoire) {
        cout << "\n--- Nouveau Tour ---" << endl;

        // Joueur 1
        cout << "Joueur 1, tour de lancement de des : " << endl;
        de1 = rand() % 6 + 1;  // Génère un nombre entre 1 et 6
        de2 = rand() % 6 + 1;
        de3 = rand() % 6 + 1;
        cout << "Lancer de des : " << de1 << ", " << de2 << ", " << de3 << endl;

        // Calcul du score pour joueur 1
        if (de1 == 1 || de2 == 1 || de3 == 1) {  // Cas où un des dés est égal à 1
            scoreTour = 100;
        } else if (de1 == 6 || de2 == 6 || de3 == 6) {  // Cas où un des dés est égal à 6
            scoreTour = 60;
        } else {  // Cas où les dés sont autres choses que 1 ou 6
            scoreTour = de1 + de2 + de3;
        }
        totalScoreJoueur1 += scoreTour;
        cout << "Score du joueur 1 ce tour : " << scoreTour << endl;
        cout << "Score total du joueur 1 : " << totalScoreJoueur1 << endl;

        // Vérification si le joueur 1 a gagné
        if (totalScoreJoueur1 >= scoreVictoire) {
            cout << " Joueur 1 a gagné avec un score de " << totalScoreJoueur1 << " points " << endl;
            break;
        }

        // Joueur 2
        cout << "Joueur 2, tour de lancement de des : " << endl;
        de1 = rand() % 6 + 1;  // Génère un nombre entre 1 et 6
        de2 = rand() % 6 + 1;
        de3 = rand() % 6 + 1;
        cout << "Lancer de des : " << de1 << ", " << de2 << ", " << de3 << endl;

        // Calcul du score pour joueur 2
        if (de1 == 1 || de2 == 1 || de3 == 1) {  // Cas où un des dés est égal à 1
            scoreTour = 100;
        } else if (de1 == 6 || de2 == 6 || de3 == 6) {  // Cas où un des dés est égal à 6
            scoreTour = 60;
        } else {  // Cas où les dés sont autres choses que 1 ou 6
            scoreTour = de1 + de2 + de3;
        }
        totalScoreJoueur2 += scoreTour;
        cout << "Score du joueur 2 ce tour : " << scoreTour << endl;
        cout << "Score total du joueur 2 : " << totalScoreJoueur2 << endl;

        // Vérification si le joueur 2 a gagné
        if (totalScoreJoueur2 >= scoreVictoire) {
            cout << "Joueur 2 a gagne avec un score de " << totalScoreJoueur2 << " points " << endl;
            break;
        }
    }
}