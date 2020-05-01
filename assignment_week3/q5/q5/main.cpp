//
//  main.cpp
//  q5
//
//  Created by AADARSH RAJ on 29/04/20.
//  Copyright © 2020 ADARSH RAJ. All rights reserved.
//

#include <iostream>
#include<vector>
#include<algorithm>
#include<complex>
#include<climits>
using namespace std;
struct item{
    int start,end;
};
bool compare(item a,item b)
{
    return a.end<b.end;
}
vector<int>min_seg(vector<item>arr)
{
    sort(arr.begin(),arr.end(),compare);
    int n=arr.size();
    vector<int>points;
    int point=arr[0].end;
    points.push_back(point);
    for(int i=1;i<n;i++)
    {
        if(point<arr[i].start || point>arr[i].end)
        {
            point=arr[i].end;
            points.push_back(point);
        }
    }
    return points;
}

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    vector<item>arr(n);
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i].start>>arr[i].end;
    }
    vector<int>points=min_seg(arr);
    int s=points.size();
    cout<<s<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<points[i]<<" ";
    }
    
    
    return 0;
}
