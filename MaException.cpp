#include <iostream>
using namespace std;

class MaException { 
  public:
    MaException (const string& r);
    string what() const;

  private:
    string raison;
};

MaException::MaException(const string& r) : raison(r) {}

string MaException::what() const {
  return raison;
}

void test() {
  throw MaException("erreur...");
}

int main() {
  try {
    test();
  } catch (MaException& e) {
    cout << e.what() << endl;
  }
}