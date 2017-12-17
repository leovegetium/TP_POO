#ifndef FORMIGA_H
#define FORMIGA_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Formiga {
	int id;
	int posX;
	int posY;
	int energia;
public:
	Formiga();
	int getId();
	void setId(int _id);
	int getPosX();
	void setPosX(int posx);
	int getEner();
	void setEner(int energy);
};


#endif