//
// Created by nicko on 14/05/17.
//

#include "NQueenBacktrack.h"

NQueenBacktrack::NQueenBacktrack(Board* board) {
    NQueenBacktrack::The_Board = board;
}

bool NQueenBacktrack::solve() {
    int board[N][N] = {0};
    if (!solveNQUtil(board, 0)){
        cout << "No existe una solucion" << endl;
        return false;
    }
    printSolution(board);
    return true;
}

bool NQueenBacktrack::solveNQUtil(int (*board)[N], int col) {
    if (col >= N)
        return col >= N;
    for (int i = 0; i < N; ++i) {
        if (isSafe(board, i, col)){
            board[i][col] = 1;
            NQueenBacktrack::The_Board->update_state(i*10+col, NQueenBacktrack::green);

            al_flip_display();

            if(solveNQUtil(board, col+1))
                return true;
            board[i][col] = 0;

            al_flip_display();

        }
    }
    return false;
}

bool NQueenBacktrack::isSafe(int (*board)[N], int row, int col) {
    int i, j;
    for(i = 0; i < col; i++){
        if (board[row][i])
            return false;
    }
    for(i = row, j = col; i >= 0 && j >= 0; i--, j--){
        if (board[i][j])
            return false;
    }
    for(i = row, j = col; j >= 0 && i < N; i++, j--){
        if (board[i][j])
            return false;
    }
    return true;
}

void NQueenBacktrack::printSolution(int (*board)[N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n" << endl;
}