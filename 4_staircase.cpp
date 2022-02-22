#include <iostream>
#include <iomanip>
using namespace std;

void staircase(int n)
{
    for (int i = 1; i <= n; i++)
        cout << setw(n) << right << string(i, '#') << endl;
}


int main()
{
    int n;
 
    cout << "How many steps in this stair? ";
    cin >> n;

    staircase(n);

    system("pause>0");
    return 0;
}
