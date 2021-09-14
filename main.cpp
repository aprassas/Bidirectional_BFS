
#include <fstream>
#include "generator.h"
#include "LEDA/graph/basic_graph_alg.h"
#include "LEDA/graph/node_array.h"
#include "LEDA/graph/node_list.h"
#include "LEDA/graph/shortest_path.h"
#include "LEDA/graph/node_array.h"
#include <ctime>
#include "LEDA/core/queue.h"
#include "LEDA/graph/edge_array.h"
#include "mrBFS.h"


int main()
{
	
	graph G1;
	mrBFS biBFS;
	mgraphgen mGrid1;
	int l=10;
	int k = 1000;
	node s ,t;
	for (int i = 0; i < 2 ; ++i) //για το grid 100*100000 δεν τρέχει λογο μνημης, για να δημιουργηθει αυτο το grid το i πρεπει να γινει i < 3 
{	
		mGrid1.mGrid(G1,l);
	node s=G1.first_node();
	node t =G1.last_node();
	
	node_array<int> dist1(G1,-1);

	clock_t clock_start, clock_stop;
	clock_start = std::clock();

	BFS(G1,G1.first_node() ,dist1);

	clock_stop = std::clock();
	double elapsedTime = (clock_stop - clock_start)*10000.0/(double)CLOCKS_PER_SEC;
	cout << "o xronos gia ton leda bfs sto grid 100*" << k <<" einai: "  << elapsedTime << "ms" << endl;

	clock_t clock_start2, clock_stop2;
	clock_start = std::clock();

	biBFS.rBFS(G1,s,t);

	clock_stop = std::clock();
	double elapsedTime2 = (clock_stop - clock_start)*10000.0/(double)CLOCKS_PER_SEC;
	cout << "o xronos gia ton rbfs sto grid 100*" << k <<" einai: "  << elapsedTime2 << "ms" << endl;


	k=k*10;
	l=l*10;


}
  	int n=1000;
	int m;
	int v;
	m=4*n;
	v=n*log(n);
  	
	cout << endl;
for (int i = 0; i < 3; ++i)
{
	

	graph GR;
	mgraphgen RG;
	RG.mRandom(GR,n,m);
  	node s;
  	s=GR.first_node();
  	t=GR.last_node();
	
	node_array<int> dist1(GR,-1);

	
	clock_t clock_start, clock_stop;
	clock_start = std::clock();

	BFS(GR,s ,dist1);

	clock_stop = std::clock();
	double elapsedTime = (clock_stop - clock_start)*10000.0/(double)CLOCKS_PER_SEC;
	cout << "o xronos gia ton leda bfs sto mRandom gia nodes " <<"n= " <<n << " kai " <<"edges 4n " << m <<" einai: "  << elapsedTime << "ms" << endl;
	


	
	clock_t clock_start2, clock_stop2;
	clock_start = std::clock();

	biBFS.rBFS(GR,s,t);

	clock_stop = std::clock();
	double elapsedTime2 = (clock_stop - clock_start)*10000.0/(double)CLOCKS_PER_SEC;
	cout << "o xronos gia ton rBFS sto mRandom gia nodes " <<"n= " <<n << " kai " <<"edges 4n " << m <<" einai: "  << elapsedTime << "ms" << endl;

	n=n*10;
	m=4*n;
}




cout << endl;










	n=1000;
	for (int i = 0; i < 3; ++i)
{





	graph GR;
	mgraphgen RG;
	RG.mRandom(GR,n,v);
  	node s;
  	s=GR.first_node();
	t=GR.last_node();
	node_array<int> dist1(GR,-1);

	
	clock_t clock_start, clock_stop;
	clock_start = std::clock();

	BFS(GR,s ,dist1);

	clock_stop = std::clock();
	double elapsedTime = (clock_stop - clock_start)*10000.0/(double)CLOCKS_PER_SEC;
	cout << "o xronos gia ton leda bfs sto mRandom gia nodes " <<"n= " <<n << " kai " <<"edges nlogn " << v <<" einai: "  << elapsedTime << "ms" << endl;
	


	clock_t clock_start2, clock_stop2;
	clock_start = std::clock();

	biBFS.rBFS(GR,s,t);

	clock_stop = std::clock();
	double elapsedTime2 = (clock_stop - clock_start)*10000.0/(double)CLOCKS_PER_SEC;
	cout << "o xronos gia ton rBFS sto mRandom gia nodes " <<"n= " <<n << " kai " <<"edges nlogn " << v <<" einai: "  << elapsedTime2 << "ms" << endl;

n=n*10;
	v=n*log(n);

}








/*ofstream mFile;
mFile.open("mGraph.txt");
	mFile << "digraph G{" << endl;

	forall_edges(d,G){

		mFile << G.source(d)->id() << "->" << G.target(d)->id() << ";" << endl;
	}


	mFile << "}" << endl;

mFile.close();*/




return 0;

}

