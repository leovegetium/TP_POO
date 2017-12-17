#ifndef MUNDO_H
#define MUNDO_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;
//Fazer class mundo e declarar a class e funcoes respetivas nao esquecer public 
// Apos isso aplicar as funçoes que foram declaradas aqui no CPP

class Mundo {
	int tamX;
	int tamY;
	int focoX;
	int focoY;
	int percentagemMigalhas;
	int valorNovasMigalhas;
public:
	Mundo();
	
	int gettamX();
	void settamX(int tamx);
	int gettamY();
	void settamY(int tamy);
	int getfocoX();
	void setfocoX(int focox);
	int getfocoY();
	void setfocoY(int focoy);
	int getpercentagemMigalhas();
	void setpercentagemMigalhas(int permigalhas);
	int getvalorNovasMigalhas();
	void setvalorNovasMigalhas(int novasmigalhas);

};

#endif