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
    int key, count = 0, temp;
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            temp = i;
            count++;
            break;
        }
    }
    if (count != 0)
    {
        cout << temp;
    }
    else
    {
        cout << "Not found";
    }
    return 0;
}