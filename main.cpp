/*#include <iostream>

int main (int argc, char *argv[]) {
    printf("Hola Mundo");
    return 0;
}*/

/*
 * C++ Program to Solve N-Queen Problem
 */
/*
#include <iostream>

#define N 8

using namespace std;

// print solution
void printSolution(int board[N][N]) {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout<<board[i][j]<<" ";
        cout<<endl;
    }
}

// check if a queen can be placed on board[row][col]
bool isSafe(int board[N][N], int row, int col)
{
    int i, j;
    for (i = 0; i < col; i++)
    {
        if (board[row][i])
            return false;
    }
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j])
            return false;
    }

    for (i = row, j = col; j >= 0 && i < N; i++, j--)
    {
        if (board[i][j])
            return false;
    }

    return true;
}

// solve N Queen problem
bool solveNQUtil(int board[N][N], int col)
{
    if (col >= N)
        return true;
    for (int i = 0; i < N; i++)
    {
        if ( isSafe(board, i, col) )
        {
            board[i][col] = 1;
            if (solveNQUtil(board, col + 1) == true)
                return true;
            board[i][col] = 0;
        }
    }
    return false;
}

// solves the N Queen problem using Backtracking.
bool solveNQ()
{
    int board[N][N] = {0};
    if (solveNQUtil(board, 0) == false)
    {
        cout<<"Solution does not exist"<<endl;
        return false;
    }
    printSolution(board);
    return true;
}

// Main
int main()
{
    unsigned t0, t;

    t0 = clock();

    solveNQ();

    t = clock();

    long time = (long(t-t0)/CLOCKS_PER_SEC);

    cout << "\n" << time << endl;
    return 0;
}
*/

#include <iostream>
#include <allegro5.h>
#include <allegro_native_dialog.h>

using namespace std;

int main() {

    ALLEGRO_DISPLAY* display;

    if(!al_init()){
        //al_show_native_message_box(NULL, NULL, NULL, "ERROR al iniciar", "OK", true);
    }

    display = al_create_display(800, 600);

    if(!display){
        //al_show_native_message_box(NULL, NULL, NULL, "ERROR en el display", "OK", true);
    }

    char x;

    while (x != 'a'){
        cin>>x;
    }
    return 0;
}