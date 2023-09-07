#include <iostream>

int main(){

    std::cout << "Enter the first no." << std::endl;
    int first_no;
    std::cin >> first_no;

    std::cout << "Enter the second no. ";
    int second_no;
    std::cin >> second_no;

    int sum = first_no + second_no;

    std::cout << "the sum is " << sum << std::endl;

    std::cout << "finish";

    return 0;
}