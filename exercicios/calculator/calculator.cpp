#include <iostream>
using namespace std;

int main() {

  std::string equa;
  double n1;
  double n2;


  cout << "Digite o primeiro numero: ";
  cin >> n1;

  cout << "Escolha uma equacao (*, /, +, -): ";
  cin >> equa;

  cout << "Digite o segundo numero: ";
  cin >> n2;

  if (equa == "*") {
    cout << n1 << " * " << n2 << " = " << n1*n2;
  }

  if (equa == "/") {
    cout << n1 << " / " << n2 << " = " << n1/n2;
  }

  if (equa == "+") {
    cout << n1 << " + " << n2 << " = " << n1+n2;
  }

  if (equa == "-") {
    cout << n1 << " - " << n2 << " = " << n1-n2;
  }
}
