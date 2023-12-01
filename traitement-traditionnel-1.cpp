#include <iostream>
using namespace std;

// Une fonction qui peut échouer
bool function_1() {
  bool success = false;
  //...
  return success;
}

int main() {
  // Appelle function_1 et vérifie si elle a échoué
  if (!function_1()) {
      cout << "Une erreur s'est produite dans function_1\n";
  } else {
      cout << "function_1 a réussi\n";
  }
  return 0;
}
