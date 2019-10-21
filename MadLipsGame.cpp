//2019 C++ Learning Repo
//Simple C++ Madlips Game
//written by rwx-777

#include <iostream>
#include <cmath>

using namespace std;


int main() {

    string color, pluralNoun, verb;

    cout << "Enter a color: ";
    getline(cin, color);

    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun); //Rember the difference between "getline" & cin >> ?

    cout << "Enter a verb: ";
    getline(cin, verb);

    cout << "Roses are "<< color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "My Code sort of kinda "<< verb << " too" << endl;

    return 0;
}