#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
int main()
{
  std::cout << "ASMR" << std::endl;
  
  std::cout << "Let's play a quick guessing game!\n";
    
    std::srand(std::time(0)); // Seed random number
    int secretNumber = std::rand() % 10 + 1; // Random number between 1 and 10
    int guess;

    std::cout << "Guess a number between 1 and 10: ";
    std::cin >> guess;

    if (guess == secretNumber) {
        std::cout << "🎉 Congrats! You guessed it right!\n";
    } else {
        std::cout << "❌ Oops! The correct number was " << secretNumber << ". Try again!\n";
    }
    return 0;
}
