#include "EnemyBullet.hpp"

EnemyBullet::EnemyBullet() {
}

EnemyBullet::EnemyBullet(int row, int col) : AGameEntity(row, col + 1) {

	this->hp = 1;
	this->point = 0;
	this->_display = '-';
}

EnemyBullet::~EnemyBullet(void) {

	return ;
}

EnemyBullet::EnemyBullet(const EnemyBullet &cpy) {

	*this = cpy;
	return ;
}

EnemyBullet& EnemyBullet::operator=(const EnemyBullet &cpy) {

	(void)cpy;
	return *this;
}

AGameEntity *	EnemyBullet::clone() const {
	return (new EnemyBullet(*this));
}

void 			EnemyBullet::border_colision() {

	if (this->col < 2 || this->col > COLS - 3 || this->row < 3 || this->row > LINES - 4) {
		this->hp = 0;
	}
}

void			EnemyBullet::move(int frame) {

	(void)frame;
	this->col--;
}

void			EnemyBullet::spawn(int frames) {
	(void)frames;
}
