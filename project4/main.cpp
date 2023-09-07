#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int my_array[3];

    int len =  sizeof(my_array)/sizeof(my_array[0]);

    cout<< "insert the element of your array :- "<<endl;
    for(int i=0;i<len;i++){
        cin>> my_array[i];
    }
    
    // finding max no.. from input
    int max_no = my_array[0];
    for(int i=0;i<len;i++){
        if(max_no<my_array[i]){
            max_no = my_array[i];
        }
    }
    cout<< "The max. is :- "<<max_no <<endl;


    //finding min from array
    int min_no = my_array[0];
    for(int i=0;i<len;i++){
        if(min_no>my_array[i]){
            min_no = my_array[i];
        }
    }
    cout<< "The min. is :- "<< min_no <<endl;


    //sorting an array
    sort(my_array, my_array + len);

    cout << "Sorted array is :- "; 

    for (int i = 0; i < len; i++) {
        cout << my_array[i] << " ";
    }
    cout << endl;

    return 0;
}

