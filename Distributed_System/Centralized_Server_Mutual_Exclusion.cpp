#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> requestQueue;
    bool resourceBusy = false;

    requestQueue.push(1);
    requestQueue.push(2);
    requestQueue.push(3);

    cout << "Centralized Server Algorithm (Mutual Exclusion)\n";
    cout << "-----------------------------------------------\n";

    while (!requestQueue.empty()) {
        int process = requestQueue.front();
        requestQueue.pop();

        if (!resourceBusy) {
            resourceBusy = true;
            cout << "Server grants critical section to Process " << process << "\n";
            cout << "Process " << process << " is using critical section\n";
            cout << "Process " << process << " releases critical section\n\n";
            resourceBusy = false;
        }
    }

    return 0;
}
