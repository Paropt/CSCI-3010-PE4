#include <iostream>
using namespace std;

int* CreateBoard() {
    static int board[9];
    for (int i = 0; i < 9; i++) {
        board[i] = 0;
    }
    return board;
}

void DisplayBoard(int* board) {
    for (int i = 0; i < 9; i += 3) {
        cout << board[i] << " " << board[i+1] << " " << board[i+2] << endl;
    }
}

int main() {
    int* myBoard = CreateBoard();
    for (int i = 0; i < 9; i++) {
        cout << myBoard[i] << endl;
    }
}
