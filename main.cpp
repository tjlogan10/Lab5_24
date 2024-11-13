/*
 Travis Logan
 C++ Fall 2024
 Due: Nov. 12 2024
 Lab 5: Number Guessing Game
 Lab Description: This lab is used to present knowlege of loops, switch statements, and random number generators. Along with this, it allows one to show the ability to store information and recall it when necessary like the number of wins and losses.
 */
#include "RandomNumber.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    int wins = 0, losses = 0; //starting values of each category
    char playAgain;
    
    do {
        int random = rand() % 101; // Random number between 0 and 100
        int guess, attempts = 0;
        bool hasWon = false;
        
        cout << "Guess the number between 0 and 100. You have 20 attempts!" << endl;
        //Main loop for user attempts
        while (attempts < 20) {
            cout << "Enter your guess: ";
            cin >> guess;
           //Precondtion: Input should be a valid integer
            if (cin.fail()) { //check if input is not an integer
                cin.clear(); //clear error state
                cin.ignore(1000, '\n'); //ignore invalid input
                cout << "Invalid input. Please enter an interger." << endl;
                continue; // go back to start of loop for another input
                // Postcondition: If not an integer, program displays an error message and retries input
            }
            attempts++;
            
            if (guess == random) {
                displayWinMessage(); //Output a random win message
                wins++;
                hasWon = true;
                break;
            } else if (guess < random) {
                cout << "Too low! Try again." << endl;
            } else {
                cout << "Too high! Try again." << endl;
            }
        }
            
            if (!hasWon) {
                displayLoseMessage();
                losses++;
                cout << "The correct number was: " << random << endl;
                //Postcondition: if the player has not won after 20 attempts, loss message displays
            }
            displayPlayAgainMessage(); // Prompt the user to play again
            cin >> playAgain;
            
        } while (playAgain == 'y' || playAgain == 'Y');
        
        cout << "Total Wins: " << wins << endl;
        cout << "Total Losses: " << losses << endl;
        // Postcondition: Outputs total of wins and losses after usser quits
        return 0;
    }

