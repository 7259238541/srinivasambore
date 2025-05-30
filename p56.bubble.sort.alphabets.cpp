#include <iostream>
using namespace std;

void bubblesort(char arr[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        bool swapped = false; // Flag to detect if any swaps occurred

        for (int j = 0; j < length - i - 1; j++) // Optimization: skip sorted part
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap adjacent characters
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        // If no swaps occurred, the array is already sorted
        if (!swapped)
            break;
    }
}

void print(const char arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    char array[] = {'g', 'e', 'b', 'a', 'c', 'f', 'd'};
    int arraysize = sizeof(array) / sizeof(array[0]);

    cout << "Original array: ";
    print(array, arraysize);

    bubblesort(array, arraysize);

    cout << "Sorted array: ";
    print(array, arraysize);

    return 0;
}
