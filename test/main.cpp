//g++ -Wall -Wextra -Werror main.cpp -o test

#include <string>
#include <iostream>
int main() {
   using namespace std;
   cout << "Entrez un entier..." << endl;
   string bio;

    
   getline(cin, bio);
    
   cout << "Your bio says: " << bio;
}