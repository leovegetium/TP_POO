#ifndef NINHO_H
#define NINHO_H
#include "Formiga.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
//vector<Formiga*> formigas;

class Ninho{
	int posX;
	int posY;
	int energia;
public:
	Ninho();

	int getPosX();
	void setPosX(int posx);
	int getPosY();
	void setPosY(int posy);
	int getEner();
	void setEner(int energy);

};


#endif