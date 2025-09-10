#include<iostream>
#include<vector>
using namespace std;

int main() {

    int num;
    cout<<"Enter your array size: ";
    cin>>num;
    vector<int> arr(num);
    cout<<"Please input "<<num<<" numbers ";
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Please Enter your key: ";
    cin>>key;

    int count=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==key)
        count++;
    }

    vector<int> indices=vector<int> (count);
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
            cout<< indices[i];
        }
    }

    return 0;
}
