#include <iostream>
#include <string> //biblioteca para o std::string
using namespace std;

int main() {

    //Conversao
    double a = 22.12;
    cout << "A total: " << a << '\n';

    int b = (int) a;
    cout << "Apos conversao A vira: " << b << '\n'; //Nao arredonda so retira o decimal

    //Concatenacao
    string firstWord;
    string secondWord;

    cout << "Primeira palavra: ";
    cin >> firstWord;
    cout << "Segunda palavra: ";
    cin >> secondWord;

    string together = firstWord + " " + secondWord;
    cout << "Sua frase ficou: " << together << '\n';

    //Lista na string
    int pickLetter;

    cout << "Posicao: ";
    cin >> pickLetter;
    char letter = together[pickLetter]; //acesso direto na string, inicio 0
    cout << "letra escolhida da sua frase eh: " << letter << '\n';

    int Length = together.length(); //funcao preexistente
    cout << "Tamanho total da sua frase: " << Length;


}
