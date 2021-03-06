#ifndef _SHIP
#define _SHIP

#include <string>
#include "TYPES.h"


using namespace std;
//=============================================================================
class Ship
{
public:
	Ship(char symbol, Position<char> position, char orientation, unsigned int size,
		unsigned int color, size_t pos);
	//==========================FUNCOES ADICIONAIS ==========================

	char get_ship_symbol();
	int getColumn() const;
	int getLine() const;
	char get_ship_orientation() const;
	unsigned int get_ship_size() const;
	unsigned int get_ship_color() const;
	string get_ship_status() const;
	char get_ship_partition(size_t index) const;
	void set_default_status();
	size_t get_ship_pos() const;
	void modifyPosition(int line, int column, char ori);
	friend ostream& operator<<(ostream& os, const Ship& ship);
	//=============================================================================
	bool move(char direction, bool rotate, unsigned int lineMin, unsigned int columnMin, unsigned int lineMax, unsigned int columnMax); // moves the boat (SEE NOTES)
	// ^ � preciso pensar isto melhor^
	bool moveRand(unsigned int lineMin, unsigned int columnMin, unsigned int
		lineMax, unsigned int columnMax); // moves the ship randomly
	bool attack(size_t partNumber); //partNumber = {0,1,�, size-1}
	bool isDestroyed() const; // checks whether the ship is destroyed
	void show() const; // shows the attributes of the ship (for debugging)


private:
	size_t pos; // indice do barco
	char symbol; // 'P' = "porta-avi�es"; 'F' = "fragata"; � (portuguese names)
	Position<int> position; // coordinates of the upper left corner of the ship
	char orientation; // 'H' = horizontal; 'V' = vertical
	unsigned int size; // number os cells occupied by the ship, on the board
	unsigned int color; // color code: o=BLACK, 1=BLUE, � (see annex of 1st proj.)
	string status; // status[i]: uppercase = good; lowercase = damaged
	// ex: "FFFF" means that the "fragata" is intact;
	// ex: "FFfF" means that the 'partNumber' 2 was hit by a bomb
	// OTHER ATTRIBUTES OR METHODS, if necessary
	// ...
};
//=============================================================================
#endif