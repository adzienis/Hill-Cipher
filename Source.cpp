#include "Inputting.h"


int main()
{
	string readBuffer;
	double key[3][3];
	int choice;

	double text[ARRAYSIZE][3];				//loops so that the default value is a space, could work with -1 as well
	double encrypted[ARRAYSIZE][3];
	int ySize = 0;							//Determines how many rows we need

	Opening();								//Shows opening logo

	while (1)

	{
		start:

		for (int y = 0; y < 2000; y++)
		for (int x = 0; x < 3; x++)
			text[y][x] = -1;

		ySize = 0; 
		srand(time(0));

		cout << "(1) Enter a file name.";
		cout << endl << "(2) Enter text to encrypt." << endl;
		cout << "(3) Decrypt existing text with key text." << endl;
		cout << "(4) To Quit." << endl << endl;
		cout << "Please Enter a Numerical Choice: ";
		cin >> choice;
		system("CLS");

		switch (choice)
		{
		case 1:
			ProcessFile(ySize, text);
			cout << endl << endl << "/***************************************************************\\" << endl << endl;
			EncryptText(key, ySize, encrypted, text);
			cout << endl << endl << "/***************************************************************\\" << endl << endl;
			OutputKey(key);
			cout << endl << endl << "/***************************************************************\\" << endl << endl;
			DecryptText(key, encrypted, ySize);
			break;
		case 2:
		{
				  GetText(text, ySize);
				  cout << endl << endl << "/***************************************************************\\" << endl << endl;
				  EncryptText(key, ySize, encrypted, text);
				  cout << endl << endl << "/***************************************************************\\" << endl << endl;
				  OutputKey(key);
				  cout << endl << endl << "/***************************************************************\\" << endl << endl;
				  DecryptText(key, encrypted, ySize);
		}
			break;
		case 3:
		{
			string fileName, encFile;
			cout << endl << "Enter the file name(.txt): ";
			cin >> encFile;
			cout << endl<< "Enter the key file name(.txt): ";
			cin >> fileName;
			ProcessKey(key, fileName, encrypted, encFile, ySize);	//encrypted probs not be needed
			DecryptText(key, encrypted, ySize);
		}
			break;
		case 4:
			return 0;
			break;
		default:
		{
				   for (int x = 0; x < 30; x++)
					   cout << "\n";
				   cout << "Why'd you do this to me?";
				   std::this_thread::sleep_for(std::chrono::milliseconds(2000));
				   system("CLS");
				   goto start;
		}
		}
	}
	return 0;
}
