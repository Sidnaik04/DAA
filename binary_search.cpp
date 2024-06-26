#include <iostream>
using namespace std;
int count;

int binarySearch(int arr[], int size, int target)
{

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        count++;
        int mid = start + (end - start) / 2;
        int element = arr[mid];

        if (element == target)
        {
            return mid;
            count++;
        }
        else if (element > target)
        {
            end = mid - 1;
            count++;
        }
        else
        {
            start = mid + 1;
            count++;
        }
    }
    return -1;
    count++;
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

    int result = binarySearch(arr, size, target);

    if (result == -1)
    {
        cout << "Element not found";
        count++;
    }
    else
    {
        cout << "Element found at index: " << result << endl;
        count++;
    }

    cout << "Time complexity: " << count << endl;
    return 0;
}

// O(logn)