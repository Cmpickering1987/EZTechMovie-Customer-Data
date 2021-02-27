/*
INT 499 Final Project C++
Created by Jason Light, Carolann Pickering, and Mark Walker
*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <list>

#include "AllMovies.h"


using namespace std;

struct EZTechMovie {
char userKey = '?';
string movieName;
string movieName2;
string castMem;
int castNum = 0;
string rating;
};

int main() {

EZTechMovie p1; //set p1 as the reference varialble
list <EZTechMovie> listOfMovies; // stores the movies at end of program.

cout << "Would you like to store additional movies (y/n)?";
cin >> p1.userKey;
cout << endl;

while (p1.userKey == 'y' || p1.userKey == 'Y') {

EZTechMovie p1;

cout << "Enter the number of cast members: ";
cin >> p1.castNum;
cin.ignore();

cout << "Enter Movie Title: ";
getline(cin, p1.movieName);

cout << "Cast First & Last Name: ";
getline(cin, p1.castMem);

cout << "Enter the movie rating: ";
getline(cin, p1.rating);
cout << endl;

listOfMovies.push_back(p1);

cout << "Would you like to store additional movies(y/n)?";
cin >> p1.userKey; //while loop ends if "n" or "N" gets inputed.
if (p1.userKey == 'n') {
break;
}

}
   //Implements the iterator to output movies stored.
for (list<EZTechMovie>::iterator it = listOfMovies.begin(); it != listOfMovies.end(); it++) {
cout << endl;
cout << "The movie(s) that are stored:" << endl;
cout << endl;
cout << "    movieName: " << (it)->movieName << endl;
cout << "    castMem: " << (it)->castMem << endl;
cout << "    castNum: " << (it)->castNum << endl;
cout << "    rating: " << (it)->rating << endl;
cout << "###################################################" << endl;
cout << endl;

}
cout << endl;
Info dr1; //this pull from a .cpp file
dr1.PrintAllInfo();
return 0;
}
