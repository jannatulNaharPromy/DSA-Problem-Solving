#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    int m;
    cin >> m;
    int brr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }
    for (int i = 0; i < m; i++)
    {
        cout << brr[i] << endl;
    }
    int C[n + m];
    for (int i = 0; i < n + m; i++)
    {
        if (i < n)
            C[i] = arr[i];
        else
            C[i] = brr[i - n];
    }
    cout << "Combined array : ";
    for (int i = 0; i < n + m; i++)
    {
        cout << C[i] << ' ';
    }
    cout << '\n';
    return 0;
}