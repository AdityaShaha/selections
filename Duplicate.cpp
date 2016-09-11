#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 1000
using namespace std;

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
