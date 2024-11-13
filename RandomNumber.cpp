#include "RandomNumber.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Random win message
void displayWinMessage() {
    int win = rand() % 10; //Randomly select a message from the list below
    switch (win) {
        case 0: cout << "Congratulations! You nailed it!" << endl;
            break;
        case 1: cout << "Awesome! You guessed the right number!" << endl;
            break;
        case 2: cout << "Well done! That's the correct number!" << endl;
            break;
        case 3: cout << "Nice work! You've won this round!" << endl;
            break;
        case 4: cout << "Amazing! Your guess was spot on!" << endl;
            break;
        case 5: cout << "Bravo! You've figured it out!" << endl;
            break;
        case 6: cout << "You got it! Way to go!" << endl;
            break;
        case 7: cout << "Perfect guess! You're a winner!" << endl;
            break;
        case 8: cout << "BANG! You guessed it right!" << endl;
            break;
        case 9: cout << "You are a star! Great job!" << endl;
            break;
    }
}
// Postcondition: Outputs a randomly selected win prompt

// Random lose message
void displayLoseMessage() {
    int fail = rand() % 10; //Randomly select a message from the list below
    switch (fail) {
        case 0: cout << "Oh no! You've run out of attempts!" << endl;
            break;
        case 1: cout << "Better luck next time! The number escaped you." << endl;
            break;
        case 2: cout << "Unfortunately, you didn't guess it this time." << endl;
            break;
        case 3: cout << "Well, there's always next time sport. Try again." << endl;
            break;
        case 4: cout << "The number remains a mystery... Try again!" << endl;
            break;
        case 5: cout << "That's a tough one! But don't give up!" << endl;
            break;
        case 6: cout << "Out of attempts! You'll get it next time." << endl;
            break;
        case 7: cout << "Not quite there, but keep trying!" << endl;
            break;
        case 8: cout << "No luck this time. Maybe on the next try!" << endl;
            break;
        case 9: cout << "So close, yet so far!" << endl;
            break;
    }
}
// Postcondition: Outputs a randomly selected loss prompt

// Random play-again message
void displayPlayAgainMessage() {
    int again = rand() % 10; //Randomly select a message from the list below
    switch (again) {
        case 0: cout << "Would you like to play again? (y/n): ";
            break;
        case 1: cout << "Want to try another round? (y/n): ";
            break;
        case 2: cout << "Care to play again? (y/n): ";
            break;
        case 3: cout << "How about another game? (y/n): ";
            break;
        case 4: cout << "Do you want to guess again? (y/n): ";
            break;
        case 5: cout << "Shall we go for another round? (y/n): ";
            break;
        case 6: cout << "Up for another try? (y/n): ";
            break;
        case 7: cout << "Another game? What do you say? (y/n): ";
            break;
        case 8: cout << "Fancy another go? (y/n): ";
            break;
        case 9: cout << "Run it back once more? (y/n): ";
            break;
    }
}
// Postcondition: Outputs a randomly selected prompt to play again
