#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

// logo
void logo() {
	if (true)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2); // Sets colour for the text
	}
	cout << "                                       %%%.                                     " << endl;
	cout << "                                       ///.                                     " << endl;
	cout << "                                  (%%%%///#%%%%,                                " << endl;
	cout << "                           %%%%#//////////////////#%%%(                         " << endl;
	cout << "                       %%%///////,     ///.     ///////(%%%                     " << endl;
	cout << "                    %%(////*           ///.           /////#%%                  " << endl;
	cout << "                 %%#////         (%%%%#///(#%%%%.         ////%%                " << endl;
	cout << "               %%(///       /%%////////////////////%%       ////%%              " << endl;
	cout << "              %#///      #%/////.      ///.      /////#%      ////%%            " << endl;
	cout << "            #%////     %%////          *//           ////%      ///#%           " << endl;
	cout << "           %%///      %///*                            ///(#     ///#%          " << endl;
	cout << "          .%(//     ##///                      .///.    .///%     ///%%         " << endl;
	cout << "          %%///     %///               ///,     ....      ///%     ///%#        " << endl;
	cout << "          %(//     %///                *//. ///           ///#(    ///%%        " << endl;
	cout << "   %%(///////////////////////        //////*         ///////////////////////%%  " << endl;
	cout << "         *%///     %///            //  ////               *//#%    *//#%        " << endl;
	cout << "          %#//,    ##///              ,////               ///%     ///%%        " << endl;
	cout << "          %%///     %///.            //.  //             ///##     //(%         " << endl;
	cout << "           %%///     %(///          //   ,/*            ///%(     ///%%         " << endl;
	cout << "            %#///     #%////                          ////#      ///%%          " << endl;
	cout << "             #%///      %%////         ///.        ////(#      ///(%%           " << endl;
	cout << "              (%#///       %#//////.   ///.   *//////%%      ,///%%             " << endl;
	cout << "                %%#///,       .%%(//////////////#%%        ////%#.              " << endl;
	cout << "                  #%%////*             (///             /////%#                 " << endl;
	cout << "                     %%%//////         ///.        ./////(%%.                   " << endl;
	cout << "                         %%%(////////////////////////#%%%                       " << endl;
	cout << "                              %%%%%%#((////(#%%%%%%#                            " << endl;
	cout << "                                       ///.                                     " << endl;
	cout << "                                       (//.                                     " << endl;
	cout << "                                       *%%                                      " << endl;
	std::cin.get(); // press any key to continue
	system("CLS");
}