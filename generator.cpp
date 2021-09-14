#include "generator.h"



void mgraphgen::mGrid(graph& G,int m){
	

	grid_graph(G,100);
	for (int j = 1; j < m; ++j)
	{
	
	graph g1;
	grid_graph(g1,100);

node u =G.last_node();

node v = g1.first_node();

G.join(g1);

for (int i = 0; i < 100; ++i)
{
	G.new_edge(u,v);
	u = G.pred_node(u);
	v = G.succ_node(v);
}
}
 G.make_bidirected();
};


void mgraphgen::mRandom(graph& G,int n,int m){
	
	random_graph(G, n, m, false, true, true);
};