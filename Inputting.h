#ifndef INPUTTING_H
#define INPUTTING_H
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <Windows.h>
#include <chrono>
#include <thread>
//#include <array>

#define ARRAYSIZE 2000

using namespace std;

string Process(string fileName);
int CalcID(char input);
char calcChar(int input);
void Opening(void);
void CalcMinors(double matrixMinors[][3], double key[][3]);
void EncryptText(double key[][3], int ySize, double encrypted[][3], double text[][3]);
void ProcessFile(int &ySize, double text[][3]);
void OutputKey(double key[][3]);
void ProcessKey(double key[][3], string fileName, double encrypted[][3], string encFile, int &ySize);
void DecryptText(double key[][3], double encrypted[][3], int ySize);
void GetText(double text[][3], int &ySize);

#endif