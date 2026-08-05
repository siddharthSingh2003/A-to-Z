#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> processId = {1, 2, 3, 4, 5};
    int initiator = 2;
    int coordinator = processId.back();

    cout << "Bully Algorithm\n";
    cout << "---------------\n";
    cout << "Process " << processId[initiator] << " starts election\n\n";

    for (int i = initiator + 1; i < (int)processId.size(); i++) {
        cout << "Election message sent from Process " << processId[initiator]
             << " to Process " << processId[i] << "\n";
    }

    cout << "\nHighest active process becomes coordinator: Process "
         << coordinator << "\n";
    return 0;
}
