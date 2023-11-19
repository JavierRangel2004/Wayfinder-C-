#pragma once

#include <iostream>
#include <string>

using namespace std;

class nodes
{
	public:
	nodes();
	void routes(string, string);
	void fastRoute(string, string);
	void longRoute(string, string);
};

void print_options();
string int_node_compare(int);
