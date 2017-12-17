#include "Mundo.h"

Mundo::Mundo() {

}

///
int Mundo::gettamX() {
	return tamX;
}
void Mundo::settamX(int tamx) {
	this->tamX = tamx;
}
///
int Mundo::gettamY() {
	return tamY;
}
void Mundo::settamY(int tamy) {
	this->tamY = tamy;
}
///
int Mundo::getfocoX() {
	return focoX;
}
void Mundo::setfocoX(int focox) {
	this->focoX = focox;
}
///
int Mundo::getfocoY() {
	return focoY;
}
void Mundo::setfocoY(int focoy) {
	this->focoY = focoy;
}
///
int Mundo::getpercentagemMigalhas() {
	return percentagemMigalhas;
}
void Mundo::setpercentagemMigalhas(int permigalhas) {
	this->percentagemMigalhas = permigalhas;
}
///
int Mundo::getvalorNovasMigalhas() {
	return valorNovasMigalhas;
}
void Mundo::setvalorNovasMigalhas(int novasmigalhas) {
	this->valorNovasMigalhas = novasmigalhas;
}