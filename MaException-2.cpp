#include <iostream>
using namespace std;

class MaException : public logic_error { 
  public:
    MaException (const string& r);
};

MaException::MaException(const string& r) 
            : logic_error(r) {}

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