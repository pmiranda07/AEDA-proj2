#include <iostream>

#include "uteis.h"

using namespace std;

void menu_inicial()
{
	int opcao = 1, tecla;

	do
	{
		switch (opcao)
		{
		case 1:
			system("cls");
			cabecalho();
			cout << endl << endl;

			cout << "\t=> Escolher piscina" << endl;
			cout << "\tSobre" << endl;
			cout << "\tSair" << endl;
			tecla = opcao_valida(opcao, 1, 3);
			break;

		case 2:
			system("cls");
			cabecalho();
			cout << endl << endl;

			cout << "\tEscolher piscina" << endl;
			cout << "\t=> Sobre" << endl;
			cout << "\tSair" << endl;
			tecla = opcao_valida(opcao, 1, 3);
			break;

		case 3:
			system("cls");
			cabecalho();
			cout << endl << endl;

			cout << "\tEscolher piscina" << endl;
			cout << "\tSobre" << endl;
			cout << "\t=>Sair" << endl;
			tecla = opcao_valida(opcao, 1, 3);
			break;



		}
	
	} while ((opcao != 3) || (tecla != 13));
}

int main()
{
	menu_inicial();

	return 0;
}
