#include <iostream>
#include <ctime>

using namespace std;

/*
    random numbers + array + fill random numbers
*/

int main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    const int SIZE = 10;

    int arr[SIZE];

    bool hasNewNumber;
    for (int i = 0; i < SIZE;)
    {
        hasNewNumber = false;
        int nextValue = rand() % 20;

        for (int j = 0; j < i; j++)
        {
            if (arr[j] == nextValue)
            {
                hasNewNumber = true;
                break;
            }
        }

        if (!hasNewNumber)
        {
            arr[i] = nextValue;
            i++;
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Ind: " << i << " Value: " << arr[i] << endl;
    }

    return 0;
}
