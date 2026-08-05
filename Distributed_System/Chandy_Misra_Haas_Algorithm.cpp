#include <iostream>
#include <vector>

using namespace std;

bool dfs(int node, vector<vector<int>> &graph, vector<int> &visited, vector<int> &stack) {
    visited[node] = 1;
    stack[node] = 1;

    for (int next : graph[node]) {
        if (!visited[next] && dfs(next, graph, visited, stack)) {
            return true;
        }
        if (stack[next]) {
            return true;
        }
    }

    stack[node] = 0;
    return false;
}

int main() {
    int n = 4;
    vector<vector<int>> graph(n);

    graph[0].push_back(1);
    graph[1].push_back(2);
    graph[2].push_back(3);
    graph[3].push_back(1);

    vector<int> visited(n, 0), stack(n, 0);
    bool deadlock = false;

    for (int i = 0; i < n; i++) {
        if (!visited[i] && dfs(i, graph, visited, stack)) {
            deadlock = true;
            break;
        }
    }

    cout << "Chandy-Misra-Haas Algorithm\n";
    cout << "---------------------------\n";
    cout << "Wait-for graph:\n";
    cout << "P1 -> P2\nP2 -> P3\nP3 -> P4\nP4 -> P2\n\n";

    if (deadlock) {
        cout << "Deadlock detected.\n";
    } else {
        cout << "No deadlock detected.\n";
    }

    return 0;
}
