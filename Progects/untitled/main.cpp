#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int i{ 0 }, r{ 0 }, j{ 0 };
    int mass[10][10] = {0};
    for (int n = 0; n !=10; n++)
    {
        mass[n][n] = rand();


    }
    for (j = 0 ; j < 6; j++)
    {
        for (i = 0; i < 6; i++)
        {

            cout << mass[i][j];
        }
    }
    return 0;
}
