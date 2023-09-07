#include <iostream>

using namespace std;

int factorial(int k) {
    if (k > 0) {
        return k * factorial(k - 1);
    }else if(k == 0){
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int result = factorial(5);
    cout << result;
    return 0;
}