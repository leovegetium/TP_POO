#include "Sistema.h"
#include "Comando.h"
#include "Consola.h"
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;
int validaComandos(vector<string> comandos);
bool isInteger(string s);

Sistema::Sistema() {

}

int Sistema::getTeste() {
	return teste;
}
void Sistema::setTeste(int teste) {
	this->teste = teste;
}

void Sistema::comecaJogo() {
	vector<string> comandos;
	Comando comando;
	int codigoComando = 0;
	int dim = 0;
	int energia = 0;
	bool ready = false;
	string cmd;
	istringstream iss(cmd);
	iss >> cmd;

	comandos = comando.pedeComando();
	codigoComando = validaComandos(comandos);

	//////
	if (codigoComando != 0) {
		cout << "O comando foi validado e o codigo comando e " << codigoComando << endl;
	}
	else {
		cout << "Comando inserido de forma errada e o codigo comando e " << codigoComando << endl;
	}
	//////
	switch (codigoComando) {

	case 1: { //defmundo
		Consola::clrscr();

	}
			break;

	case 2: { //defen

	}
			break;

	case 3: { //defpc

	}
			break;

	case 4: { //defmi

	}
			break;

	case 5: { //defme

	}
			break;

	case 6: { //defnm

	}
			break;

	case 7: { //inicio
		if (dim == 0 || energia == 0) {
			Consola::setTextColor(Consola::VERMELHO);
			Consola::gotoxy(2, 10);
			cout << "ERRO" << endl;
			Consola::setTextColor(Consola::BRANCO);
			cout << "Erro na CONFIG da Dimensao e/ou Energia: " << endl;
			if (dim == 0) { cout << "> Definir tamanho da Grelha;" << endl; }
			if (energia == 0) { cout << "> Definir energia do ninho;" << endl; }
		}
		else {
			ready = true;
		}
	}
			break;

	case 8: { //executa
		string nomeFich;
		iss >> nomeFich;
		Consola::gotoxy(2, 10);
		cout << "Nome do Ficheiro: " << nomeFich << endl;
		ifstream data(nomeFich);
		if (!data.is_open()){
			Consola::setTextColor(Consola::VERMELHO);
			Consola::gotoxy(2, 10);
			cout << "ERRO!" << endl;
			cout << "Ficheiro NAO Abriu!" << endl;
			Consola::setTextColor(Consola::BRANCO);
			break;
		}
		else {
			Consola::gotoxy(2, 10);
			cout << "Ficheiro Aberto!" << endl;
		}
		///

		///
		}
			break;

	case 9: //limpar
		Consola::clrscr();
		break;

	case 10: //sair 
		break;

	default:
		Consola::setTextColor(Consola::VERMELHO);
		Consola::gotoxy(2, 10);
		cout << "Comando Invalido!" << endl;
		Consola::setTextColor(Consola::VERDE);
		break;

	}
}


int validaComandos(vector<string> comandos) {
	int codigoComando = 0;
	if (comandos[0] == "defmundo" && comandos.size() == 2) {
		if (isInteger(comandos[1])) {
			codigoComando = 1;
		}
		else {
			codigoComando = 0;
		}
	}
	else {
		codigoComando = 3;
	}
	/*	else if (comando[0] == "OUTRO" ...) {

	}
	else if (OUTROOO) {

	}
	else {
	codigoComando = 0;
	}
	*/

	return codigoComando;
}

bool isInteger(string s)
{
	if (s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) return false;

	char * p;
	strtol(s.c_str(), &p, 10);

	return (*p == 0);
}
	