#include <iostream>
#include <vector>
using namespace std;

class Joueur {
public:
    Joueur() : score(0) {}

    void ajouterScore(int points) {
        score += points;
        score_total += points;
    }

    static int scoreTotal() {
        return score_total;
    }

private:
    int score; // Score individuel de ce joueur.
    static int score_total; // Score total de tous les joueurs.
};

int Joueur::score_total = 0; // Initialisation du score total.

int main() {
    Joueur joueur1, joueur2;
    joueur1.ajouterScore(10);
    joueur2.ajouterScore(20);

    std::cout << "Score total: " << Joueur::scoreTotal() << std::endl;
    return 0;
}
