#include "Formiga.h"

Formiga::Formiga() {


}

///
int Formiga::getId() {
	return id;
}
void Formiga::setId(int _id) {
	this->id = _id;
}
///
int Formiga::getPosX() {
	return posX;
}
void Formiga::setPosX(int posx) {
	this->posX = posx;
}
///
int Formiga::getEner() {
	return energia;
}
void Formiga::setEner(int energy) {
	this->energia = energy;
}
///