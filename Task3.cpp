#include <iostream>

using namespace std;


void printBoard(char board[3][3]);
bool checkWinner(char board[3][3], char player);
bool checkDraw(char board[3][3]);
void switchPlayer(char &currentPlayer);

int main() {
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char currentPlayer = 'X';
    bool gameWon = false;
    bool draw = false;

    do {
        printBoard(board);

        
        int row, col;
        cout << "Player " << currentPlayer << "'s turn. Enter row (1-3) and column (1-3) separated by space: ";
        cin >> row >> col;

        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        
        board[row - 1][col - 1] = currentPlayer;

       
        gameWon = checkWinner(board, currentPlayer);

        
        draw = checkDraw(board);

        
        switchPlayer(currentPlayer);

    } while (!gameWon && !draw);

    printBoard(board);

    
    if (gameWon) {
        cout << "Player " << currentPlayer << " wins!" << endl;
    } else {
        cout << "It's a draw!" << endl;
    }

    return 0;
}

void printBoard(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) {
                cout << " | ";
            }
        }
        cout << endl;
        if (i < 2) {
            cout << "---------" << endl;
        }
    }
    cout << endl;
}

bool checkWinner(char board[3][3], char player) {
    
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true; // Row win
        }
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true; // Column win
        }
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true; // Diagonal1 win
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true; // Diagonal2 win
    }
    return false;
}

bool checkDraw(char board[3][3]) {
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false; 
            }
        }
    }
    return true;
}

void switchPlayer(char &currentPlayer) {
    if (currentPlayer == 'X') {
        currentPlayer = 'O';
    } else {
        currentPlayer = 'X';
    }
}