#include<iostream>
using namespace std;

int main()
{
    int num[] = {10, 5, 3, 7, 2, 8, 4, 1, 6, 9};
    int n = 10;

    cout << "Original Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;

    for (int i = 1; i < n; i++)
    {
        int key = num[i];
        int j = i - 1;
        
        while (j >= 0 && num[j] > key)
        {
            num[j + 1] = num[j];
            j--;
        }
        
        num[j + 1] = key;
    }

    cout << "Sorted Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;
}

