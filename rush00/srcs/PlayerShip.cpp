#include "PlayerShip.hpp"

PlayerShip::PlayerShip(void) : AGameEntity() {

	this->col = COLS/6;
	this->row = LINES/2;
	this->hp = 5;
	this->point = 0;
	this->_display = '>';
}

PlayerShip::PlayerShip(char display, int col, int row) {

	this->col = col;
	this->row = row;
	this->_display = display;

	return ;
}

PlayerShip::~PlayerShip(void) {

	return ;
}

PlayerShip::PlayerShip(const PlayerShip& cpy) {

	*this = cpy;
	return ;
}

PlayerShip& PlayerShip::operator=(const PlayerShip& cpy) {

	(void)cpy;
	return *this;
}

void 			PlayerShip::border_colision() {}

void			PlayerShip::move(int ch) {

	if (ch == KEY_LEFT) {
		this->col = this->col - 1;
		if (this->col < 2)
			this->col = 2;
		if (this->col > COLS - 3)
			this->col = COLS - 3;
	} else if (ch == KEY_RIGHT) {
		this->col = this->col + 1;
		if (this->col > COLS - 3)
			this->col = COLS - 3;
		if (this->col < 2)
			this->col = 2;
	} else if (ch == KEY_UP) {
		this->row = this->row - 1;
		if (this->row < 3)
			this->row = 3;
		if (this->row > LINES - 4)
			this->row = LINES - 4;
	} else if (ch == KEY_DOWN) {
		this->row = this->row + 1;
		if (this->row > LINES - 4)
			this->row = LINES - 4;
		if (this->row < 3)
			this->row = 3;
	}
}

AGameEntity *	PlayerShip::clone() const {

	return (new PlayerShip(*this));
}
