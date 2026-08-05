#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> quorumP1 = {1, 2, 3};
    vector<int> quorumP2 = {2, 3, 4};
    bool voted[5] = {false, false, false, false, false};

    cout << "Maekawa's Voting Algorithm\n";
    cout << "--------------------------\n";

    cout << "Process 1 requests votes from quorum {1, 2, 3}\n";
    for (int node : quorumP1) {
        if (!voted[node]) {
            voted[node] = true;
            cout << "Node " << node << " votes for Process 1\n";
        }
    }

    cout << "\nProcess 2 requests votes from quorum {2, 3, 4}\n";
    for (int node : quorumP2) {
        if (!voted[node]) {
            voted[node] = true;
            cout << "Node " << node << " votes for Process 2\n";
        } else {
            cout << "Node " << node << " already voted, so Process 2 must wait\n";
        }
    }

    return 0;
}
