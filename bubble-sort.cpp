/*
This is an example of Bubble Sort.
It contains both ascending and descending order.
*/

#include <iostream>

int main()
{

    int arr[] = {10, 7, 1, 6, 14, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        int swapped = 1;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swapped = 0;
                std ::swap(arr[j + 1], arr[j]);
            }
        }
        if (swapped == 1)
            break;
    }

    for (int i = 0; i < size; i++)
        std ::cout << arr[i] << " ";

    std ::cout << "\n";

    for (int i = 1; i < size; i++)
    {
        int swapped = 1;
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j + 1] > arr[j])
            {
                swapped = 0;
                std ::swap(arr[j + 1], arr[j]);
            }
        }
        if (swapped == 1)
            break;
    }

    for (int i = 0; i < size; i++)
        std ::cout << arr[i] << " ";
}