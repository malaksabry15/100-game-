//Name : Malak Sabry Omar
// ID : 20230531
// 100 game
// section 3,4


#include <iostream>
#include <limits>

int main() {
    int game = 0;   // total movements
    int currentPlayer = 1; // 1 for Player A, 2 for Player B

    while (game < 100) {
        double move; // Using double to accept floating-point input

        // Prompt the current player to input a number from 1 to 10
        std::cout << "Player " << currentPlayer << ", enter a number from 1 to 10: ";

        // Validate input
        while (!(std::cin >> move) || move < 1 || move > 10 || move != static_cast<int>(move)) {
            std::cout << "Invalid input. Please enter an integer from 1 to 10: ";
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        }

        int validMove = static_cast<int>(move);

        // Check if the move exceeds 100
        if (game + validMove > 100) {
            std::cout << "Invalid move. Your move exceeds 100.\n";
            continue;
        }

        // Update the game progress
        game += validMove;

        // Check if the game has reached 100
        //if (game >= 100) {
            //std::cout << "Player " << currentPlayer << " wins!\n";
           // break;
//       }
         while (game > 100){
             game =game - move;
             std::cout<< "entre valid move";
             std::cin >>move;
             game = game + move ;
         }
         if (game == 100){
             std::cout << "Player " << currentPlayer << " wins!\n";
         }
             
        // Switch to the next player
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
        
        // to calculate game after every player plays
        std:: cout<< "current game is" << game << std::endl;
    }

    return 0;
}