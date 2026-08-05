#include <iostream>

using namespace std;

int main() {
    int n = 5;
    int clocks[] = {10, 14, 18, 20, 16};
    int sum = 0;

    cout << "Berkeley Algorithm for Clock Synchronization\n";
    cout << "--------------------------------------------\n";
    cout << "Initial clock values:\n";
    for (int i = 0; i < n; i++) {
        cout << "Process " << i + 1 << " = " << clocks[i] << "\n";
        sum += clocks[i];
    }

    int average = sum / n;
    cout << "\nAverage time = " << average << "\n";

    cout << "\nAdjustment for each process:\n";
    for (int i = 0; i < n; i++) {
        int adjustment = average - clocks[i];
        cout << "Process " << i + 1 << " adjust by " << adjustment << "\n";
        clocks[i] += adjustment;
    }

    cout << "\nFinal synchronized clocks:\n";
    for (int i = 0; i < n; i++) {
        cout << "Process " << i + 1 << " = " << clocks[i] << "\n";
    }

    return 0;
}
