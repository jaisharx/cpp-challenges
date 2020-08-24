#include <iostream>

int main(){

    int cpus_fav_number = 0;

    std::cout << "Enter your favorite number between 1 to 100: ";
    std::cin >> cpus_fav_number;

    std::cout << "Amazing!! That's my favorite number too!\n";
    std::cout << "No really!! " << cpus_fav_number << " is my favorite number as well.";

    return 0;
}