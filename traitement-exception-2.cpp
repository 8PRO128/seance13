#include <iostream>
using namespace std;

// Une fonction qui peut échouer
void function_1() {
  bool success = false;
  //...
  if(!success) {
    throw logic_error("Erreur");
  }
}

int main() {
  try {
    function_1();
  } catch (logic_error& e) {
    cout << "Une erreur s'est produite dans function_1" << endl;
  }
  return 0;
}
