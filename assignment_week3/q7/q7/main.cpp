//
//  main.cpp
//  q7
//
//  Created by AADARSH RAJ on 29/04/20.
//  Copyright © 2020 ADARSH RAJ. All rights reserved.
//

#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int myCompare(string X, string Y)
{
    // first append Y at the end of X
    string XY = X.append(Y);
  
    // then append X at the end of Y
    string YX = Y.append(X);
  
    // Now see which of the two formed numbers is greater
    return XY.compare(YX) > 0 ? 1: 0;
}
  
// The main function that prints the arrangement with the largest value.
// The function accepts a vector of strings
void printLargest(vector<string> arr)
{
    // Sort the numbers using library sort function. The function uses
    // our comparison function myCompare() to compare two strings.
    sort(arr.begin(), arr.end(), myCompare);
  
    for (int i=0; i < arr.size() ; i++ )
        cout << arr[i];
}

//string largest(vector<string>a1)
//{
//    stringstream s;
//    for(int i=0;i<a1.size();i++)
//    {
//        s<<a1[i];
//    }
//    string res;
//    s>>res;
//    return res;
//}

int main(int argc, const char * argv[]) {
    string s;
    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    printLargest(arr);
    
    
    return 0;
}
