#include <iostream>
using namespace std;

// Une fonction qui peut échouer
void function_1() {
  bool success = false;
  //...
  if(!success) {
    throw logic_error("Erreur function1");
    throw runtime_error("WIFI a tombée");
  }
}

void function_2() {
  function_1();
}

int main() {
  try {
    function_2();
  } catch (logic_error& e) {
    cout << "Une erreur s'est produite dans function_2" << endl;
    cout << e.what() << endl;
  }
  return 0;
}
