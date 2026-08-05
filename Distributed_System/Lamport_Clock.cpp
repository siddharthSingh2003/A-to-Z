#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int p1 = 0, p2 = 0;

    cout << "Lamport Clock Implementation\n";
    cout << "----------------------------\n";

    p1++;
    cout << "P1 internal event, clock = " << p1 << "\n";

    p1++;
    int messageTime = p1;
    cout << "P1 sends message with timestamp " << messageTime << "\n";

    p2 = max(p2, messageTime) + 1;
    cout << "P2 receives message, clock = " << p2 << "\n";

    p2++;
    cout << "P2 internal event, clock = " << p2 << "\n";

    return 0;
}
