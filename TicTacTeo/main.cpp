#include <iostream>
#include <vector>
using namespace std;

class TicTacToe {
    vector<vector<char>> board = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char player1, player2;
    bool done;

public:
    TicTacToe() : done(false) {
        do {
            displayBoard();
            cout << "Choose your symbol 'X' or 'O' : ";
            cin >> player1;
        } while (player1 != 'O' && player1 != 'X');
        player2 = (player1 == 'X') ? 'O' : 'X';
        play();
    }

    void displayBoard() {
        cout << "--------------" << endl;
        for (const auto& row : board) {
            for (char cell : row) {
                cout << "|\t" << cell;
            }
            cout << "|\t" << endl;
            cout << "--------------" << endl;
        }
    }

    void play() {
        char currentPlayer = player1;
        while (!done) {
            displayBoard();
            int x, y;
            cout << "Player " << currentPlayer << " enter position (row col): ";
            cin >> x >> y;
            if (isValidMove(x, y)) {
                board[x][y] = currentPlayer;
                done = check();
                currentPlayer = (currentPlayer == player1 && !done) ? player2 : player1;
            } else {
                cout << "Invalid move! Try again." << endl;
            }
        }
        displayBoard();
        cout << "Player " << currentPlayer << " wins!" << endl;
    }

    bool isValidMove(int x, int y) const {
        return x >= 0 && x < 3 && y >= 0 && y < 3 && board[x][y] == ' ';
    }

    bool check() const {
        for (int i = 0; i < 3; ++i) {
            if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][0] == board[i][2]) {
                return true;  // Row win
            }
            if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[0][i] == board[2][i]) {
                return true;  // Column win
            }
        }
        if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
            return true;  // Diagonal win (top-left to bottom-right)
        }
        if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
            return true;  // Diagonal win (top-right to bottom-left)
        }
        return false;
    }
};

int main() {
    TicTacToe tictactoe;
    return 0;
}
