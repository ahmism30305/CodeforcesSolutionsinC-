#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int officers = 0;
    int crimes = 0;
    while (n--)
    {
        int event;
        cin >> event;
        (event == -1) ? ((officers > 0) ? officers-- : crimes++) : officers += event;
    }
    cout << crimes;
}