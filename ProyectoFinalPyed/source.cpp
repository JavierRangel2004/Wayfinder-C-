// ProyectoFinalPyed.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "nodes.h"

int main(void) {
	bool run = true;
	int option;
	string start , end;
	nodes app;
	while (run) {
		cout <<"------Bienvienido a UP Wayfinder------"<<endl;
		cout << "En donde te encuentras?" << endl;
		print_options();
		cin >> option;
		if (option == 0) {
			run = false;
			break;
		}
		else if (option > 10 || option < 0) {
			cout << "Opcion no valida" << endl;
			continue;
		}
		start = int_node_compare(option);
		cout << "A donde quieres ir?" << endl;
		print_options();
		cin >> option;
		if (option == 0) {
			run = false;
			break;
		}
		else if (option > 10 || option < 0) {
			cout << "Opcion no valida" << endl;
			continue;
		}
		end = int_node_compare(option);
		app.routes(start, end);
	}
}
