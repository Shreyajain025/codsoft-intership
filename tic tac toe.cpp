
#include <iostream>
using namespace std;

// Function to draw the board
void drawingBoard(char board[3][3])
{
	cout << "-------------\n";
	for (int i = 0; i < 3; i++) {
		cout << "| ";
		for (int j = 0; j < 3; j++) {
			cout << board[i][j] << " | ";
		}
		cout << "\n-------------\n";
	}
}

// Function to check for a win
bool checkWin(char board[3][3], char player)
{
	// Check rows, columns, and diagonals
	for (int i = 0; i < 3; i++) {
		if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
			return true;
		if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
			return true;
	}
	if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
		return true;
	if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
		return true;
	return false;
}

int main()
{
	// Initialize the board and players
	char board[3][3] = { { ' ', ' ', ' ' },  { ' ', ' ', ' ' }, { ' ', ' ', ' ' } };
	char player = 'X';
	int row, col;
	int turn;

	cout << "Tic-Tac-Toe!\n";

	//loop for game
	for (turn = 0; turn < 9; turn++) {
		// Draw the board
		drawingBoard(board);


		while (true) {
			cout << "Player " << player << ", enter row (0-2) and column (0-2): ";
			cin >> row >> col;

			if (board[row][col] != ' ' || row < 0 || row > 2 || col < 0 || col > 2)
            {
				cout << "Invalid move. Try again.\n";
			}
			else {
				break;
			}
		}


		board[row][col] = player;


		if (checkWin(board, player)) {
			drawingBoard(board);
			cout << "Player " << player << " wins!\n";
			break;
		}


		player = (player == 'X') ? 'O' : 'X';
	}

	// End of the game
	drawingBoard(board);

	// Check for a draw
	if (turn == 9 && !checkWin(board, 'X')
		&& !checkWin(board, 'O')) {
		cout << "It's a draw!\n";
	}

	return 0;
}
