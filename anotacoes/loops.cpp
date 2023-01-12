#include <iostream>

using namespace std;

int main ()
{
  // while loop, do if the condition is true
  int count = 0;
  while (count <= 5) {
    std::cout << count;
    count++;
  }
  cout << "\n";

  // do-while loop, do even if the condition is not true
  int price = 300;
  do {
    cout << "Too expensive!";
  } while (price > 500);
  cout << "\n";

  // for loop, if we know how many times we need it to repeat
  for (int i = 0; i <= 5; i++) {
    cout << i;
  }
  cout << "\n";

  // for-each loop, especially to arrays
  int fibonacci[5] = { 0, 1, 1, 2, 3 };
  for (auto number:fibonacci){
    cout << number;
  }
  cout << "\n";

  return 0;
}
