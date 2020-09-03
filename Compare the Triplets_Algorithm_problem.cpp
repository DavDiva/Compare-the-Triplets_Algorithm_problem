#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) 
{
    int countalice = 0;
    int countbob = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > b[i])
        {
            countalice++;
        }
        else if (a[i] < b[i])
        {
            countbob++;
        }

    }
    return vector<int>{countalice, countbob};
}


int main()
{
    vector<int> a{ 1,2,3 };
    vector<int> b{ 3,2,1 };


     for (auto& elem : compareTriplets(a,b))
     {
         cout << elem << " ";
     }
     return 0;
}


