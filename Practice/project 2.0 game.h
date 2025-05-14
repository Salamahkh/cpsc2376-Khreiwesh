#pragma once
#include <vector>
#include <iostream>

const int ROWS = 6;
const int COLUMNS = 7;

class Game {
public:
    enum Cell { EMPTY, PLAYER1, PLAYER2 };
    enum Status { ONGOING, PLAYER1_WINS, PLAYER2_WINS, DRAW };

    Game();
    void play(int column);           // Place a piece in the specified column
    Status status() const;          // Get current game status
    friend std::ostream& operator<<(std::ostream& os, const Game& game);

private:
    std::vector<std::vector<Cell>> board;
    Cell currentPlayer;
    Status gameStatus;

    bool isValidMove(int column) const;
    bool makeMove(int column);
    bool checkWin(int row, int col) const;
    bool checkDirection(int row, int col, int dRow, int dCol) const;
    bool boardFull() const;
};
