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
    int counter = 0;
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            cout << board[counter];
            counter++;
         }
        cout << endl;
     }
}

void PlaceMarker(int loc, int player, int* board) {
    board[loc] = player;
}

int main() {
    int* myBoard = CreateBoard();
    for (int i = 0; i < 9; i++) {
        cout << myBoard[i] << endl;
    }
}
