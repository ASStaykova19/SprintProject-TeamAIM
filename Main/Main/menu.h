#pragma once
#include <iostream>
#include "Game.h"
#include "Welcome.h"
using namespace std;

// The menu
void menu() {

	system("Color 2"); // Sets colour for the text

	// Variables
	int StartOptions;

	//Start menu
	cout << endl;

	cout << "            1.Start the Game" << endl;
	cout << "           2.Team Information" << endl;
	cout << "                3.Exit" << endl;

	cin >> StartOptions;

	switch (StartOptions)
	{
	case 1: std::system("CLS"); Game(); break;
	case 2: {
		std::system("CLS");
		cout << "Scrum Trainer - Alexandra Staykova" << endl;
		cout << "Quality Engineer - Miroslav Ivanov" << endl;
		cout << "Code Checker - Polina Petrova" << endl;
		cout << "Developer - Alexander Klingenberg" << endl;
		cout << endl << endl << endl;

		Welcome();
		menu();
	}
	case 3: std::system("CLS"); cout << "Goodbye have a nice day!! :D" << endl; break;
	default: {
		std::system("CLS");
		cout << "---------------------------" << endl;
		cout << "Sorry Wrong Input Try Again" << endl;
		cout << "---------------------------" << endl;
		Welcome();
		menu();
	}
	}
}