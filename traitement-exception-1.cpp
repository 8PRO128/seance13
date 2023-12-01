#include <iostream>
using namespace std;

// Une fonction qui peut échouer
void acceder_wifi() {
  bool success = false;
  //...
  if(!success) {
    throw runtime_error("WIFI est perdue");
  }
}

int main() {
  try {
    acceder_wifi();
  } catch (logic_error& e) {
    cout << "Il n'est pas possible d'accéder au WIFI" << endl;
  }
  return 0;
}
