#include "mrBFS.h"

void mrBFS::rBFS(const graph& G,node s,node t)
{
	node u,w,v,k,j;
   queue<node> S;
   queue<node> T;
   S.append(s);
   T.append(t);


	edge e;
	 node_array<bool> marked(G);
	node_array<bool> marked2(G);
	 forall_nodes(v,G){
   	marked[v] = false;
   		}
   		marked[s]=true;
   		marked[t]=true;
   	
	while ( !S.empty() && !T.empty() )
   {
	u = S.pop();
	w = T.pop();
   forall_out_edges(e,u){
    	k=G.target(e);
   	forall_out_edges(e,w)
    	j=G.target(e);
    	if( marked[k]==false){
    		marked[k]=true;
    		S.append(k);}
    	
		if( marked[j]==false){
    		marked[j]=true;
    		marked2[j]=true;
    		T.append(w);
    	}


    	
    	}
    	
	
    }


	
}