#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
    int size, diag1sum=0, diag2sum=0;
    cout << "Size of the square matrix: ";
    cin >> size;

    int** table = new int* [size];
    for (int i = 0; i < size; i++)
        table[i] = new int[size];

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
        {
            cout << "Array[" << i << "][" << j << "]: ";
            cin >> table[i][j];
        }
    cout << endl;
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            cout << table[i][j] << " ";
        cout << endl;
    }
    
    for (int i = 0; i < size; i++)
    {
        diag1sum += table[i][i];
        diag2sum += table[size-1-i][i];
     }
    cout << endl;
    
    cout << "Absolute value of the difference between principal diagonal and secondary one: " << abs(diag1sum - diag2sum);

    // Deallocate in reverse order respect the allocation order
    for (int i = 0; i < size; i++)
    {
        delete[] table[i];
    }
    delete[] table;
    table = NULL;

    system("pause>0");
    return 0;
}