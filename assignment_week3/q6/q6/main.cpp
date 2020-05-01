//
//  main.cpp
//  q6
//
//  Created by AADARSH RAJ on 01/05/20.
//  Copyright © 2020 ADARSH RAJ. All rights reserved.
//

#include <iostream>
#include<vector>
using namespace std;
vector<int>sol(int n)
{
    vector<int>arr;
    for(int i=1;i<=n;i++)
    {
        n=n-i;
        if(n<=i)
            arr.push_back(n+i);
        else if(n==0)
        {
            arr.push_back(i);
            break;
        }
        else{
            arr.push_back(i);
        }
    }
    return arr;
}

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    
    vector<int>arr=sol(n);
    int n1=arr.size();
    cout<<n1<<endl;
    for(int i=0;i<n1;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
