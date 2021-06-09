#include <iostream>
using namespace std;
#define N 8
void printBoard(int[N][N]);
bool isValid(int board[N][N], int row, int col);
bool solveNQueen(int board[N][N], int col);
bool checkSolution();

