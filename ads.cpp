#include <iostream>
#include <vector>
#include <stack>
void printStack(std::stack<int>s, const std::string label)
{
    std::cout << label << "[";
    std:: vector <int> temp;
    while(!stack.empty()){
        temp.push_back(s.top());
        stack.pop();
    }//while
    for(int i = temp.size() - 1; i>=0; i--){
        std::cout << temp[i];
        if(i>0){
            std::cout << " ";
        }
    }//
    std::cout << "]" << std::endl;
}
class Graph {
    int numberVertices;
    std::vector<std::vector<int>> adj;
    std::vector<bool> visited;
    bool verbose;

    public:
    void addEdge(int u, int v){
        adj[v]. push_back (v);
        adj[u]. push_back (u);
    }
    Graph(int V, bool verboseMode=false){
        numVertices=V;
        adj.resize(V);
        visited.resize(V, false);
        verbose = verboseMode;  
    }
    void DFS(int startVertex){
        std::fill(visited.begin(), visited.end(), false);
        std::stack<int> stack;
        visited[startVertex] = true;
        stack.push(startVertex);
        if(verbose){
            printStack(stack, "очередь после добавления вершин");
        }
        std::cout<<"посещение вершин";
    }
        int step = 1;
        
        while(!stack.empty()){
            if(verbose){ ; }
            int currentVertex=stack.front();
            stack.pop();
            if(verbose) { 
            std::cout << currentVertex << " ";
            bool hasUnvisited=false;
            for(int neighbor: adj[currentVertex]){
                std::cout << neighbor;
                if(visited[neighbor])
                {
                std::cout << "посещена";
            }
            else{
                    std::cout << "Новая"
                    hasUnvisited=true;
                }
            }
            std::vector<int> neighbors;
            for(int neighbor:adj[currentVertex]){
                neighbors.push_back(neighbor);
            }
            for(int i = neighbors.size() - 1; i>=0; i--){
                int neighbor = neighbors[i];
                if(!visited[neighbor]){
                    visited[neighbor]=true;
                    stack.push(neighbor)
                    if(verbose){ : }
                }
            }//for
            step++;
        }//while
        std::cout<<std::endl;
        std::cout<<"обход завершен"<<std::endl;
    }
    void DFSRecrusive(int Vertex){
        visited[Vertex]=true;
        std::cout << Vertex << " ";
        for(int neighbor:adj(Vertex)){
            if(!visited[neighbor]){
                DFSRecrusive(neighbor)
            }
        }
    }
    void DFSRecrusiveWrapper(int startVertex);
    std::fill(visited.begin(), visited.end(), false);
    std::cout << DFSRecrusive << "";
    DFSRecrusive(startVertex);
    std::cout << std::endl;
};
int main(){
    Graph g1(6, true)
    g1.addEdge(0,1)
    g1.addEdge(2,3)
    g1.addEdge(3,4)
    g1.addEdge(0,2)
    g1.addEdge(2,5)
    g1.DFS(0);
    g1.DFSRecrusiveWrapper(0);
    std::cout << "Adsfdsf" << std::endl;
    return 0;
}