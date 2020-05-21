#include <iostream>
#include <vector>

using namespace std;
int minimum_refills(int dist, int tank, vector<int> &stops, int count = 0)
{
    // write your code here
    int rCount = 0;
    int refillPos = -2;
    int i = 0;
    int currLocation = 0;
    stops.push_back(dist);
    while (true)
    {
        if (tank + currLocation >= dist)
        {
            return rCount;
        }
        if (tank < stops[i] - currLocation)
        {
            refillPos = i - 1;
            if (currLocation == stops[refillPos])
            {
                return -1;
            }
            rCount++;
            currLocation = stops[i - 1];
            i -= 1;
            continue;
        }
        i++;
    }
    return -1;
}

int main()
{
    int d = 0,m = 0,n = 0;
    cin >> d>>m>>n;
    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops[i];
    cout<<minimum_refills(d, m, stops) << "\n";
    return 0;
}
