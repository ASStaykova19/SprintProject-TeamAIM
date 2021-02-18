﻿#pragma once
#include <iostream>
#include <string>
#include "EndLogo.h"
using namespace std;

// The main code and game itself
void Game() {

	// Variables 

	int Tries = 3; // Tries the user gets
	bool Tempbool = false; //Temporary bool
	int levelup = 1;
	int wordcounter = 0; // counts how many times you have guessed a word
	int SecretCounter = 0; // counts found secrets

	// First level
	string Guess; // The try the user has
	string FirstWordList[] = { "hope", "hell", "help", "hole", "pole"  }; //The List of word, users have to guess
	char FirstLettersGiven[6] = { 'e' , 'h' ,'l', 'p', 'o' , 'l' }; // The letters, given to ther user


	// Second level
	string secondGuess; // The try the user has
	string secondWordList[] = { "bousy", "buddy" , "DANCE" , "bonus", "noisy", "bound" , "dance",  "sound" , "bison" , "DUCK" , "duck" }; //The List of word, users have to guess
	char SecondLettersGiven[12] = { 'u' , 'y' ,'b', 'n', 's' , 'i', 'o', 'd', 'd' , 'k' , 'c' , 'e' }; // The letters, given to ther user

	// Third level
	string thirdGuess; // The try the user has
	string thirdWordList[] = { "stokes", "soviet", "stones", "stoves", "stinks" , "banana", "kitten" , "kisses" , "tokens", "tosses", "knives", "envois", "noises" , "invest" , "BANANA" }; //The List of word, users have to guess
	char thirdLettersGiven[18] = { 'v' , 'a' , 'b', 's' ,'t', 'c', 'i', 'n', 'n' , 'k', 's', 's', 'o' , 'e' , 't' , 'a' , 'a' , 'd' }; // The letters, given to ther user
	
	// All levels

	// Level one!!
	system("Color 3"); // Sets colour for the text
	cout << "You have to guess three words with these letters" << endl << endl;
	cout << "The words have four letters:" << endl << endl;
	cout << "##### ##### ##### ##### ##### #####" << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << "# " << FirstLettersGiven[i] << " # ";
	}
	cout << endl << "##### ##### ##### ##### ##### #####" << endl;
	cout << endl << endl;

	while (Tries > 0)
	{
		Tempbool = false;
		cin >> Guess;
		for (int i = 0; i < 5;)
		{
			if (FirstWordList[i] == Guess)
			{
				FirstWordList[i] = "****";
				Tempbool = true;
				break;
			}
			else
			{
				i++;
			}
		}
		if (Tempbool == true)
		{
			cout << endl << endl << "----------------------" << endl;
			cout << "Great You got a word" << endl;
			cout << "----------------------" << endl << endl << endl;
			wordcounter++;
			if (wordcounter == 3)
			{
				levelup++;
				break;
			}
		}
		else
		{
			Tries--;
			cout << "False " << Tries << " Tries left" << endl << endl << endl;
		}

	}

	std::system("CLS");

	system("Color 5"); // Sets colour for the text
	
	//Level Two!!
	if (levelup == 2)
	{
		cout << "-------------------------------------" << endl;
		cout << "Awesome you passed the first level!!!" << endl;
		cout << "-------------------------------------" << endl << endl << endl << endl;
		wordcounter = 0;
		Tries = 3;
		cout << "You have to guess three words with these letters" << endl << endl;
		cout << "The words have five letters:" << endl << endl;
		cout << "##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### #####" << endl;
		for (int i = 0; i < 12; i++)
		{
			cout << "# " << SecondLettersGiven[i] << " # ";
		}
		cout << endl << "##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### #####" << endl;

		cout << endl << endl;


		while (Tries > 0)
		{
			Tempbool = false;
			cin >> secondGuess;
			for (int i = 0; i < 11;)
			{
				if (secondWordList[i] == secondGuess)
				{
					secondWordList[i] = "*****";
					Tempbool = true;
					break;
				}
				else
				{
					i++;
				}
			}
			if (Tempbool == true)
			{
				cout << endl << endl << "----------------------" << endl;
				cout << "Great You got a word" << endl;
				cout << "----------------------" << endl << endl << endl;

				// Easter Egg
				if (secondGuess == "DUCK")
				{
					cout << "You found Hosea the Duck" << endl;
					cout << "................................................................................" << endl;
					cout << "........................................,..*#%%%%#*............................." << endl;
					cout << "......................................,@@@@@@@@@@@@@@@@,........................" << endl;
					cout << ".................................,..,&#@@@@@@@@@@@@@@@@@@@ ,,..................." << endl;
					cout << ".................................../******#@@@@@@@@@@@@@@@@&..,................." << endl;
					cout << "................................************#@@@@@@###@@@@@@@..................." << endl;
					cout << ".............................**/**************@@@@@@@@@@@@@@@/,................." << endl;
					cout << ".........................,/********************@@@@@@@@@@@@@@&.................." << endl;
					cout << ".....................,/*************************@@@@@@@@@@@@@@.................." << endl;
					cout << "....................**////***/*****/*************%@@@@@@@@@@@@ ................." << endl;
					cout << ".....................,,........,//(((((((((((((((*#@@@@@@@@@@@ ................." << endl;
					cout << "...............................*((((((((((((((**#@@@@@@@@@@@@@.................." << endl;
					cout << "..........................,.,,*((((((((((((**%@@@@@@@@@@@@@@@@.................." << endl;
					cout << "............................*/(((((((((/**/@@@@@@@@@@@@@@@@@@@.,................" << endl;
					cout << "............................/((((((//,..,..(@@@@@@@@@@@@@@@@@@.................." << endl;
					cout << "..........................,.,..,..,.......,.@@@@@@@@@@@@@@@@@@/................." << endl;
					cout << ".............................................@@@@@@@@@@@@@@@@@@................." << endl;
					cout << ".............................................%@@@@@@@@@@@@@@@@@................." << endl;
					cout << "............................................./@@@@@@@@@@@@@@@@@,................" << endl;
					cout << "............................................./@@@@@@@@@@@@@@@@@@................" << endl;
					cout << "............................................./@@@@@@@@@@@@@@@@@@@.,............." << endl;
					cout << "..........................................,.,#@@@@@@@@@@@@@@@@@@@(.............." << endl;
					cout << ".............................................&@@@@@@@@@@@@@@@@@@@@.............." << endl;
					SecretCounter++;
					cout << "You found " << SecretCounter << " secrets" << endl;
				} 

				// Easter Egg
				if (secondGuess == "DANCE")
				{
					cout << "You found Elvis the Dancing Chicken" << endl;
					cout << "                                         .&%(                                   " << endl;
					cout << "                                         &%%%#                                  " << endl;
					cout << "                                   #*   &%%%%%.                                 " << endl;
					cout << "                                   %%( &&%%%%&                                  " << endl;
					cout << "                                   &#(&&%%%&( ,######(((,                       " << endl;
					cout << "                                   %%&%%%%&*%%#%%######(((.                     " << endl;
					cout << "                                  ,%%%%%%&%%%%#%%#######(((                     " << endl;
					cout << "                                  /%&&%%%%%%%%%%%%%#######/                     " << endl;
					cout << "                                  *&&%%%%%%&.     .%######                      " << endl;
					cout << "                                  .%%%%/ /#         ####.                       " << endl;
					cout << "                                 ,(#*(#. **                                     " << endl;
					cout << "                            ...                                                 " << endl;
					cout << "                          .                                                     " << endl;
					cout << "                       .,,.....                                                 " << endl;
					cout << "                       .,,....                       .                          " << endl;
					cout << "                       ,......        .                                         " << endl;
					cout << "                     ,,,....   ..  ./*                (*                        " << endl;
					cout << "                    ,,,.......... *#     .             /.                       " << endl;
					cout << "                     /,.......  .      ...         ..*/,,((.                    " << endl;
					cout << "                     /,........  . .*,#*   */..,****#@@,    ./                  " << endl;
					cout << "        ..        .%*/(///(((###///.(@@&%.,,./..,*/,/@%*,.  ,,                  " << endl;
					cout << "           *.    *%   ,**,,..... ./,*%%%    ./    .(.    .  /                   " << endl;
					cout << "             *  ,,*.   */***,....  /,      ,/ ./**,,,*///*,                     " << endl;
					cout << "            /**/****/(.  ,**,*,,.,... .,,,,...##(*&&,*//                        " << endl;
					cout << "                  .,****/(*  .,,,,,,,,,*,,,**,,**///,                           " << endl;
					cout << "                       ./***(#&% .//*******/(.                                  " << endl;
					cout << "                           */##&%%%/ ////(#&&%&&#(*/,                           " << endl;
					cout << "                              ##(#%%&&%####%%(,,**/%&*/.                        " << endl;
					cout << "                                .###(%%%%%##*,,**/     ,*                       " << endl;
					cout << "                                   ##(///#(*,,,,*,,     ,    .                  " << endl;
					cout << "                                     #(////**,,,,,,.,.       .   ..             " << endl;
					cout << "                                      ,(//*/**,,,,,,,.(%%#.    .                " << endl;
					cout << "                                       *#/***/**,,,*@&&%%%##%,                  " << endl;
					cout << "                                        ,%#(/****%%%%&&&&%%%##%.                " << endl;
					cout << "                                          %#((&&&%&%&&&&&&%%%###%               " << endl;
					cout << "                                          /&&%%%%&&&%&&&%&&%%%###%              " << endl;
					cout << "                                       &%%#%%%%%%%%%%@%&&&&&&%%%%%%,            " << endl;
					cout << "                                       &&@%%%%%%%%&,   (&&&&%%%%%%%(            " << endl;
					cout << "                                        *#%@@&%%@.      &&@&%(    (,*           " << endl;
					cout << "                                      %#%, ,%@%                    %#/*         " << endl;
					cout << "                                     (**(%                      **/,/./*.       " << endl;
					cout << "                                    ,/..,//,,,.                   .,.. ..       " << endl;
					SecretCounter++;
					cout << "You found " << SecretCounter << " secrets Eggs" << endl;
				}

				wordcounter++;
				if (wordcounter == 3)
				{
					levelup++;
					break;
				}
			}
			else
			{
				Tries--;
				cout << "False " << Tries << " Tries left" << endl << endl << endl;
			}
		}

	}

	std::system("CLS");

	system("Color 6"); // Sets colour for the text

	//Level Three!!
	if (levelup == 3)
	{
		cout << "--------------------------------------" << endl;
		cout << "Awesome you passed the Second level!!!" << endl;
		cout << "--------------------------------------" << endl << endl << endl << endl;
		wordcounter = 0;
		Tries = 3;
		cout << "You have to guess three words with these letters" << endl << endl;
		cout << "The words have five letters:" << endl << endl;
		cout << "##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### #####" << endl;
		for (int i = 0; i < 18; i++)
		{
			cout << "# " << thirdLettersGiven[i] << " # ";
		}
		cout << endl << "##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### ##### #####" << endl;
		cout << endl << endl;


		while (Tries > 0)
		{
			Tempbool = false;
			cin >> thirdGuess;
			for (int i = 0; i < 17;)
			{
				if (thirdWordList[i] == thirdGuess)
				{
					thirdWordList[i] = "******";
					Tempbool = true;
					break;
				}
				else
				{
					i++;
				}
			}
			if (Tempbool == true)
			{
				cout << endl << endl << "----------------------" << endl;
				cout << "Great You got a word" << endl;
				cout << "----------------------" << endl << endl << endl;
				// Easter Egg
				if (thirdGuess == "BANANA")
				{
					cout << "You found Mr. Banana" << endl;
					cout << "                                  %%%#.                                         " << endl;
					cout << "                                   .,,,.                                        " << endl;
					cout << "                                   ..,,,.                                       " << endl;
					cout << "                                   ..,,,,,,.                                    " << endl;
					cout << "                                  .,,,,,,,,,,,,,,                               " << endl;
					cout << "                                ..,.,,,,,,,,,,,,,,,.                            " << endl;
					cout << "                              ..............,,,,,,,,,.                          " << endl;
					cout << "                              ................,,,,,,,,.                         " << endl;
					cout << "                             ...................,,,,,,,.                        " << endl;
					cout << "                             .....,..............,,,,,,,.                       " << endl;
					cout << "                             .....................,,,,,,,                       " << endl;
					cout << "                              .....................,,,,,,.                      " << endl;
					cout << "                              ......................,,,,,,                      " << endl;
					cout << "                  .           .....................,,,,,,,                      " << endl;
					cout << "                 .&@.         ....*%%*,........,(&&(,,,,,,.                     " << endl;
					cout << "                    ,&,       ...,& &&*.,.....,*& &&*,,,,,.                     " << endl;
					cout << "                       .&#    .....,,.,.,......,..**,,,,,,.                     " << endl;
					cout << "                           .#&...*(/,,*........*,,,*,,,,,,                      " << endl;
					cout << "                              ........,&&%%%#%%(,..,,,,,,,                      " << endl;
					cout << "                             ..........,,,*,,....,.,,,,/@*                      " << endl;
					cout << "                             .....................,,,,,,.  (&.                  " << endl;
					cout << "                            .....................,,,,,,,      *@                " << endl;
					cout << "                           .....................,,,,,,,         .&              " << endl;
					cout << "                          .....................,,,,,,,           #@&.           " << endl;
					cout << "                         .....................,,,,,,,                           " << endl;
					cout << "                        ...................,.,,,,,,.                            " << endl;
					cout << "                       ....................,,,,,,,                              " << endl;
					cout << "                     .....,......,,......,,,,,,,.                               " << endl;
					cout << "                     .............,....,,,,,,,/.                                " << endl;
					cout << "                    ...,,,,.,.,...,,,,,,,,,,. #.                                " << endl;
					cout << "                   %%%%%,..,,,,,,,*,,,,,,     &                                 " << endl;
					cout << "                   /%%%%,,,,,,,,,,,,,         &                                 " << endl;
					cout << "                                   .(         #                                 " << endl;
					cout << "                               . %@&%    . ..,&&&* .                            " << endl;
					SecretCounter++;
					cout << "You found " << SecretCounter << " secrets Eggs" << endl;
				}

				wordcounter++;
				if (wordcounter == 3)
				{
					if (SecretCounter < 3)
					{
						system("CLS");
						cout << "-----------------------------------------------" << endl;
						cout << "Awesome you passed the Third and final level!!!" << endl;
						cout << "-----------------------------------------------" << endl << endl << endl << endl;

						cout << "-----------------------------------------------" << endl;
						cout << "You found " << SecretCounter << " out of 3 Secrets" << endl;
						cout << "-----------------------------------------------" << endl << endl << endl << endl;
						win();
					}
					else
					{
						system("CLS");
						cout << "---------------------------" << endl;
						cout << "You found the secret ending" << endl;
						cout << "---------------------------" << endl << endl << endl << endl;
					}
					
				}
			}
			else
			{
				Tries--;
				cout << "False " << Tries << " Tries left" << endl << endl << endl;
			}
		}

	}
}