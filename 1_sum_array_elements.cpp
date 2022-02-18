#include <iostream>
using namespace std;


int printSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
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

    cout << endl << "Sum of the elements: " << printSum(myArray, size) << endl;
        
    delete[] myArray;
    myArray = NULL;

    system("pause>0");
    return 0;
}
