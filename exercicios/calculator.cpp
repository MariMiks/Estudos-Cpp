#include <iostream>
using namespace std;

int main() {
  
  std::string equa;
  double n1;
  double n2;

  cout << "Escolha uma equacao (mult, div, sum, minus): ";
  cin >> equa;

  cout << "Digite o primeiro numero: ";
  cin >> n1;

  cout << "Digite o segundo numero: ";
  cin >> n2;

  if (equa == "mult") {
    cout << "Resultado: " << n1*n2 << "\n";
  }

  if (equa == "div") {
    cout << "Resultado: " << n1/n2 << "\n";
  }

  if (equa == "sum") {
    cout << "Resultado: " << n1+n2 << "\n";
  }

  if (equa == "minus") {
    cout << "Resultado: " << n1-n2 << "\n";
  }
}