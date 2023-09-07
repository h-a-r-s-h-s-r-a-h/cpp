#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){

    //declaring vector
    vector <int> test_scores;

    cout << "Enter the length of array you want to make :- " << endl;
    int len{0};
    cin >> len;

    //inserting elements in vector
    cout << "Enter the elements of array " << endl;
    for(int i=0;i<len;i++){
        int newNo{0};
        cin >> newNo;
        test_scores.insert(test_scores.begin() + i,newNo);
    }

    //finding length of vector
    int lengthVector = test_scores.size();

    cout<< "Length of Vector is :- "<<lengthVector<<endl;

    //printing the vector

    cout<< "Printing the vector :- "<<endl;
    for(int i=0;i<lengthVector;i++){
        cout<< test_scores[i] << " ";
    }

    //sorting vector in ascending order 

    cout<<endl;
    cout << "Sorting Vector in ascending order "<<endl;
    sort(test_scores.begin(), test_scores.end());

    for(int i=0;i<lengthVector;i++){
        cout<< test_scores[i] << " ";
    }

    //sorting vector in descending order

    cout<<endl;
    cout << "Sorting Vector in descending order "<<endl;
    sort(test_scores.begin(), test_scores.end(), greater<int>());

    for(int i=0;i<lengthVector;i++){
        cout<< test_scores[i] << " ";
    }

    
}