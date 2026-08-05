#include <iostream>
using namespace std;

int main() {
    int n = 3;

    cout << "Chandy-Lamport Snapshot Algorithm\n";
    cout << "---------------------------------\n";

    // Step 1: Initial state
    cout << "\nInitial Process States:\n";
    for (int i = 0; i < n; i++) {
        cout << "Process " << i + 1 << " state recorded\n";
    }

    // Step 2: Marker sending
    cout << "\nInitiator sends MARKER to all processes\n";

    // Step 3: Processes receive marker
    cout << "\nProcesses receiving marker:\n";
    for (int i = 0; i < n; i++) {
        cout << "Process " << i + 1 << " received marker\n";
        cout << "Process " << i + 1 << " records its state\n";
    }

    // Step 4: Channel recording
    cout << "\nRecording channel states...\n";
    cout << "Messages in transit are recorded\n";

    // Step 5: Snapshot complete
    cout << "\nGlobal Snapshot Completed Successfully!\n";

    return 0;
}