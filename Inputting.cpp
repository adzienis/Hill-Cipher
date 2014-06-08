#include "Inputting.h"

string Process(string fileName)
{
	string words = " ";
	std::filebuf fb;

	if (fb.open(fileName, std::ios::in | ios_base::out))
	{
		std::istream file(&fb);

		while (file)
			words.append(1, char(file.get()));
		fb.close();
	}

	else
		cout << "Couldn't open file. Is the name correct?" << endl;

	return words;
}

int CalcID(char input)
{
	switch (input)
	{
	case 'A':
		return 0;
		break;
	case 'B':
		return 1;
		break;
	case 'C':
		return 2;
		break;
	case 'D':
		return 3;
		break;
	case 'E':
		return 4;
		break;
	case 'F':
		return 5;
		break;
	case 'G':
		return 6;
		break;
	case 'H':
		return 7;
		break;
	case 'I':
		return 8;
		break;
	case 'J':
		return 9;
		break;
	case 'K':
		return 10;
		break;
	case 'L':
		return 11;
		break;
	case 'M':
		return 12;
		break;
	case 'N':
		return 13;
		break;
	case 'O':
		return 14;
		break;
	case 'P':
		return 15;
		break;
	case 'Q':
		return 16;
		break;
	case 'R':
		return 17;
		break;
	case 'S':
		return 18;
		break;
	case 'T':
		return 19;
		break;
	case 'U':
		return 20;
		break;
	case 'V':
		return 21;
		break;
	case 'W':
		return 22;
		break;
	case 'X':
		return 23;
		break;
	case 'Y':
		return 24;
		break;
	case 'Z':
		return 25;
		break;
	case ' ':
		return 26;
		break;
	}
}

char calcChar(int input)
{
	switch (input)
	{
	case 0:
		return 'A';
		break;
	case 1:
		return 'B';
		break;
	case 2:
		return 'C';
		break;
	case 3:
		return 'D';
		break;
	case 4:
		return 'E';
		break;
	case 5:
		return 'F';
		break;
	case 6:
		return 'G';
		break;
	case 7:
		return 'H';
		break;
	case 8:
		return 'I';
		break;
	case 9:
		return 'J';
		break;
	case 10:
		return 'K';
		break;
	case 11:
		return 'L';
		break;
	case 12:
		return 'M';
		break;
	case 13:
		return 'N';
		break;
	case 14:
		return 'O';
		break;
	case 15:
		return 'P';
		break;
	case 16:
		return 'Q';
		break;
	case 17:
		return 'R';
		break;
	case 18:
		return 'S';
		break;
	case 19:
		return 'T';
		break;
	case 20:
		return 'U';
		break;
	case 21:
		return 'V';
		break;
	case 22:
		return 'W';
		break;
	case 23:
		return 'X';
		break;
	case 24:
		return 'Y';
		break;
	case 25:
		return 'Z';
		break;
	case 26:
		return ' ';
		break;
	}

}

void Opening(void)
{
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

		system("Color 5");
		Sleep(100);
		system("cls");

		cout << "                                     _  _     " << endl;
		cout << "                           _____*~~~  **  ~~~*" << endl;
		cout << "                        __* ___     |\\__/|     ___ *__" << endl;
		cout << "                    _*   /";
		SetConsoleTextAttribute(hConsole, 2);
		cout << "BatEncrypter/Decrypter 4000";
		SetConsoleTextAttribute(hConsole, 5);
		cout << "\\   *_ " << endl;
		cout << "                     *   |8888888888888888888888888888|   *" << endl;
		cout << "                    /~*  \\8888/~\\88/~\\8888/~\\88/~\\8888/  *~" << endl;
		cout << "                   /  ~*  \\88/   \\/   (88)   \\/   \\88/  *~" << endl;
		cout << "                  /    ~*  \\/          \\/          \\/  *~" << endl;
		cout << "                 /       ~~*_                      _*~~/" << endl;
		cout << "                /            ~~~~~*___ ** ___*~~~~~  /" << endl;
		cout << "               /                      ~  ~         /" << endl;
		cout << "              /                                  /" << endl;
		cout << "             /                                 /" << endl;
		cout << "            /                                /" << endl;
		cout << "           /                    t__n__r__  /" << endl;
		cout << "          /                    | ####### | " << endl;
		cout << "         /            ___      | ####### |             ____i__           /" << endl;
		cout << "        /  _____p_____l_l____  | ####### |            | ooooo |         qp" << endl;
		cout << "i__p__ /  |  ##############  | | ####### |__l___xp____| ooooo |      |~~~~|" << endl;
		cout << " oooo |_I_|  ##############  | | ####### |oo%Xoox%ooxo| ooooo |p__h__|##%#|" << endl;
		cout << " oooo |ooo|  ##############  | | ####### |o%xo%%xoooo%| ooooo |      |#xx%|" << endl;
		cout << " oooo |ooo|  ##############  | | ####### |o%ooxx%ooo%%| ooooo |######|x##%|" << endl;
		cout << " oooo |ooo|  ##############  | | ####### |oo%%x%oo%xoo| ooooo |######|##%x|" << endl;
		cout << " oooo |ooo|  ##############  | | ####### |%x%%oo%/oo%o| ooooo |######|/#%x|" << endl;

		for (int w = 0; w < 2; w++){

			Sleep(100);
			system("cls");
			system("Color 6");

			cout << endl << endl << endl << endl;
			SetConsoleTextAttribute(hConsole, 2);
			cout << "                          BatEncrypter/Decrypter 4000" << endl;
			SetConsoleTextAttribute(hConsole, 5);

			for (int i = 0; i < 20; i++){
				cout << endl;
			}

			Sleep(500);
			system("cls");
			system("Color 5");

			cout << "                                     _  _     " << endl;
			cout << "                           _____*~~~  **  ~~~*" << endl;
			cout << "                        __* ___     |\\__/|     ___ *__" << endl;
			cout << "                      _*  / 888~~\\__(8OO8)__/~~8888 \\  *_ " << endl;
			cout << "                    _*   /";
			SetConsoleTextAttribute(hConsole, 2);
			cout << "BatEncrypter/Decrypter 4000";
			SetConsoleTextAttribute(hConsole, 5);
			cout << "\\   *_ " << endl;
			cout << "                    _*   /BatEncrypter/Decrypter 4000\\   *_ " << endl;
			cout << "                     *   |8888888888888888888888888888|   *" << endl;
			cout << "                    /~*  \\8888/~\\88/~\\8888/~\\88/~\\8888/  *~" << endl;
			cout << "                   /  ~*  \\88/   \\/   (88)   \\/   \\88/  *~" << endl;
			cout << "                  /    ~*  \\/          \\/          \\/  *~" << endl;
			cout << "                 /       ~~*_                      _*~~/" << endl;
			cout << "                /            ~~~~~*___ ** ___*~~~~~  /" << endl;
			cout << "               /                      ~  ~         /" << endl;
			cout << "              /                                  /" << endl;
			cout << "             /                                 /" << endl;
			cout << "            /                                /" << endl;
			cout << "           /                    t__n__r__  /" << endl;
			cout << "          /                    | ####### | " << endl;
			cout << "         /            ___      | ####### |             ____i__           /" << endl;
			cout << "        /  _____p_____l_l____  | ####### |            | ooooo |         qp" << endl;
			cout << "i__p__ /  |  ##############  | | ####### |__l___xp____| ooooo |      |~~~~|" << endl;
			cout << " oooo |_I_|  ##############  | | ####### |oo%Xoox%ooxo| ooooo |p__h__|##%#|" << endl;
			cout << " oooo |ooo|  ##############  | | ####### |o%xo%%xoooo%| ooooo |      |#xx%|" << endl;
			cout << " oooo |ooo|  ##############  | | ####### |o%ooxx%ooo%%| ooooo |######|x##%|" << endl;
			cout << " oooo |ooo|  ##############  | | ####### |oo%%x%oo%xoo| ooooo |######|##%x|" << endl;
			cout << " oooo |ooo|  ##############  | | ####### |%x%%oo%/oo%o| ooooo |######|/#%x|" << endl;

			Sleep(300);
			system("cls");
			system("Color 6");

			cout << endl << endl << endl << endl;
			SetConsoleTextAttribute(hConsole, 2);
			cout << "                          BatEncrypter/Decrypter 4000" << endl;
			SetConsoleTextAttribute(hConsole, 5);

			for (int i = 0; i < 20; i++){
				cout << endl;
			}

			Sleep(500);
			system("cls");
			system("Color 5");

			cout << "                                     _  _     " << endl;
			cout << "                           _____*~~~  **  ~~~*" << endl;
			cout << "                        __* ___     |\\__/|     ___ *__" << endl;
			cout << "                      _*  / 888~~\\__(8OO8)__/~~8888 \\  *_ " << endl;
			cout << "                    _*   /";
			SetConsoleTextAttribute(hConsole, 2);
			cout << "BatEncrypter/Decrypter 4000";
			SetConsoleTextAttribute(hConsole, 5);
			cout << "\\   *_ " << endl;
			cout << "                     *   |8888888888888888888888888888|   *" << endl;
			cout << "                    /~*  \\8888/~\\88/~\\8888/~\\88/~\\8888/  *~" << endl;
			cout << "                   /  ~*  \\88/   \\/   (88)   \\/   \\88/  *~" << endl;
			cout << "                  /    ~*  \\/          \\/          \\/  *~" << endl;
			cout << "                 /       ~~*_                      _*~~/" << endl;
			cout << "                /            ~~~~~*___ ** ___*~~~~~  /" << endl;
			cout << "               /                      ~  ~         /" << endl;
			cout << "              /                                  /" << endl;
			cout << "             /                                 /" << endl;
			cout << "            /                                /" << endl;
			cout << "           /                    t__n__r__  /" << endl;
			cout << "          /                    | ####### | " << endl;
			cout << "         /            ___      | ####### |             ____i__           /" << endl;
			cout << "        /  _____p_____l_l____  | ####### |            | ooooo |         qp" << endl;
			cout << "i__p__ /  |  ##############  | | ####### |__l___xp____| ooooo |      |~~~~|" << endl;
			cout << " oooo |_I_|  ##############  | | ####### |oo%Xoox%ooxo| ooooo |p__h__|##%#|" << endl;
			cout << " oooo |ooo|  ##############  | | ####### |o%xo%%xoooo%| ooooo |      |#xx%|" << endl;
			cout << " oooo |ooo|  ##############  | | ####### |o%ooxx%ooo%%| ooooo |######|x##%|" << endl;
			cout << " oooo |ooo|  ##############  | | ####### |oo%%x%oo%xoo| ooooo |######|##%x|" << endl;
			cout << " oooo |ooo|  ##############  | | ####### |%x%%oo%/oo%o| ooooo |######|/#%x|" << endl;


		}

		for (int x = 0; x < 4; x++){

			Sleep(500);
			system("cls");
			system("Color 6");

			for (int y = 0; y < 19; y++){
				cout << endl;
			}

			Sleep(500);
			system("cls");
			system("Color 5");

			cout << "                                     _  _     " << endl;
			cout << "                           _____*~~~  **  ~~~*" << endl;
			cout << "                        __* ___     |\\__/|     ___ *__" << endl;
			cout << "                      _*  / 888~~\\__(8OO8)__/~~8888 \\  *_ " << endl;
			cout << "                    _*   /";
			SetConsoleTextAttribute(hConsole, 2);
			cout << "BatEncrypter/Decrypter 4000";
			SetConsoleTextAttribute(hConsole, 5);
			cout << "\\   *_ " << endl;
			cout << "                     *   |8888888888888888888888888888|   *" << endl;
			cout << "                    /~*  \\8888/~\\88/~\\8888/~\\88/~\\8888/  *~" << endl;
			cout << "                   /  ~*  \\88/   \\/   (88)   \\/   \\88/  *~" << endl;
			cout << "                  /    ~*  \\/          \\/          \\/  *~" << endl;
			cout << "                 /       ~~*_                      _*~~/" << endl;
			cout << "                /            ~~~~~*___ ** ___*~~~~~  /" << endl;
			cout << "               /                      ~  ~         /" << endl;
			cout << "              /                                  /" << endl;
			cout << "             /                                 /" << endl;
			cout << "            /                                /" << endl;
			cout << "           /                    t__n__r__  /" << endl;
			cout << "          /                    | ####### | " << endl;
			cout << "         /            ___      | ####### |             ____i__           /" << endl;
			cout << "        /  _____p_____l_l____  | ####### |            | ooooo |         qp" << endl;
			cout << "i__p__ /  |  ##############  | | ####### |__l___xp____| ooooo |      |~~~~|" << endl;
			cout << " oooo |_I_|  ##############  | | ####### |oo%Xoox%ooxo| ooooo |p__h__|##%#|" << endl;
			cout << " oooo |ooo|  ##############  | | ####### |o%xo%%xoooo%| ooooo |      |#xx%|" << endl;
			cout << " oooo |ooo|  ##############  | | ####### |o%ooxx%ooo%%| ooooo |######|x##%|" << endl;
			cout << " oooo |ooo|  ##############  | | ####### |oo%%x%oo%xoo| ooooo |######|##%x|" << endl;
			cout << " oooo |ooo|  ##############  | | ####### |%x%%oo%/oo%o| ooooo |######|/#%x|" << endl;
		}
		cout << endl;
		cout << "/***************************************************************\\" << endl << endl;
		system("Color 7");
}

void CalcMinors(double matrixMinors[][3], double key[][3])
{
	matrixMinors[0][0] = key[1][1] * key[2][2] - key[2][1] * key[1][2];
	matrixMinors[0][1] = key[1][0] * key[2][2] - key[2][0] * key[1][2];
	matrixMinors[0][2] = key[1][0] * key[2][1] - key[2][0] * key[1][1];
	matrixMinors[1][0] = key[0][1] * key[2][2] - key[2][1] * key[0][2];
	matrixMinors[1][1] = key[0][0] * key[2][2] - key[2][0] * key[0][2];
	matrixMinors[1][2] = key[0][0] * key[2][1] - key[2][0] * key[0][1];
	matrixMinors[2][0] = key[0][1] * key[1][2] - key[1][1] * key[0][2];
	matrixMinors[2][1] = key[0][0] * key[1][2] - key[1][0] * key[0][2];
	matrixMinors[2][2] = key[0][0] * key[1][1] - key[1][0] * key[0][1];
}

void EncryptText(double key[][3], int ySize, double encrypted[][3], double text[][3])
{
newMatrix:												// The goto reference incase our matrix is singular

	for (int rows = 0; rows < 3; rows++)
	for (int columns = 0; columns < 3; columns++)
		key[rows][columns] = rand() % 26;								// We fill up the key with random variables from 0-26

	if (key[0][0] * (key[1][1] * key[2][2] - key[2][1] * key[1][2]) -    // Checks if the matrix is singular. If it isn't then it goes ahead
		key[0][1] * (key[1][0] * key[2][2] - key[1][2] * key[2][0]) +
		key[0][2] * (key[1][0] * key[2][1] - key[2][0] * key[1][1]) !=
		0)
	{
		ofstream writing("Encrypted.txt");
		cout << "Characters Encrypted: " << endl;
		// Here we create the encrypted text by multiplying the plaintext by our key
		for (int y = 0; y < ySize; y++)
		{
			for (int x = 0; x < 3; x++){
				encrypted[y][x] = round(text[y][0] * key[0][x] + text[y][1] * key[1][x] + text[y][2] * key[2][x]);
				cout << encrypted[y][x] << " ";
				writing << encrypted[y][x] << " ";
			}
			cout << "\n";
		}

		ofstream keyText("Key.txt");

		for (int y = 0; y < 3; y++)
		{
			for (int x = 0; x < 3; x++)
				keyText << key[y][x] << " ";
		}
		//encrypted[0][0] = text[0][0] * key[0][0] + text[0][1] * key[1][0] + text[0][2] * key[2][0];
		//encrypted[0][1] = text[0][0] * key[0][1] + text[0][1] * key[1][1] + text[0][2] * key[2][1];
		//encrypted[0][2] = text[0][0] * key[0][2] + text[0][1] * key[1][2] + text[0][2] * key[2][2];
	}
	else
		goto newMatrix;
}

void DecryptText(double key[][3], double encrypted[][3], int ySize)
{
	double matrixMinors[3][3];				//Calculating the matrix of minors
	CalcMinors(matrixMinors, key);

	matrixMinors[0][1] *= -1;											//Calculating the matrix of cofactors
	matrixMinors[1][0] *= -1;
	matrixMinors[1][2] *= -1;
	matrixMinors[2][1] *= -1;

	double determKey =														// We find the determinate of the key matrix
		key[0][0] * (key[1][1] * key[2][2] - key[1][2] * key[2][1]) -
		key[0][1] * (key[1][0] * key[2][2] - key[1][2] * key[2][0]) +
		key[0][2] * (key[1][0] * key[2][1] - key[2][0] * key[1][1]);

	//double multAdj = 1 / determKey;

	double adjugate[3][3];
	adjugate[0][0] = matrixMinors[0][0];
	adjugate[0][1] = matrixMinors[1][0];
	adjugate[0][2] = matrixMinors[2][0];
	adjugate[1][0] = matrixMinors[0][1];
	adjugate[1][1] = matrixMinors[1][1];
	adjugate[1][2] = matrixMinors[2][1];
	adjugate[2][0] = matrixMinors[0][2];
	adjugate[2][1] = matrixMinors[1][2];
	adjugate[2][2] = matrixMinors[2][2];

	double inverse[3][3];
	inverse[0][0] = adjugate[0][0] / determKey;
	inverse[0][1] = adjugate[0][1] / determKey;
	inverse[0][2] = adjugate[0][2] / determKey;
	inverse[1][0] = adjugate[1][0] / determKey;
	inverse[1][1] = adjugate[1][1] / determKey;
	inverse[1][2] = adjugate[1][2] / determKey;
	inverse[2][0] = adjugate[2][0] / determKey;
	inverse[2][1] = adjugate[2][1] / determKey;
	inverse[2][2] = adjugate[2][2] / determKey;

	double decrypted[ARRAYSIZE][3];
	for (int y = 0; y < ARRAYSIZE; y++)
		fill_n(decrypted[y], 3, -1);


	for (int y = 0; y < ySize; y++)
	for (int x = 0; x <= 2; x++){
		decrypted[y][x] = round(encrypted[y][0] * inverse[0][x] + encrypted[y][1] * inverse[1][x] + encrypted[y][2] * inverse[2][x]);
	}

	cout << "Characters Decrypted: ";

	for (int y = 0; y < ySize; y++)
	for (int x = 0; x < 3; x++)
		cout << char(decrypted[y][x]);
	cout << endl << endl << "/***************************************************************\\" << endl << endl;
}

void ProcessFile(int &ySize, double text[][3])
{
	string fileName;
	cout << "Enter the file name(.txt): ";
	cin >> fileName;
	std::ifstream is(fileName);     // open file

	cout << "Characters Read: ";

	for (int y = 0; is.good();){
		ySize = y + 1;
		for (int x = 0; is.good(); x++)          // loop while extraction from file is possible
		{
			if (x >= 3){
				y++;
				x = 0;
				break;
			}

			char c = is.get();      // get character from file
			if (is.good()){
				cout << c;
				text[y][x] = c;		//We turn the characters in the file into numerical representations
			}
		}
	}
	is.close();
}

void OutputKey(double key[3][3])
{
	cout << endl << endl << "Key: " << endl;			//Outputting the key so that the user can use it to decode the text
	for (int y = 0; y < 3; y++){
		for (int x = 0; x < 3; x++)
			cout << setw(3) << key[y][x] << " ";
		cout << endl;
	}
}

void ProcessKey(double key[3][3], string fileName, double encrypted[][3], string encFile, int &ySize)
{
	ifstream text(fileName);

	for (int y = 0; y < 3; y++)
		for (int x = 0; x < 3; x++)
		{
			string num("");
			getline(text, num, ' ');
			key[y][x] = stoi(num);
		}
		text.close();

		text.open(encFile);

		for (int y = 0;; y++){
			for (int x = 0; x < 3; x++)
			{
				string num("");
					getline(text, num, ' ');
					if (num.empty())
						return;
					encrypted[y][x] = stoi(num);
			}
			ySize++;
		}
		text.close();
}

void GetText(double text[][3], int &ySize)
{
	string input;
	int stringX = 0;
	cout << "Enter Text: ";
	getline(cin, input);
	getline(cin, input);
	ySize = ceil(float(input.length()) / 3);

	for (int y = 0; y < input.length(); y++)
	for (int x = 0; x < 3; x++)
	{
		if (stringX >= input.length())
			break;
		text[y][x] = input[stringX];
		stringX++;
	}

}