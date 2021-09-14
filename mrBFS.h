
#ifndef MRBFS
#define MRBFS
#include "generator.h"
#include "LEDA/graph/basic_graph_alg.h"
#include "LEDA/graph/node_array.h"
#include "LEDA/graph/node_list.h"
#include "LEDA/graph/shortest_path.h"
#include "LEDA/graph/node_array.h"
#include <ctime>
#include "LEDA/core/queue.h"
#include "LEDA/graph/edge_array.h"


using namespace std;
using namespace leda;




class mrBFS
{
public:
	mrBFS(){}
	void rBFS(const graph& G,node s,node t);


};










#endif