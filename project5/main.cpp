#include <iostream>

using namespace std;

int main(){


    int my_array[3][4];

    cout << "Inserting elements in array :-"  << endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>> my_array[i][j];
        }
    }

    cout << "Printing Array :- "<< endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<< my_array[i][j]<<" ";
        }
        cout << endl;
    }
}