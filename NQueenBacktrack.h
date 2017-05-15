//
// Created by nicko on 14/05/17.
//

#ifndef INC_8_QUEENS_TRACK_NQUEENBACKTRACK_H
#define INC_8_QUEENS_TRACK_NQUEENBACKTRACK_H


#include "Definer.h"
#include "Board.h"

class NQueenBacktrack {
public:
    NQueenBacktrack(Board* board);
    bool solve();
    bool solveNQUtil(int board[N][N], int col);
    void printSolution(int board[N][N]);
    bool isSafe(int board[N][N], int row, int col);

private:
    Board* The_Board;
    int green[3] = {0,255,0};
};


#endif //INC_8_QUEENS_TRACK_NQUEENBACKTRACK_H
