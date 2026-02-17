#include <iostream>
using namespace std;
int main()
{
    int n, pos, val;
    cout << "Enter Size :";
    cin >> n;
    int arr[n];
    cout << "Enter Array Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Print the Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "\nEnter the posistion for insert value: ";
    cin >> pos;
    cout << "\nEnter the inserted value: ";
    cin >> val;
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;
    cout << "\nAfter inserting the updated array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}