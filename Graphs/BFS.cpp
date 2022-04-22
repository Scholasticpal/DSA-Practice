//Function for BFS in a graph
// Q.  Given an undirected graph and a source vertex 's' ,print B.F.S. from given source.

void BFS(vector<int> adj[], int v, int s)
{
  bool visited[v+1];
  for (int i=0; i<v; i++)
    visited[i] = false;
  
  queue<int> q;
  visited[s] = true;
  q.push(s);
  
  while(q.empty() == false){
    int u = q.front();
    q.pop();
    cout<< u << " ";
    for(int v:adj[u])
    {
      if(visited[v] == false){
        visited[v] = true;
        q.push(v);
      }
    }
  }
}
