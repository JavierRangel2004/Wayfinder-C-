#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <clocale>
#include <queue>

using namespace std;

struct Node
{
	int id;
	string name;
	map<int, int> connections; // Key: connected node ID, Value: distance
	bool visible;
};

class MapGrafos
{
	map<int, Node> nodeMap;

public:
	MapGrafos();
	void routes(int, int);
	void fastRoute(int, int);
	void longRoute(int, int);
	Node getNode(int);
	void loadFromFile(const string &filename);
	void print_options();
	void print_nodes();
};

void clearScreen();
