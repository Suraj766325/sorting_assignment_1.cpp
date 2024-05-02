// Q1) Which of the following(s) is/are true about bubble sort:
option A - It is stable sort
option B - It has a worst case space complexity of O(n)
option C - It involves swapping of adjacent elements
Option D - After each iteration, the greatest element is placed at the end of the array.
    ANSWER=A,C,D



// Q2) What will the following array look like after one iteration of bubble sort [1,6,2,5,4,3].
option A - [1,3,2,4,5,6]
option B - [1,2,3,4,5,6]
option C - [1,2,5,4,3,6]
option D - [1,2,4,5,3,6]
    ANSWER=C



// Q3) In which case does bubble sort works in the most efficient way:
option A - When the array is sorted in increasing order
option B - When the array is sorted partially
option C - When the array is sorted in decreasing order.
option D - When the array is nearly sorted.
    ANSWER=A



// Q4) Sort the array in descending order using Bubble Sort.
#include<iostream>
using namespace std;
int main()
{
    int a[]={1,4,3,5,6,2},n=sizeof(a)/sizeof(a[0]),i,j,t,s;
    for(i=0;i<n-1;i++)
    {
        s=0;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                s++;
            }
        }
        if(s==0) break;
    }
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
}





// Q5) Check if the given array is almost sorted.
#include<iostream>
using namespace std;
int main()
{
    int a[]={3,2,5,4,6,1},n=sizeof(a)/sizeof(a[0]),i;
    bool flag=true;
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            flag= false;
            break;
        }
    }
    if(flag==true) cout<<"sorted";
    else           cout<<"not sorted";
}