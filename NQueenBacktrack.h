//
// Created by nicko on 14/05/17.
//

#ifndef INC_8_QUEENS_TRACK_NQUEENBACKTRACK_H
#define INC_8_QUEENS_TRACK_NQUEENBACKTRACK_H

#define N 8

#include <iostream>

using namespace std;

class NQueenBacktrack {
public:
    NQueenBacktrack();
    bool solve();
    bool solveNQUtil(int board[N][N], int col);
    void printSolution(int board[N][N]);
    bool isSafe(int board[N][N], int row, int col);
};


#endif //INC_8_QUEENS_TRACK_NQUEENBACKTRACK_H
