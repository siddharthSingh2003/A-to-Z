#include <iostream>
#include <algorithm>

using namespace std;

void printClock(int clock[], int n, string name) {
    cout << name << " = [ ";
    for (int i = 0; i < n; i++) {
        cout << clock[i] << " ";
    }
    cout << "]\n";
}

int main() {
    const int n = 3;
    int p1[n] = {0, 0, 0};
    int p2[n] = {0, 0, 0};

    cout << "Vector Clock Implementation\n";
    cout << "---------------------------\n";

    p1[0]++;
    printClock(p1, n, "P1 after internal event");

    p1[0]++;
    int message[n];
    for (int i = 0; i < n; i++) {
        message[i] = p1[i];
    }
    printClock(message, n, "Message sent by P1");

    for (int i = 0; i < n; i++) {
        p2[i] = max(p2[i], message[i]);
    }
    p2[1]++;
    printClock(p2, n, "P2 after receiving message");

    return 0;
}
