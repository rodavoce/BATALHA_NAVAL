#include "BOARD.h"
#include "PLAYER.h"
#include "BOARD.h"
#include "SHIP.h"
#include <string>
#include <iostream>
#include <Windows.h>

using namespace std;

string Select_file()
{
	cout << "Qual e o ficheiro de configuracao? ";
	string File_name;
	cin >> File_name;
	return File_name;

}

void main()
{   ////////////////////CONFIG TABULEIRO ///////////////////////////////////
	Board TABU =  Board(Select_file());
	TABU.resize_board();
	TABU.place_all_the_ships();
	TABU.set_default_status_all_ships();
	///////////////////////////////////////////////////////////////////////
	Beep(330, 100); Sleep(100);
	Beep(330, 100); Sleep(300);
	Beep(330, 100); Sleep(300);
	Beep(262, 100); Sleep(100);
	Beep(330, 100); Sleep(300);
	Beep(392, 100); Sleep(700);
	Beep(196, 100); Sleep(700);
	Beep(262, 300); Sleep(300);
	Beep(196, 300); Sleep(300);
	Beep(164, 300); Sleep(300);
	Beep(220, 300); Sleep(100);
	Beep(246, 100); Sleep(300);
	Beep(233, 200);
	Beep(220, 100); Sleep(300);
	Beep(196, 100); Sleep(150);
	Beep(330, 100); Sleep(150);
	Beep(392, 100); Sleep(150);
	Beep(440, 100); Sleep(300);
	Beep(349, 100); Sleep(100);
	Beep(392, 100); Sleep(300);
	Beep(330, 100); Sleep(300);
	Beep(262, 100); Sleep(100);
	Beep(294, 100); Sleep(100);
	Beep(247, 100); Sleep(500);
	Beep(262, 300); Sleep(300);
	Beep(196, 300); Sleep(300);
	Beep(164, 300); Sleep(300);
	Beep(220, 300); Sleep(100);
	Beep(246, 100); Sleep(300);
	Beep(233, 200);
	Beep(220, 100); Sleep(300);
	Beep(196, 100); Sleep(150);
	Beep(330, 100); Sleep(150);
	Beep(392, 100); Sleep(150);
	Beep(440, 100); Sleep(300);
	Beep(349, 100); Sleep(100);
	Beep(392, 100); Sleep(300);
	Beep(330, 100); Sleep(300);
	Beep(262, 100); Sleep(100);
	Beep(294, 100); Sleep(100);
	Beep(247, 100); Sleep(900);
	Beep(392, 100); Sleep(100);
	Beep(370, 100); Sleep(100);
	Beep(349, 100); Sleep(100);
	Beep(311, 100); Sleep(300);
	Beep(330, 100); Sleep(300);
	Beep(207, 100); Sleep(100);
	Beep(220, 100); Sleep(100);
	Beep(262, 100); Sleep(300);
	Beep(220, 100); Sleep(100);
	Beep(262, 100); Sleep(100);
	Beep(294, 100); Sleep(500);
	Beep(392, 100); Sleep(100);
	Beep(370, 100); Sleep(100);
	Beep(349, 100); Sleep(100);
	Beep(311, 100); Sleep(300);
	Beep(330, 100); Sleep(300);
	Beep(523, 100); Sleep(300);
	Beep(523, 100); Sleep(100);
	Beep(523, 100); Sleep(1100);
	Beep(392, 100); Sleep(100);
	Beep(370, 100); Sleep(100);
	Beep(349, 100); Sleep(100);
	Beep(311, 100); Sleep(300);
	Beep(330, 100); Sleep(300);
	Beep(207, 100); Sleep(100);
	Beep(220, 100); Sleep(100);
	Beep(262, 100); Sleep(300);
	Beep(220, 100); Sleep(100);
	Beep(262, 100); Sleep(100);
	Beep(294, 100); Sleep(500);
	Beep(311, 300); Sleep(300);
	Beep(296, 300); Sleep(300);
	Beep(262, 300); Sleep(1300);
	Beep(262, 100); Sleep(100);
	Beep(262, 100); Sleep(300);
	Beep(262, 100); Sleep(300);
	Beep(262, 100); Sleep(100);
	Beep(294, 100); Sleep(300);
	Beep(330, 200); Sleep(50);
	Beep(262, 200); Sleep(50);
	Beep(220, 200); Sleep(50);
	Beep(196, 100); Sleep(700);
	Beep(262, 100); Sleep(100);
	Beep(262, 100); Sleep(300);
	Beep(262, 100); Sleep(300);
	Beep(262, 100); Sleep(100);
	Beep(294, 100); Sleep(100);
	Beep(330, 100); Sleep(700);
	Beep(440, 100); Sleep(300);
	Beep(392, 100); Sleep(500);
	Beep(262, 100); Sleep(100);
	Beep(262, 100); Sleep(300);
	Beep(262, 100); Sleep(300);
	Beep(262, 100); Sleep(100);
	Beep(294, 100); Sleep(300);
	Beep(330, 200); Sleep(50);
	Beep(262, 200); Sleep(50);
	Beep(220, 200); Sleep(50);
	Beep(196, 100); Sleep(700);
	/*Intro*/
	Beep(330, 100); Sleep(100);
	Beep(330, 100); Sleep(300);
	Beep(330, 100); Sleep(300);
	Beep(262, 100); Sleep(100);
	Beep(330, 100); Sleep(300);
	Beep(392, 100); Sleep(700);
	Beep(196, 100); Sleep(700);
	Beep(196, 100); Sleep(125);
	Beep(262, 100); Sleep(125);
	Beep(330, 100); Sleep(125);
	Beep(392, 100); Sleep(125);
	Beep(523, 100); Sleep(125);
	Beep(660, 100); Sleep(125);
	Beep(784, 100); Sleep(575);
	Beep(660, 100); Sleep(575);
	Beep(207, 100); Sleep(125);
	Beep(262, 100); Sleep(125);
	Beep(311, 100); Sleep(125);
	Beep(415, 100); Sleep(125);
	Beep(523, 100); Sleep(125);
	Beep(622, 100); Sleep(125);
	Beep(830, 100); Sleep(575);
	Beep(622, 100); Sleep(575);
	Beep(233, 100); Sleep(125);
	Beep(294, 100); Sleep(125);
	Beep(349, 100); Sleep(125);
	Beep(466, 100); Sleep(125);
	Beep(587, 100); Sleep(125);
	Beep(698, 100); Sleep(125);
	Beep(932, 100); Sleep(575);
	Beep(932, 100); Sleep(125);
	Beep(932, 100); Sleep(125);
	Beep(932, 100); Sleep(125);
	Beep(1046, 675);
	/////////////////////////////////////////////////////////////////////// 
	TABU.show();
	system("PAUSE");
	system("cls");
	TABU.display();
}