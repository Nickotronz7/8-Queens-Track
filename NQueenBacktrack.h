//
// Created by nicko on 14/05/17.
//

#ifndef INC_8_QUEENS_TRACK_NQUEENBACKTRACK_H
#define INC_8_QUEENS_TRACK_NQUEENBACKTRACK_H


#include "Definer.h"
#include "Board.h"
#include "tinyxml2.h"

using namespace std;
class NQueenBacktrack {
public:
    NQueenBacktrack();
    XMLDocument xmlDoc;
    XMLNode * pRoot = xmlDoc.NewElement("QueenRoot");
    bool solve();
    bool solveNQUtil(int board[N][N], int col);
    void printSolution(int board[N][N]);
    bool isSafe(int board[N][N], int row, int col);

private:
    XMLDocument posiciones;
};


#endif //INC_8_QUEENS_TRACK_NQUEENBACKTRACK_H

