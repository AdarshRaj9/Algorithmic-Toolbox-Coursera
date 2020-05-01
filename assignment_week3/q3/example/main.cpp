//
//  main.cpp
//  example
//
//  Created by AADARSH RAJ on 26/04/20.
//  Copyright © 2020 ADARSH RAJ. All rights reserved.
//

/*#include <iostream>
#include<vector>
using namespace std;
int no_Of_Stop(vector<int>arr,int n ,int l)
{
    int numRefils=0,currRefil=0;//lastRefil=0;
    while(currRefil<=n)
    {
        int lastRefil=currRefil;
        while(((currRefil<=n) && (arr[currRefil+1]-arr[lastRefil]<=l)))
        {
            currRefil++;
            //if(currRefil == (n))
                //break;

        }
        if(currRefil==lastRefil)
            return -1;
        if(currRefil<=n)
            numRefils++;
        
    }
    return numRefils;
}

int main(int argc, const char * argv[]) {
    int d=0,tank=0,n=0;
    //cout<<"total length\n";
    cin>>d;
    //cout<<"Enter atmost kms\n";
    cin>>tank;
    vector<int>arr;
    //cout<<"Enter the size of arr:\n";
    cin>>n;
    //cout<<"Size of arr"<<"  "<<n<<"\n";

    //cout<<"Enter the arr\n";
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }
    if(tank<d)
    {
    
    int a=no_Of_Stop(arr,n,tank);
    // insert code here...
    cout <<a <<"\n";
    }
    else
        cout<<0<<endl;
    return 0;
}*/
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int refills(int dist, int tank, vector<int> & arr, int start, int count) {
    if ((start + tank) >= dist) {
        return count;
    }
    if (arr.size() == 0) {
        return -1;
    }
    int old_start = start;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] <= (start + tank)) {
            old_start = arr[i];
        } else {
            if (i != 0) {
                arr.erase(arr.begin(), arr.begin() + i);
            }
            else {
                arr.erase(arr.begin());
            }
            return refills(dist, tank, arr, old_start, count+1);
        }
    }
    return (old_start + tank) >= dist ? count+1 : -1;
}

int min_refills(int dist, int tank, vector<int> & stops) {
    return refills(dist, tank, stops, 0, 0);
}

int main() {
    int dist = 0;
    cin >> dist;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> arr(n);
    for (size_t i = 0; i < n; ++i)
        cin >> arr.at(i);

    cout << min_refills(dist, m, arr) << "\n";

    return 0;
}
