//
//  main.cpp
//  q4
//
//  Created by AADARSH RAJ on 28/04/20.
//  Copyright © 2020 ADARSH RAJ. All rights reserved.
//

#include <iostream>
#include<vector>
#include<algorithm>
#include<complex>
#define int1 long long
using namespace std;
/*int1 product(vector<int1>arr1,vector<int1>arr2,int n)
{
    int1 prod=0;
    size_t x, y, i = 0, min, max;
    while(arr1[i]>0 && arr2[i]>0)
    {
        prod+=arr1[i]*arr2[i];
        i++;
    }
    x=i;
    i=n-1;
    while(arr1[i]<0 && arr2[i]<0)
    {
        prod+=arr1[i]*arr2[i];
        i--;
    }
    y=i;
    if(x!=y+1)
    {
        if(x>y)
        {
            min=y;
            max=x;
        }
        else
        {
            min=x;
            max=y;
        }
        for(int1 i=min;i<=max;i++)
        {
            prod+=arr1[i]*arr2[i];
        }
    }
    return prod;
    
    
}*/
bool compare(int1 a,int1 b)
{
    return a>b;
}

int1 res(vector<int1>a,vector<int1>b)
{
    //sort(begin(a),end(a));
    //sort(begin(a),end(a));
    sort(a.begin(),a.end(),compare);
    sort(b.begin(),b.end(),compare);

    int1 result=0;
    for (int1 i = 0; i < a.size(); i++)
    {
        result +=a[i] * b[i];
    }
    return result;

    
}

int main(int argc, const char * argv[]) {
    int1 n;
    cin>>n;
    vector<int1>arr1,arr2;
    for(int1 i=0;i<n;i++)
    {
        int1 a;
        cin>>a;
        arr1.push_back(a);
    }
    for(int1 i=0;i<n;i++)
    {
        int1 a;
        cin>>a;
        arr2.push_back(a);
    }
    //sort(arr1.begin(),arr1.end(),compare);
    //sort(arr2.begin(),arr2.end(),compare);
    int1 res1=res(arr1, arr2);
    cout<<res1<<endl;
    

    return 0;
}
