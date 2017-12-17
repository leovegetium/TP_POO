#include "Comando.h"
#include "Consola.h"

vector<string> separaComando(string comando);

vector<string> Comando::pedeComando() {
	string comando;
	vector<string> listaComandosSeparados;
	int codigoComando;

	Consola::gotoxy(2,2);
	Consola::setTextColor(2);
	cout << "Comando: ";
	getline(std::cin, comando);

	listaComandosSeparados = separaComando(comando);
	
	return listaComandosSeparados;

}


vector<string> separaComando(string comando) {
	vector<string> listaArgumentosComandos;
	string aux = "";

	for (int i = 0; i < comando.length(); i++) {
		if (comando[i] == ' ') {
			listaArgumentosComandos.push_back(aux);
			aux = "";
		}
		else {
			aux += comando[i];
		}
	}
	listaArgumentosComandos.push_back(aux);

	return listaArgumentosComandos;

}
