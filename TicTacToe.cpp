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

int GetPlayerChoice() {
    int n;
    cout << "Choose a location (1-9)" << endl;
    cin >> n;
    return n - 1;
}

void PlaceMarker(int loc, int player, int* board) {
    board[loc] = player;
}

int main() {
    int* myBoard = CreateBoard();
    DisplayBoard(myBoard);
    // GetPlayerChoice();
    for (int i = 0; i < 9; i++) {
        int pos = GetPlayerChoice();
        PlaceMarker(pos, i%2+1, myBoard);
        DisplayBoard(myBoard);
    }
}
