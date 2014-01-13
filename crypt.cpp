#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <sstream>
#include <ctime>
#include <cstdlib>

using namespace std;

//Turns a character into a string variable
string charToString(char character){
	stringstream ss;
	string gotString;
	ss << character;
	ss >> gotString;
	return gotString;
}

//Takes all the letters in the alphabet and shuffles them into a random order, then depending on the letter input, a new string (Temp) is appended to newString
//and then returned.  All instances of a letter are replaced by the same random letter and there are no repititions of letters since the array index is hardcoded
//in as 0-25
string assignNewLetter(string line){
	string temp, newString;
	char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	random_shuffle(alphabet, alphabet+26);
	for(int i = 0; i < line.length(); i++){
		char letter = line.at(i);
		switch(letter){
			case 'a':
				temp = charToString(alphabet[0]);
				break;
			case 'b':
				temp = charToString(alphabet[1]);
				break;
			case 'c':
				temp = charToString(alphabet[2]);
				break;
			case 'd':
				temp = charToString(alphabet[3]);
				break;
			case 'e':
				temp = charToString(alphabet[4]);
				break;
			case 'f':
				temp = charToString(alphabet[5]);
				break;
			case 'g':
				temp = charToString(alphabet[6]);
				break;
			case 'h':
				temp = charToString(alphabet[7]);
				break;
			case 'i':
				temp = charToString(alphabet[8]);
				break;
			case 'j':
				temp = charToString(alphabet[9]);
				break;
			case 'k':
				temp = charToString(alphabet[10]);
				break;
			case 'l':
				temp = charToString(alphabet[11]);
				break;
			case 'm':
				temp = charToString(alphabet[12]);
				break;
			case 'n':
				temp = charToString(alphabet[13]);
				break;
			case 'o':
				temp = charToString(alphabet[14]);
				break;
			case 'p':
				temp = charToString(alphabet[15]);
				break;
			case 'q':
				temp = charToString(alphabet[16]);
				break;
			case 'r':
				temp = charToString(alphabet[17]);
				break;
			case 's':
				temp = charToString(alphabet[18]);
				break;
			case 't':
				temp = charToString(alphabet[19]);
				break;
			case 'u':
				temp = charToString(alphabet[20]);
				break;
			case 'v':
				temp = charToString(alphabet[21]);
				break;
			case 'w':
				temp = charToString(alphabet[22]);
				break;
			case 'x':
				temp = charToString(alphabet[23]);
				break;
			case 'y':
				temp = charToString(alphabet[24]);
				break;
			case 'z':
				temp = charToString(alphabet[25]);
				break;
			case ' ':
				temp = " ";
				break;
			case ',':
				temp = ",";
				break;
			case '.':
				temp = ".";
				break;
			case '?':
				temp = "?";
				break;
			case ';':
				temp = ";";
				break;
			case ':':
				temp = ":";
				break;
		}
	newString.append(temp);
	}
return newString;
}

int main(){
	string line, returnString;
	//Set the seed value so that the shuffling will be random each time
	srand(time(NULL));
	ifstream myFile("example.txt");
	if(myFile.is_open()){
		while(getline(myFile, line)){
			cout << "Original String:  " << line << endl;
			returnString = assignNewLetter(line);
		}
	cout << "Ciphered String:  "<< returnString << endl;
	}
	myFile.close();
	return 0;
}
