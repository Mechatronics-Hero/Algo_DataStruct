#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}


int main()
{
    
    int size, start=0, end;
    
    cout << "Number of the elements of the array: ";
    cin >> size;
    end = size;

    int* myArray = new int[size];

    cout << "Insert the values:" << endl;
    for (int i = 0; i < size; i++)
        cin >> myArray[i];

    cout << endl << "Reversed array:" << endl;
    reverseArray(myArray, start, end-1);
    printArray(myArray, size);

    delete[] myArray;
    myArray = NULL;

    system("pause>0");
    return 0;
}
