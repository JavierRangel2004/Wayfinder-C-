#include "MapGrafos.h"

void MapGrafos::print_options()
{
    cout << endl;
    // print name of Node struct for each node in the map
    for (auto &pair : nodeMap)
    {
        if (pair.second.visible) {
            cout << pair.first << ". " << pair.second.name << endl;
        }
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

void MapGrafos::fastRoute(int start_id, int end_id) {
    // Check if start_id and end_id are within the bounds of nodeMap
    if (start_id < 0 || end_id < 0 || start_id >= nodeMap.size() || end_id >= nodeMap.size()) {
        cout << "Invalid start or end node ID";
        return;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(nodeMap.size(), INT_MAX);
    vector<int> pred(nodeMap.size(), -1);  // Array to store the path

    pq.push(make_pair(0, start_id));
    dist[start_id] = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        // Check bounds for u
        if (u < 0 || u >= nodeMap.size()) {
            continue;
        }

        for (auto i = nodeMap[u].connections.begin(); i != nodeMap[u].connections.end(); ++i) {
            int v = i->first;
            int weight = i->second;

            // Check bounds for v
            if (v < 0 || v >= nodeMap.size()) {
                continue;
            }

            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
                pred[v] = u;  // Record the predecessor of v
            }
        }
    }

    // Reconstruct the path
    vector<int> path;
    int crawl = end_id;
    while (crawl != -1) {
        path.push_back(crawl);
        crawl = pred[crawl];

        // Check for valid predecessor
        if (crawl >= 0 && crawl >= nodeMap.size()) {
            cout << "Error in path reconstruction";
            return;
        }
    }

    // Reverse the path vector
    reverse(path.begin(), path.end());

    // Print the path
    for (size_t i = 0; i < path.size(); i++) {
        if (i != 0) {
            cout << " --> \t";
        }
        cout << nodeMap[path[i]].name;
    }
    cout << endl;
}


void MapGrafos::longRoute(int start_id, int end_id) {
    // This is a simplified implementation to find a longer path
    // It does not guarantee the longest path in all cases

    vector<bool> visited(nodeMap.size(), false);
    vector<int> path;
    int current = start_id;

    while (current != end_id) {
        visited[current] = true;
        path.push_back(current);

        // Find a non-visited, non-shortest path neighbor
        int next = -1;
        for (auto& neighbor : nodeMap[current].connections) {
            if (!visited[neighbor.first] && neighbor.first != end_id) {
                next = neighbor.first;
                break;
            }
        }

        if (next == -1) {
            // No non-visited neighbors, go to end node
            break;
        }
        else {
            current = next;
        }
    }

    path.push_back(end_id);

    // Print the path
    for (int node : path) {
        if (node != start_id) {
            cout << " --> \t";
        }
        cout << nodeMap[node].name;
    }
    cout << endl;
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
        node.visible = (visibleStr.compare("TRUE") == 0 ? true : false);

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