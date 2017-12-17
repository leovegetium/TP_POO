#include "Ninho.h"

Ninho::Ninho() {

}

///
int Ninho::getPosX() {
	return posX;
}
void Ninho::setPosX(int posx) {
	this->posX = posx;
}
///
int Ninho::getPosY() {
	return posY;
}
void Ninho::setPosY(int posy) {
	this->posY = posy;
}
///
int Ninho::getEner() {
	return energia;
}
void Ninho::setEner(int energy) {
	this->energia = energy;
}