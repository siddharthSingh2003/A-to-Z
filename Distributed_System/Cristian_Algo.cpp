#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int clientSendTime = 10;
    int serverTimeAtReply = 25;
    int clientReceiveTime = 18;

    int roundTripTime = clientReceiveTime - clientSendTime;
    double oneWayDelay = roundTripTime / 2.0;
    double synchronizedTime = serverTimeAtReply + oneWayDelay;

    cout << "Cristian's Method for Clock Synchronization\n";
    cout << "-------------------------------------------\n";
    cout << "Client sends request at : " << clientSendTime << "\n";
    cout << "Server replies with time: " << serverTimeAtReply << "\n";
    cout << "Client receives reply at: " << clientReceiveTime << "\n\n";

    cout << "Round Trip Time = " << roundTripTime << "\n";
    cout << "One Way Delay   = " << oneWayDelay << "\n";
    // cout << fixed << setprecision(1);
    cout << "Synchronized Client Time = " << synchronizedTime << "\n";

    return 0;
}
