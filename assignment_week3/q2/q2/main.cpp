//
//  main.cpp
//  q2
//
//  Created by AADARSH RAJ on 27/04/20.
//  Copyright © 2020 ADARSH RAJ. All rights reserved.
//

/*#include <iostream>
using namespace std;
struct item
{
    int val,weight;
    item(int val,int weight)
    {
        val(val),weight(weight)
    }
};
bool compare(struct item a,struct item b)
{
    double r1=(double)a.weight/a.val;
    double r2=(double)b.weight/b.val;
    return r1>r2;
}
double frac_knapsack(item arr[],int n,int w)
{
    sort(arr,arr+n,compare);
    int currWeight=0;
    double final_value=0.0;
    for(int i=0;i<n;i++)
    {
        if(currWeight+arr[i].weight<=w)
        {
            currWeight+=arr[i].weight;
            final_value+=arr[i].val;
        }
        else{
            int remain=w-currWeight;
            final_value+=arr[i].val*((double)remain/arr[i].weight);
            break;
        }
    }
    return final_value;
}

int main(int argc, const char * argv[]) {
    int n,w;
    cin>>n>>w;
    item arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].val;
        cin>>arr[i].weight;
    }
    cout<<frac_knapsack(arr, n, w);
    return 0;
}*/
#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
struct item
{
    int val,weight;
    double d;
};
void input(item arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].val>>arr[i].weight;
        
    }
}
bool compare(item a,item b)
{
    return (a.d>b.d);
}
double knapsack(item arr[],int n,int w)
{
    int j,i,pos;
    item mx,temp;
    double totalval=0.0,totalweight=0.0;
    for(i=0;i<n;i++)
    {
        arr[i].d=((double)arr[i].val/(double)arr[i].weight);
    }
    sort(arr,arr+n,compare);
    for(i=0;i<n;i++)
    {
        if(totalweight+arr[i].weight<=w)
        {
            totalweight+=arr[i].weight;
            totalval+=arr[i].val;
        }
        else
        {
            double remain=w-totalweight;
            totalval+=(remain*((double)arr[i].d));
            totalweight+=remain;
            break;
        }
    }
    return totalval;
}
int main()
{
    /*while(true)
    {
        int n,w,n1,w1;
        n=rand()%10;
        w=rand()%100;
        n1=rand()%10;
        w1=rand()%100;
        item arr1[n],arr2[n1];
        input(arr1,n);
        input(arr2,n);
        double a=knapsack(arr1, n, w);
        double b=knapsack(arr2, n1, w1);
        
        

    }*/

    int n,w;
    cin>>n>>w;
    item arr[n];
    input(arr,n);
    /*for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        input(a,b);
    }*/
    double a=knapsack(arr, n, w);
    cout<<setprecision(18)<<a<<"\n";
    return 0;
}
