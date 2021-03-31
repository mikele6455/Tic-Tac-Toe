#include <iostream>
using namespace std;

char numBoard[10] = {'o','1','2','3','4','5','6','7','8','9'};

void drawBoard();

//main() for testing purposes

int main()
{
	drawBoard();
	return 0;
}

void drawBoard()
{
	cout << endl;
	cout << "Enter the corresponding number to go there!: " << endl;
	cout << endl;
	cout << "A123456789A123456789A123456789A" << endl;
	cout << "A         A         A         A" << endl;
	cout << "A         A         A         A" << endl;
	cout << "A    " << numBoard[1] << "    A    " << numBoard[2] << "    A    " << numBoard[3] << "    A" << endl;
	cout << "A         A         A         A" << endl;
	cout << "A         A         A         A" << endl;
	cout << "A123456789A123456789A123456789A" << endl;
	cout << "A         A         A         A" << endl;
	cout << "A         A         A         A" << endl;
	cout << "A    " << numBoard[4] << "    A    " << numBoard[5] << "    A    " << numBoard[6] << "    A" << endl;
	cout << "A         A         A         A" << endl;
	cout << "A         A         A         A" << endl;
	cout << "A123456789A123456789A123456789A" << endl;
	cout << "A         A         A         A" << endl;
	cout << "A         A         A         A" << endl;
	cout << "A    " << numBoard[7] << "    A    " << numBoard[8] << "    A    " << numBoard[9] << "    A" << endl;
	cout << "A         A         A         A" << endl;
	cout << "A         A         A         A" << endl;
	cout << "A123456789A123456789A123456789A" << endl;
	cout << endl;
}
