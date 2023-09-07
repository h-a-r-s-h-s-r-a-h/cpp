#include <iostream>

using namespace std;

int main(){

    cout<<sizeof(int);

    int room_width{0};
    int room_height{0};

    cout<<"Enter the width of room :- ";
    cin>>room_width;

    cout<<"Enter the height of room :- ";
    cin>>room_height;

    int area = room_height * room_width;
    cout<< "The area of room is :- "<<area;

    return 0;
}