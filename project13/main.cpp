#include <iostream>

using namespace std;

void arrayPrinter(int my_arr[],int len);

void arrayPrinter(int my_arr[] ,int len){
    for(int i=0; i<len; i++){
        cout << my_arr[i] << " ";
    }
}

int main(){
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int len = sizeof(arr) / sizeof(arr[0]);
    arrayPrinter(arr , len);
}