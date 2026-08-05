#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> processId = {11, 24, 7, 15, 30};
    int initiator = 2;
    int leader = processId[initiator];

    cout << "Ring Election Algorithm\n";
    cout << "-----------------------\n";
    cout << "Initiator is process with ID " << processId[initiator] << "\n\n";

    for (int i = 0; i < (int)processId.size(); i++) {
        int current = processId[(initiator + i) % processId.size()];
        cout << "Process " << current << " passes election message\n";
        if (current > leader) {
            leader = current;
        }
    }

    cout << "\nLeader elected = " << leader << "\n";
    return 0;
}
