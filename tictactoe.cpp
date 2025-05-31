#include <iostream>
#include <vector>
#include <string>

using namespace std;

class TicTacToe
{
private:
    vector<string> board;
    string currentPlayer;

    void printBoard()
    {
        cout << "\n";
        for (int i = 0; i < 3; ++i)
        {
            cout << board[i * 3] << " | " << board[i * 3 + 1] << " | " << board[i * 3 + 2] << "\n";
            if (i < 2)
                cout << "---------\n";
        }
        cout << "\n";
    }

    bool isValidMove(int position)
    {
        return position >= 0 && position < 9 && board[position] == " ";
    }

    bool checkWin()
    {
        // Check rows, columns, and diagonals
        for (int i = 0; i < 3; ++i)
        {
            if (board[i * 3] == board[i * 3 + 1] && board[i * 3 + 1] == board[i * 3 + 2] && board[i * 3] != " ")
                return true;
            if (board[i] == board[i + 3] && board[i + 3] == board[i + 6] && board[i] != " ")
                return true;
        }
        if (board[0] == board[4] && board[4] == board[8] && board[0] != " ")
            return true;
        if (board[2] == board[4] && board[4] == board[6] && board[2] != " ")
            return true;
        return false;
    }

    bool checkDraw()
    {
        for (const auto &cell : board)
        {
            if (cell == " ")
                return false;
        }
        return true;
    }

public:
    TicTacToe() : board(9, " "), currentPlayer("S") {}

    void play()
    {
        int position;
        while (true)
        {
            printBoard();
            cout << "Player " << currentPlayer << ", enter a position (1-9): ";
            cin >> position;
            position -= 1; // Adjust for 0-based index

            if (!isValidMove(position))
            {
                cout << "Invalid move. Try again.\n";
                continue;
            }

            board[position] = currentPlayer;

            if (checkWin())
            {
                printBoard();
                cout << "Player " << currentPlayer << " wins!\n";
                break;
            }

            if (checkDraw())
            {
                printBoard();
                cout << "It's a draw!\n";
                break;
            }

            currentPlayer = (currentPlayer == "S") ? "V" : "S";
        }
    }
};

int main()
{
    TicTacToe game;
    game.play();
    return 0;
}
