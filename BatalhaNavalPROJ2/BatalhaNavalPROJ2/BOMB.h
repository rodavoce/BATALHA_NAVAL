//=============================================================================
#ifndef _BOMB
#define _BOMB
#include "TYPES.h"

class Bomb
{
public:
	Bomb(PositionChar targetPosition);
	PositionChar getTargetPosition() const;
	// OTHER METHODS, if necessary
	// ...
	void show() const; // shows the attributes of the bomb (for debugging)
private:
	char targetLine, targetColumn;
};
//=============================================================================
#endif // !_BOMB

