//g++ -Wall -Wextra -Werror main.cpp -o test

#include <string>
#include <iostream>
int main() {
   using namespace std;
   cout << "Entrez un entier...";
   int val;
   cin >> val;
   cout << "Entrez une ligne de texte...";
   if (char c = cin.peek(); c == '\n' || c == '\r')
      cin.get(c);
   // lire une ligne à l'entrée standard, la mettre dans s
   if (string s; getline(cin, s, 'x'))
      cout << s << "\n" << endl;
}