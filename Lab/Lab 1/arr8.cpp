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
    int countODD = 0, countEVEN = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            countODD++;
        }
        else
        {
            countEVEN++;
        }
    }
    cout << "\nThe total number of odd is:" << countODD;
    cout << "\nThe total number of even is:" << countEVEN;
}