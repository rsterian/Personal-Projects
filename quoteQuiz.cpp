#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>
#include <fstream>

using namespace std;

void printTitle(void);

vector <string> askQuestion (string quote, vector <string> answersVec);

int main(){
	printTitle();	

	ifstream infile ("quotes.txt");

	vector <string> quoteVec;
	string holder;
	getline(infile, holder);
	getline(infile, holder);
	quoteVec.push_back(holder);

	while (!infile.eof()){
		getline(infile, holder);
		quoteVec.push_back(holder);
	}

	infile.close();

	ifstream infileAgain ("authors.txt");

	vector <string> answersVec;
	getline(infileAgain, holder);
	answersVec.push_back(holder);

	while (!infileAgain.eof()){
		answersVec.push_back(holder);
		getline(infileAgain,holder);
	}

	infileAgain.close();
	int sum=0;

//////////////////////////////////////////////////////////////////////////////////////	

/*1*/	int correctNumber=1;
	string correctAnswer="Dr. Seuss";
	int userAnswer;

	answersVec=askQuestion(quoteVec.at(0), answersVec);
	for(int i=0;i<answersVec.size();i++)
	{
		if (answersVec.at(i)==correctAnswer)
		{
			if (i==0)
				answersVec.at(i)=answersVec.at(i+4);
			else
				answersVec.at(i)=answersVec.at(i-1);
		}
	}
		if (answersVec.at(0)==answersVec.at(2))
			answersVec.at(0)=answersVec.at(3);
		if (answersVec.at(0)==correctAnswer)
			answersVec.at(0)=answersVec.at(4);	
	answersVec[correctNumber]=correctAnswer;

	for (int i=1; i<=3; i++){
		cout << i << ". " << answersVec[i-1] << endl;
	}
	cout << endl << "Enter 1, 2 or 3" << endl;
	cin >> userAnswer;
	if (userAnswer==correctNumber+1){
		cout << endl << "Let's move on to level two!" << endl;
		sum++;}
	else
	{
		cout << endl << "Your final score is " << sum << ". Please try again!"<<endl; 
		return 0;
	}

/*2*/

	correctNumber=2;
	correctAnswer="Mae West";

	answersVec=askQuestion(quoteVec.at(1), answersVec);
	for(int i=0;i<answersVec.size();i++)
	{
		if (answersVec.at(i)==correctAnswer)
		{
			if (i==0)
				answersVec.at(i)=answersVec.at(i+4);
			else
				answersVec.at(i)=answersVec.at(i-1);
		}
	}
		if (answersVec.at(0)==correctAnswer)
			answersVec.at(0)=answersVec.at(4);	
		if (answersVec.at(0)==answersVec.at(1))
			answersVec.at(0)=answersVec.at(3);
	
	answersVec[correctNumber]=correctAnswer;

	for (int i=1; i<=3; i++){
		cout << i << ". " << answersVec[i-1] << endl;
	}
	cout << endl << "Enter 1, 2 or 3" << endl;
	cin >> userAnswer;
	if (userAnswer==correctNumber+1){
		cout << endl << "Let's move on to level three!" << endl;
		sum++;}
	else
	{
		cout << "Your final score is " << sum << ". Please try again!"<<endl; 
		return 0;
	}


/*3*/

	correctNumber=0;
	correctAnswer="Mahatma Gandhi";

	answersVec=askQuestion(quoteVec.at(2), answersVec);
	for(int i=0;i<answersVec.size();i++){
		if (answersVec.at(i)==correctAnswer){
			answersVec.at(i)="Henry Wadsworth Longfellow";
		}
	}

	for(int k=0; k<3; k++){
		for(int i=0; i<answersVec.size(); i++){
			for (int j=0; j<answersVec.size(); j++){
				if ((answersVec[i] == answersVec[j]) && (i != j)){
					if(k==0){
						answersVec[i]="Socrates";
					} else if (k==1){
						answersVec[i]="Plato";
					} else {
						answersVec[i]="Abraham Lincoln";
						answersVec[j]="George Washington";
					}
				}
			}		
		}
	}


	answersVec[correctNumber]=correctAnswer;



	for (int i=1; i<=4; i++){
		cout << i << ". " << answersVec[i-1] << endl;
	}
	cout << endl << "Enter 1, 2, 3 or 4" << endl;
	cin >> userAnswer;
	if (userAnswer==correctNumber+1){
		cout << endl << "Let's move on to level four!" << endl;
		sum++;}
	else
	{
		cout << "Your final score is " << sum << ". Please try again!"<<endl; 
		return 0;
	}

/*4*/

	correctNumber=3;
	correctAnswer="Bil Keane";

	answersVec=askQuestion(quoteVec.at(3), answersVec);
	for(int i=0;i<answersVec.size();i++){
		if (answersVec.at(i)==correctAnswer){
			answersVec.at(i)="Henry Wadsworth Longfellow";
		}
	}

	for(int k=0; k<3; k++){
		for(int i=0; i<answersVec.size(); i++){
			for (int j=0; j<answersVec.size(); j++){
				if ((answersVec[i] == answersVec[j]) && (i != j)){
					if(k==0){
						answersVec[i]="Socrates";
					} else if (k==1){
						answersVec[i]="Plato";
					} else {
						answersVec[i]="Abraham Lincoln";
						answersVec[j]="George Washington";
					}
				}
			}		
		}
	}

	answersVec[correctNumber]=correctAnswer;

	for (int i=1; i<=4; i++){
		cout << i << ". " << answersVec[i-1] << endl;
	}
	cout << endl << "Enter 1, 2, 3 or 4" << endl;
	cin >> userAnswer;
	if (userAnswer==correctNumber+1){
		cout << endl << "Let's move on to level five!" << endl;
		sum++;}
	else
	{
		cout << "Your final score is " << sum << ". Please try again!"<<endl; 
		return 0;
	}

/*5*/

	correctNumber=3;
	correctAnswer="J.K. Rowling";

	answersVec=askQuestion(quoteVec.at(4), answersVec);
	for(int i=0;i<answersVec.size();i++){
		if (answersVec.at(i)==correctAnswer){
			answersVec.at(i)="Henry Wadsworth Longfellow";
		}
	}

	for(int k=0; k<3; k++){
		for(int i=0; i<answersVec.size(); i++){
			for (int j=0; j<answersVec.size(); j++){
				if ((answersVec[i] == answersVec[j]) && (i != j)){
					if(k==0){
						answersVec[i]="Socrates";
					} else if (k==1){
						answersVec[i]="Plato";
					} else {
						answersVec[i]="Abraham Lincoln";
						answersVec[j]="George Washington";
					}
				}
			}		
		}
	}

	answersVec[correctNumber]=correctAnswer;

	for (int i=1; i<=5; i++){
		cout << i << ". " << answersVec[i-1] << endl;
	}
	cout << endl << "Enter 1, 2, 3, 4, or 5" << endl;
	cin >> userAnswer;
	if (userAnswer==correctNumber+1){
		cout << endl << "Let's move on to level six!" << endl;
		sum++;}
	else
	{
		cout << "Your final score is " << sum << ". Please try again!"<<endl; 
		return 0;
	}

/*6*/

	correctNumber=2;
	correctAnswer="Mark Twain";

	answersVec=askQuestion(quoteVec.at(5), answersVec);
	for(int i=0;i<answersVec.size();i++){
		if (answersVec.at(i)==correctAnswer){
			answersVec.at(i)="Henry Wadsworth Longfellow";
		}
	}

	for(int k=0; k<3; k++){
		for(int i=0; i<answersVec.size(); i++){
			for (int j=0; j<answersVec.size(); j++){
				if ((answersVec[i] == answersVec[j]) && (i != j)){
					if(k==0){
						answersVec[i]="Socrates";
					} else if (k==1){
						answersVec[i]="Plato";
					} else {
						answersVec[i]="Abraham Lincoln";
						answersVec[j]="George Washington";
					}
				}
			}		
		}
	}

	answersVec[correctNumber]=correctAnswer;

	for (int i=1; i<=5; i++){
		cout << i << ". " << answersVec[i-1] << endl;
	}
	cout << endl << "Enter 1, 2, 3, 4, or 5" << endl;
	cin >> userAnswer;
	if (userAnswer==correctNumber+1){
		cout << endl << "Let's move on to level seven!" << endl;
		sum++;}
	else
	{
		cout << "Your final score is " << sum << ". Please try again!"<<endl; 
		return 0;
	}

/*7*/

	correctNumber=1;
	correctAnswer="Ralph Waldo Emerson";

	answersVec=askQuestion(quoteVec.at(6), answersVec);
	for(int i=0;i<answersVec.size();i++){
		if (answersVec.at(i)==correctAnswer){
			answersVec.at(i)="Henry Wadsworth Longfellow";
		}
	}
	
	for(int k=0; k<3; k++){
		for(int i=0; i<answersVec.size(); i++){
			for (int j=0; j<answersVec.size(); j++){
				if ((answersVec[i] == answersVec[j]) && (i != j)){
					if(k==0){
						answersVec[i]="Socrates";
					} else if (k==1){
						answersVec[i]="Plato";
					} else {
						answersVec[i]="Abraham Lincoln";
						answersVec[j]="George Washington";
					}
				}
			}		
		}
	}

	answersVec[correctNumber]=correctAnswer;

	for (int i=1; i<=5; i++){
		cout << i << ". " << answersVec[i-1] << endl;
	}
	cout << endl << "Enter 1, 2, 3, 4, or 5" << endl;
	cin >> userAnswer;
	if (userAnswer==correctNumber+1){
		cout << endl << "Congratulations! You win!" << endl;
		sum++;}
	else
	{
		cout << "Your final score is " << sum << ". Please try again!"<<endl; 
		return 0;
	}

	return 0;
}


void printTitle(void){
	cout << endl << endl << "QuoteMe" << endl << "-------" << endl << endl;
}

vector <string> askQuestion (string quote, vector <string> answersVec){

	srand(time(NULL));

	vector <string> moddingVec;

	while (answersVec.size() > 1){
		int position=(rand() % answersVec.size());

		moddingVec.push_back(answersVec[position]);
		answersVec.erase(answersVec.begin()+position);
	}

	moddingVec.push_back(answersVec[0]);

	cout << "Who said " << quote << "?" << endl << endl;

	return moddingVec;

}	
