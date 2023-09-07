#include <iostream>
#include <math.h>

using namespace std;

string my_name();
double square(int a, int b);

string my_name(){
    return "Harsh";
}

double square(int a, int b){
    return pow(a,b);
}

int main(){
    cout << my_name() << endl;
    cout << "Cube of 2 is :- " << square(2,3) ;
}