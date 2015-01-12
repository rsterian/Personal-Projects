#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

string expand(const string & shortenedString, const string & acronym, const string & fullWords, int acronymLength)
{
	string expandedString=shortenedString;
	
	while (expandedString.find(acronym) != expandedString.npos)
		expandedString.replace(expandedString.find(acronym), acronymLength, fullWords.substr(1,fullWords.size()-1));
	
	return expandedString;
}

int main()
{
	vector <string> acronymVector(10);
	vector <string> fullWordsVector(10);
	vector <int> lengthVector(10);
	string acronym;
	string fullWords;
	string sentenceAcronyms;
	int i=0;

	ifstream infile("acronyms.txt");

	infile >> acronym;
	getline(infile, fullWords);
	
	while(!infile.eof())
	{
		acronymVector.at(i)=acronym;
		fullWordsVector.at(i)=fullWords;
		lengthVector.at(i)=acronym.size();
		i++;
		infile >> acronym;
		getline(infile, fullWords);
	}

	cout << "Please enter a sentence: ";
	getline(cin, sentenceAcronyms);
	
	for (int i=0; i<acronymVector.size(); i++)
	{
		sentenceAcronyms=expand(sentenceAcronyms, acronymVector.at(i), fullWordsVector.at(i), lengthVector.at(i));
	}

	if (sentenceAcronyms.find("smfw") != sentenceAcronyms.npos)
	{
		cout << "wtfw it's like smho tbfh, imdb." << endl;
		return 0;
	}

	cout << sentenceAcronyms << endl;
	
	return 0;
}
