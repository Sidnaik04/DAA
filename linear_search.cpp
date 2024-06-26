#include <iostream>
using namespace std;
int count;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        count++;
        if (arr[i] == target)
        {
            return i;
            count++;
        }
    }
    count++;
    return -1;
}

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        count++;
        cin >> arr[i];
    }

    int target;
    cout << "Enter the element to be found: ";
    cin >> target;

    int result = linearSearch(arr, size, target);

    if (result == -1)
    {
        count++;
        cout << "Element not found";
    }
    else
    {
        count++;
        cout << "Element found at index: " << result << endl;
    }

    cout << "Time complexity: " << count << endl;

    return 0;
}

//Best: O(1)

//average and worst: 0(n)

