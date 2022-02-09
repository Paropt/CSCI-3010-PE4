#include <iostream>
using namespace std;

int* CreateBoard() {
    static int board[9];
    for (int i = 0; i < 9; i++) {
        board[i] = 0;
    }
    return board;
}

int main() {
    int* myBoard = CreateBoard();
    for (int i = 0; i < 9; i++) {
        cout << myBoard[i] << endl;
    }
}