#ifndef GENERATOR
#define GENERATOR


#include "LEDA/graph/graph.h"
#include "LEDA/graph/graph_gen.h"
#include "LEDA/graph/edge_array.h"
#include "LEDA/graph/node_array.h"
#include <iostream>
#include <fstream>
						

using namespace std;
using namespace leda;


class mgraphgen
{
public:
	mgraphgen(){}


	void mGrid(graph& G,int m);
	
	void mRandom(graph& G,int n,int m);
};

#endif