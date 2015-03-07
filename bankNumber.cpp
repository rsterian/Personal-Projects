#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

struct Number {
	int value;
	string firstLine;
	string secondLine;
	string thirdLine;
};

Number numbers[10];

void numberInit(int value, string firstLine, string secondLine, string thirdLine){
	numbers[value].value = value;
	numbers[value].firstLine = firstLine;
	numbers[value].secondLine = secondLine;
	numbers[value].thirdLine = thirdLine;
}

void numberInitAll(){
	numberInit(0, " _ ", "| |", "|_|");
	numberInit(1, "   ", " | ", " | ");
	numberInit(2, " _ ", " _|", "|_ ");
	numberInit(3, " _ ", " _|", " _|");
	numberInit(4, "   ", "|_|", "  |");
	numberInit(5, " _ ", "|_ ", " _|");
	numberInit(6, " _ ", "|_ ", "|_|");
	numberInit(7, " _ ", "  |", "  |");
	numberInit(8, " _ ", "|_|", "|_|");
	numberInit(9, " _ ", "|_|", " _|");
}

int main(){
	numberInitAll();

	ifstream infile("bankNumbers.txt");
	int num1[9];
	int num2[9];
	int num3[9];
	int num;	
	infile >> num;
	for (int i = 0; i < 9; i++){
		num1[i] = (num % 10);
		num = num / 10;
	}
	infile >> num;
	for (int i = 0; i < 9; i++){
		num2[i] = (num % 10);
		num = num / 10;
	}
	infile >> num;
	for (int i = 0; i < 9; i++){
		num3[i] = (num % 10);
		num = num / 10;
	}
		
	for (int i = 8; i >= 0; i--){
		for (int j = 0; j <= 9; j++){
			if (num1[i] == j){
				cout << numbers[j].firstLine;
			}
		}
	}
	cout << endl;
	for (int i = 8; i >= 0; i--){
		for (int j = 0; j <= 9; j++){
			if (num1[i] == j){
				cout << numbers[j].secondLine;
			}
		}
	}
	cout << endl;
	for (int i = 8; i >= 0; i--){
		for (int j = 0; j <= 9; j++){
			if (num1[i] == j){
				cout << numbers[j].thirdLine;
			}
		}
	}
	cout << endl;
//////////////////////////////////////////////
	for (int i = 8; i >= 0; i--){
		for (int j = 0; j <= 9; j++){
			if (num2[i] == j){
				cout << numbers[j].firstLine;
			}
		}
	}
	cout << endl;
	for (int i = 8; i >= 0; i--){
		for (int j = 0; j <= 9; j++){
			if (num2[i] == j){
				cout << numbers[j].secondLine;
			}
		}
	}
	cout << endl;
	for (int i = 8; i >= 0; i--){
		for (int j = 0; j <= 9; j++){
			if (num2[i] == j){
				cout << numbers[j].thirdLine;
			}
		}
	}
	cout << endl;
//////////////////////////////////////////////
	for (int i = 8; i >= 0; i--){
		for (int j = 0; j <= 9; j++){
			if (num3[i] == j){
				cout << numbers[j].firstLine;
			}
		}
	}
	cout << endl;
	for (int i = 8; i >= 0; i--){
		for (int j = 0; j <= 9; j++){
			if (num3[i] == j){
				cout << numbers[j].secondLine;
			}
		}
	}
	cout << endl;
	for (int i = 8; i >= 0; i--){
		for (int j = 0; j <= 9; j++){
			if (num3[i] == j){
				cout << numbers[j].thirdLine;
			}
		}
	}
	cout << endl;

	return 0;
}
