#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

string getComputerChoice() {
    int choice = rand() % 3; // Generate a random number (0, 1, or 2)
    if (choice == 0) return "Rock";
    else if (choice == 1) return "Paper";
    else return "Scissors";
}

string determineWinner(string player, string computer) {
    if (player == computer) return "It's a tie!";
    if ((player == "Rock" && computer == "Scissors") ||
        (player == "Paper" && computer == "Rock") ||
        (player == "Scissors" && computer == "Paper")) {
        return "You win!";
    } else {
        return "Computer wins!";
    }
}

int main() {
    srand(time(0)); // Seed random number generator
    string playerChoice, computerChoice;

    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout << "Enter your choice (Rock, Paper, or Scissors): ";
    cin >> playerChoice;

    // Convert player's choice to title case for consistency
    for (char &c : playerChoice) c = tolower(c);
    playerChoice[0] = toupper(playerChoice[0]);

    // Check for valid input
    if (playerChoice != "Rock" && playerChoice != "Paper" && playerChoice != "Scissors") {
        cout << "Invalid choice! Please restart the game and choose Rock, Paper, or Scissors." << endl;
        return 1;
    }

    computerChoice = getComputerChoice();
    cout << "Computer chose: " << computerChoice << endl;

    string result = determineWinner(playerChoice, computerChoice);
    cout << result << endl;

    return 0;
}