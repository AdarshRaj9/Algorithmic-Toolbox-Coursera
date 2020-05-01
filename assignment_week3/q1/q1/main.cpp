//
//  main.cpp
//  q1
//
//  Created by AADARSH RAJ on 27/04/20.
//  Copyright © 2020 ADARSH RAJ. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int m;
    cin>>m;
    int sum=0;
    int a=(int)m/10;
    sum=sum+a;
    m=m-a*10;
    int b=(int)m/5;
    sum=sum+b;
    m=m-b*5;
    int c=(int)m/1;
    sum=sum+c;
    cout<<sum<<"\n";
    return 0;
}
