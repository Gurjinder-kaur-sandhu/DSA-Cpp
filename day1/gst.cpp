#include <iostream>
using namespace std;

int main()
{
    float pencost, erasercost, pencilcost;
    cin >> pencost >> erasercost >> pencilcost;

    float totalcost = pencost + erasercost + pencilcost;

    cout << "Total cost = " << totalcost << endl;
    cout << "Total with GST = " << (totalcost + (0.18 * totalcost)) << endl;

    return 0;
}
