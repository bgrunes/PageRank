#include <iostream>
#include <map>
#include <vector>
#include <iterator>
using namespace std;

//TODO: Read PDF
//TODO: 
class Graph
{
    map<string, vector<pair<string, float>>> adjList;

public: 
    void insertEdge(string from, string to);                            
    void Graph::PageRank(int n);                                        // Prints PageRank
    int Rank(string from);

    
};

void Graph::insertEdge(string from, string to)
{ adjList[from].push_back(make_pair(to, Rank(from))); }

// Print the PageRank of all pages after p poweriterations in ascending alphabetical order of webpage. 
//Also, round off the rank of the page to two decimal places
void Graph::PageRank(int n)
{

}

// Equation to calculate rank: r = M*r; r - ranking of page, M - matrix with values
// M_ij = 1/d_j; if there is an edge from Vj to Vi; otherwise 0
int Graph::Rank(string from)
{
    int result = 0;

    for (auto i = adjList.begin(); i != adjList.end(); i++)
    {
        for (int j = 0; j < i; i++)
        {

        }
        if (i. == )
    }

    return result;
}

int main()
{
    int no_of_lines, power_iterations;
    string from, to;
    Graph graph;

    cin >> no_of_lines;
    cin >> power_iterations;

    for (int i = 0; i < no_of_lines; i++)
    {
        cin >> from;
        cin >> to;

        graph.insertEdge(from, to);
    }

    graph.PageRank(power_iterations);
    return 0;
}