#include <iostream>
#include <string>
using namespace std;

int main() {
  int planet;
  double weight;

  cout << "Current earth weight: ";
  cin >> weight;

  cout << "1.Mercury\n" << "2.Venus\n" << "3.Mars\n" << "4.Jupiter\n" << "5.Saturn\n" << "6.Uranus\n" << "7.Neptune\n"; //tentar colocar dps em array

  cout << "Choose your planet: ";
  cin >> planet;


// tipo de intrucao condicional, no mesmo grupo de if, else e else if
// utilizado para momentos com varios casos

    while(planet > 7){
        cout << "Not a planet. Try again: ";
        cin >> planet;

    switch (planet) {
        case 1:
          weight *= 0.38;
          cout << "That'll be your weight: " << weight << "\n";
          break;

        case 2:
          weight *= 0.91;
          cout << "That'll be your weight: " << weight << "\n";
          break;

        case 3:
          weight *= 0.38;
          cout << "That'll be your weight: " << weight << "\n";
          break;

        case 4:
          weight *= 2.34;
          cout << "That'll be your weight: " << weight << "\n";
          break;

        case 5:
          weight *= 1.06;
          cout << "That'll be your weight: " << weight << "\n";
          break;

        case 6:
          weight *= 0.92;
          cout << "That'll be your weight: " << weight << "\n";
          break;

        case 7:
          weight *= 1.19;
          cout << "That'll be your weight: " << weight << "\n";
          break;


      }
    }

}
