#include <iostream>
using namespace std;

class Numra {
public:
  int numri1;
  int numri2;
  int S=0;

  int shuma() {
    S= numri1 + numri2;
    return S;
  }
};

int main() {
  Numra n;

  cout << "Shkruani numrin e pare: ";
  cin >> n.numri1;

  cout << "Shkruani numrin e dyte: ";
  cin >> n.numri2;

  cout << "Shuma e dy numrave eshte: " << n.shuma() << endl;
  cout << "Shuma e dy numrave eshte: " << n.S << endl;

  return 0;
}
