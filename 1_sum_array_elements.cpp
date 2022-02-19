#include <iostream>
using namespace std;


void printSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    cout << endl << "Sum of the elements: " << sum << endl;
}


int main()
{

    int size, start = 0, end;

    cout << "Number of the elements of the array: ";
    cin >> size;
    end = size;

    int* myArray = new int[size];

    cout << "Insert the values:" << endl;
    for (int i = 0; i < size; i++)
        cin >> myArray[i];

    printSum(myArray, size);

    delete[] myArray;
    myArray = NULL;

    system("pause>0");
    return 0;
}