#include <iostream>

using namespace std;

int GetCountOfDividers(int number)
{
    int count = 0;
    for (int i = 1; i < abs(number); i++)
    {
        if (abs(number) % i == 0)
        {
            count++;
        }
    }

    return count;
}
void function1(int a, int b, int k)
{
    int array[1000]{}, addArray[1000]{}, sum, addSum, temp;
    for (int i = a, j = 0; i < b; i++)
    {
        if (GetCountOfDividers(i) == k)
        {
            array[j] = i;
            j++;
        }
    }

    for (int i = 0; i < 1000; i++)
    {
        if (array[i] < 0)
        {
            addArray[i] = -array[i];
        }
        else
        {
            addArray[i] = array[i];
        }
    }

    for(int i = 0; i < 1000; i++)
    {
        addSum = 0;

        while (addArray[i] > 0)
        {
            temp = addArray[i] % 10;
            sum += temp;
            addArray[i] = addArray[i] / 10;
        }

        sum += addSum;
    }

    cout << sum;
}

int main()
{
    int a, b, k;

    cout << "Enter the a: ";
    cin >> a;
    cout << "Enter the b: ";
    cin >> b;
    cout << "Enter the k: ";
    cin >> k;

    function1(a, b, k);

    return 0;
}
