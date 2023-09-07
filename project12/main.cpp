#include <iostream>
using namespace std;

int add(int a, int b=5);

int add(int a,int b){
    return a + b;
}

int main(){
    int firstAddition = add(2,3);
    int secondAddition = add(2);

    cout << firstAddition <<endl;
    cout << secondAddition ;
}