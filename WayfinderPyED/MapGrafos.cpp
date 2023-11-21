#include "MapGrafos.h"

void MapGrafos::print_options()
{
    cout << endl;
    // print name of Node struct for each node in the map
    cout << "Inician las opciones: " << endl;
    for (auto &pair : nodeMap)
    {
        cout << pair.second.id << ". " << pair.second.name << endl;
    }
    cout << "O ingresa 0 para salir" << endl;

}

void MapGrafos::print_nodes()
{
    cout << endl;
    // print name of Node, id, connections and distances struct for each node in the map
    cout << "Inician las opciones: " << endl;
    for (auto &pair : nodeMap)
    {
        cout << pair.second.id << ". " << pair.second.name << endl;
        cout << "Conexiones: " << endl;
        for (auto &pair2 : pair.second.connections)
        {
            Node selected_node = getNode(pair2.first);
            cout << "\tID: " << selected_node.id << endl;
            cout << "\tNombre: " << selected_node.name << endl;
            cout << "\tSe enceuntra a: " << pair2.second <<"m "<< endl;
            cout<<endl;
        }
    }
    cout << "O ingresa 0 para salir" << endl;
}

MapGrafos::MapGrafos()
{
    // leer nodos del csv
    loadFromFile("nodes_data.csv");
}

void MapGrafos::routes(int start_id, int end_id)
{
    Node start_node, end_node;
    start_node = getNode(start_id);
    end_node = getNode(end_id);
    cout << "Creando rutas...." << endl;
    cout << "Inicio: " << start_node.name << endl;
    cout << "Fin: " << end_node.name << endl;
    cout << "Ruta mas rapida: " << endl;
    fastRoute(start_id, end_id);
    cout << "Ruta mas larga: " << endl;
    longRoute(start_id, end_id);
}

void MapGrafos::fastRoute(int start_id, int end_id)
{
    // algoritmo de dijkstra
}

void MapGrafos::longRoute(int start_id, int end_id)
{
    // algoritmo
}

void MapGrafos::loadFromFile(const string &filename)
{
    ifstream file(filename);
    string line;

    // Skip the header line if it exists
    getline(file, line);

    while (getline(file, line))
    {
        stringstream ss(line);
        Node node;
        string idStr, visibleStr, connections, distances;

        // Read data from the line
        getline(ss, idStr, ',');
        getline(ss, node.name, ',');
        getline(ss, connections, ',');
        getline(ss, distances, ',');
        getline(ss, visibleStr);

        node.id = stoi(idStr);
        node.visible = (visibleStr == "True" ? true : false);

        // Process connections and distances
        stringstream connSS(connections);
        stringstream distSS(distances);
        int connID, distance;
        while (connSS >> connID)
        {
            if (distSS >> distance)
            {
                node.connections[connID] = distance;
            }
            // Skip the space after each connection ID
            if (connSS.peek() == ' ')
            {
                connSS.ignore();
            }
        }

        // Add node to the map
        nodeMap[node.id] = node;
    }
}

Node MapGrafos::getNode(int id)
{
    return nodeMap[id];
}

void clearScreen()
{
    // Clear the screen
    system("pause");
    system("cls");
}