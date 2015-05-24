﻿#include <iostream>
#include <string>
#include "PLAYER.h"
#include "BOMB.h"
#include "BOARD.h"
#include "TYPES.h"
#include <fstream>
#include <ctime>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool checkExistence(std::string filename)
{
	ifstream f;
	f.open(filename);

	return f.is_open();
}

string Select_file()
{
	string a;

	bool invalido = false;

	do
	{
		if (invalido)
		{
			invalido = false;
			cout << "O ficheiro pretendido nao existe. Introduza novamente:" << endl;
			cin.clear();
		}
		cout << "Nome do ficheiro de configuracao (incluindo extensao): ";
		getline(cin, a);
		if (cin.eof())
			exit(1);
		if (!checkExistence(a))
			invalido = true;
	} while (cin.fail() || invalido); // realiza o ciclo enquanto o ficheiro introduzido n�o for v�lido ou n�o existir;
	return a;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Player::Player(string playerName, string boardFilename)
{
	name = playerName;
	board = Board(boardFilename);
	time = 0;
}

Player::Player(size_t i)
{
	//cout << "Qual o nome do player " << i << "? ";
	//getline(cin, name);
	//board = Board(Select_file());
	name[0] = i;
	board = Board("configBN.txt");
	time = 0;
}


char Player::askCoord()
{
	string linha = "";
	char coord;

	while (linha.length() != 1)
	{
		getline(cin, linha);
		if (cin.eof())
			cin.clear();

		if (linha.length() == 1)
			coord = linha[0];
		else
			cout << "Valores invalidos. Introduza novamente os dados: ";
	}

	return coord;
}

bool Player::isContained(char value, int max)
{
	bool contido = true;

	if ((int)value >= max || (int)value < 0)
		contido = false;

	return contido;
}

Bomb Player::getBomb()
{
	char lin, col;
	Position<char> target;

	cout << "Introduza as letras correspondentes as coordenadas do alvo: " << endl;
	cout << "Linha: ";
	lin = askCoord();
	while (!isContained(lin - 65, board.getLines()))
	{
		cout << "A linha introduzida nao esta contida no tabuleiro.\n" << "Linha: ";
		lin = askCoord();
	}
	cout << "Coluna: ";
	col = askCoord();
	while (!isContained(col - 97, board.getColumns()))
	{
		cout << "A coluna introduzida nao esta contida no tabuleiro.\n" << "Coluna: ";
		col = askCoord();
	}

	target.lin = lin;
	target.col = col;

	Bomb bomba = Bomb(target);

	return bomba;
}

void Player::attackBoard(const Bomb &b)
{
	board.moveShips();
	board.attack(b);
}

void Player::showBoard() const
{
	cout << board;
}

bool Player::Player_DEAD() const
{
	return board.allShipsDead();
}
string Player::get_player_name() const
{
	return name;
}

Board Player::get_board() const
{
	return board;
}

double Player::get_time() const
{
	return time;
}
void Player::set_time(double _time)
{
	time = _time;
}

ostream& operator<<(ostream& os, const Player& player)
{
	os << "Jogador : " << player.name << endl
		<< "Tempo : " << player.time << endl
		<< "Tabuleiro " << endl << player.board << endl;

	return os;
}