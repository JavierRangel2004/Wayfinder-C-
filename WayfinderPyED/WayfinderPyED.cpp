// WayfinderPyED.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "MapGrafos.h"

int main(void)
{
	setlocale(LC_ALL, "spanish");
	bool run = true;
	int start, end;
	MapGrafos app;
	while (run)
	{
		cout << "------Bienvienido a UP Wayfinder------" << endl;
		cout << "¿En donde te encuentras?" << endl;
		app.print_options();
		cout << "Ingresa el ID de INICIO: ";
		cin >> start;
		clearScreen();
		if (start == 0)
		{
			run = false;
			break;
		}
		else if (start > 44 || start < 0)
		{
			cout << "Opcion no valida" << endl;
			clearScreen();
			continue;
		}
		else if (start == 44)
		{
			app.print_nodes();
			clearScreen();
			continue;
		}
		cout << "A donde quieres ir?" << endl;
		app.print_options();
		cout << "Ingresa el ID de FINAL: ";
		cin >> end;
		clearScreen();
		if (end == 0)
		{
			run = false;
			break;
		}
		else if (end > 44 || end < 0)
		{
			cout << "Opcion no valida" << endl;
			clearScreen();
			continue;
		}
		else if (end == start)
		{
			cout << "No puedes ir al mismo lugar" << endl;
			clearScreen();
			continue;
		}
		else if (start == 44 || end == 44)
		{
			app.print_nodes();
			clearScreen();
			continue;
		}
		app.routes(start, end);
		clearScreen();
	}
}