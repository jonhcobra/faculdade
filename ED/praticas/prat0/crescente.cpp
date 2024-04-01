#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    while (cin >> n1 >> n2 >> n3)
    {
        if (n1 < n2)
        {
            if (n2 < n3)
            {
                cout << n1 << ", " << n2 << ", " << n3 << endl; // 1,2,3
            }
            else
            {
                cout << n1 << ", " << n3 << ", " << n2 << endl; // 1,3,2
            }
        }
        else
        {
            if (n2 < n3)
            {
                if (n1 < n3)
                {
                    cout << n2 << ", " << n1 << ", " << n3 << endl; // 2,1,3
                }
                else
                {
                    cout << n2 << ", " << n3 << ", " << n1 << endl; // 2,3,1
                }
            }
            else
            {
                if (n1 < n2)
                {
                    cout << n3 << ", " << n1 << ", " << n2 << endl; // 3,1,2
                }
                else
                {
                    cout << n3 << ", " << n2 << ", " << n1 << endl; // 3,2,1
                }
            }
        }
    }
    return 0;
}