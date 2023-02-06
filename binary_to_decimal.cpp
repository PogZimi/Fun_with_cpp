#include <iostream>
#include <stdlib.h>
using namespace std;

/*
I didnt use vector-array ( #include<vector> )
So the code is a bit messy 

*/

int exponents(int x, int power)
{

    if (power == 0)
    {
        return 1;
    }
    int y = x;
    for (int i = 0; i < (power - 1); i++)
    {
        y = y * x;
    }

    return y;
}

void k_decimal()
{

    string input;
    cout << "Enter the number [ Binary ] *nospaces : " << endl;
    cin >> input;

    int value = 0, power = 0;
    int k = input.size() - 1;

    char *tab = (char *)calloc(input.size(), sizeof(char));
    int *xyz = (int *)calloc(input.size(), sizeof(int));

    for (int i = 0; i < input.size(); i++)
    {
        tab[i] = input[i];
    }

    for (int i = 0; i < input.size(); i++)
    {
        if (tab[i] == '1')
        {
            xyz[i] = 1;
        }
        else if (tab[i] == '0')
        {
            xyz[i] = 0;
        }
        else
        {
            cout << "Incorrect input format" << endl;
            cout << "Only Binary Digits " << endl;
            exit(0);
        }
    }

    for (int i = 0; i < input.size(); i++)
    {

        power = exponents(2, k);
        value = value + ((xyz[i]) * power);
        k--;
    }

    cout << value << endl;
}

int main()
{

    k_decimal();

    return 0;
}
