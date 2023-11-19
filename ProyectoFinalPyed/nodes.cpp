#include "nodes.h"

void print_options() {
	cout << endl;
	cout << "1. Campana" << endl;
	cout << "2. Casco Antiguo" << endl;
	cout << "3. Chancellor" << endl;
	cout << "4. Donatello" << endl;
	cout << "5. Jerez" << endl;
	cout << "6. Málaga" << endl;
	cout << "7. Nuevo Rodin" << endl;
	cout << "8. Periquillo" << endl;
	cout << "9. Rodin" << endl;
	cout << "10. Valencia" << endl;
	cout << "O ingresa 0 para salir" << endl;
}

string int_node_compare(int selected) {
	switch (selected)
	{
		case 1:
		return "Campana";
		break;
		case 2:
		return "Casco Antiguo";
		break;
		case 3:
		return "Chancellor";
		break;
		case 4:
		return "Donatello";
		break;
		case 5:
		return "Jerez";
		break;
		case 6:
		return "Málaga";
		break;
		case 7:
		return "Nuevo Rodin";
		break;
		case 8:
		return "Periquillo";
		break;
		case 9:
		return "Rodin";
		break;
		case 10:
		return "Valencia";
		break;
	default:
		return "Opcion no valida";
		break;
	}
}

nodes::nodes()
{
	//leer nodos del csv
}

void nodes::routes(string start, string end)
{
	cout << "Creando rutas...." << endl;
	cout << "Inicio: " << start << endl;
	cout << "Fin: " << end << endl;
	cout << "Ruta mas rapida: " << endl;
	fastRoute(start, end);
	cout << "Ruta mas larga: " << endl;
	longRoute(start, end);

}

void nodes::fastRoute(string, string)
{
	//algoritmo de dijkstra
}

void nodes::longRoute(string, string)
{
	//algoritmo de dijkstra
}
