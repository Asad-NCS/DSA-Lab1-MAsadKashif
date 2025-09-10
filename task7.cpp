#include<iostream>
#include<vector>
using namespace std;

int main() {

    int key =2;
    int count=0;
    vector<int> arr,indices;
    arr={1,2,1,3,4,1,2,4,6,2};
    
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==key)
        count++;
    }
    
    indices=vector<int> (count);
    int a=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==key)
        {
            indices[a]=i;
            a++;
        }
    }

    if(indices.empty())
    {
        cout<<"Unable to find the key"<<endl;
    }
    else{
        cout<<"Vector of Indices: ";
        for(int i=0;i<indices.size();i++)
        {
            cout<<indices[i];
        }
    }

    return 0;
}
