#include <iostream>
#include <string>
using namespace std;

bool isItAnISBN(const string &isbn);

int main(){
    string isbn;

    cout << "Enter a 10 digit number: ";
    cin >> isbn;

    while (true){
	if (isbn.length() != 10){
	    cout << "Enter a 10 digit number: ";
	    cin >> isbn;
	} else {
	    break;
	}
    }

    if (isItAnISBN(isbn) == true){
	cout << isbn << " is a valid ISBN." << endl;
    } else {
	cout << isbn << " is not a valid ISBN." << endl;
    }

    return 0;
}

bool isItAnISBN(const string &isbn){

    int multiplier=10;
    int total=0;

    for (int i=0; i<9; i++){
	total = total + (multiplier * isbn[i]);
	multiplier--;
    }

    if (isbn[9] == 'X'){
	total = total + 10;
    } else {
	total = total + isbn[9];
    }
    
    if (total % 11){
	return false;
    } else {
	return true;
    }
}    
