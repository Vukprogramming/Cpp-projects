#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {
    int num = 0;
    int guess = 0;
    int tries = 0;

    srand(time(NULL));  
    num = (rand() % 100) + 1; 

    std::cout << "****** Number guessing game ******\n";


    do {
        std::cout << "Enter a guess between 1-100: ";
        std::cin >> guess;
        tries++;

        if (guess > num) {
            std::cout << "Too high\n";
        }
        else if (guess < num) {
            std::cout << "Too low\n";
        }
        else {
            std::cout << "Correct! Number of tries: " << tries << '\n';
        }
    } while (guess != num);

    std::cout << "*****************************\n";

    return 0;
}
