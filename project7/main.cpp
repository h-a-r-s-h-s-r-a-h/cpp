#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char my {'d'};

    cout << isalpha(my) << endl ;
    cout << isalnum(my) << endl ;
    cout << isdigit(my) << endl ;
    cout << islower(my) << endl ;
    cout << isprint(my) << endl ;
    cout << isupper(my) << endl ;
    cout << ispunct(my) << endl ;
    cout << isspace(my) << endl ;

}
