#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 1000
using namespace std;

/* The time complexity of the Algorithm is nlog(n) is avg and Best case.In worst case it is n^2 because of Quicksort 
and requires constant space O(1).
However the time complexity in worst can be made nlog(n) by using MergeSort for Sorting Algorithm thus increasing the space complexity.
*/
int main()
{
    int n,i,x;
    cin>>n;
    int Duplicate[n];
    for(i=0;i<n;i++)
    {
        cin>>Duplicate[i];
    }
    vector<int> DuplicateV (Duplicate, Duplicate+n);
    sort(DuplicateV.begin(),DuplicateV.end());
    for(i=0;i<n-2;i++)
    {
        if(DuplicateV[i]!=DuplicateV[i+1] && DuplicateV[i+1]!=DuplicateV[i+2])
        {
            cout<<DuplicateV[i+1];
        }
    }
    return 0;
}
