#include <iostream>
using namespace std;

// Une fonction qui peut échouer
bool function_1() {
  bool success = false;
  //...
  return success;
}

// Une autre fonction qui dépend de function_1
bool function_2() {
  // Vérifie si function_1 a échoué
  if (!function_1()) {
      cout << "function_1 a échoué, "
            << "donc function_2 échoue également.\n";
      // Propage l'échec en retournant false
      return false;
  }
  // Sinon, continue normalement
  return true;
}

int main() {
  // Appelle function_2 et vérifie si elle a échoué
  if (!function_2()) {
      cout << "Une erreur s'est produite dans function_2\n";
  } else {
      cout << "function_2 a réussi\n";
  }
  return 0;
}
