#include<iostream>
#include<string>
using namespace std;

int main() {

    string word,pattern;

    cout<<"Enter your word: ";
    cin>>word;
    cout<<"Enter the pattern: ";
    cin>>pattern;

    int txtlen=word.size(),patternlen=pattern.size(),index=-1;

    for(int i=0;i<=txtlen-patternlen;i++)
    {
        bool found=true;
        for(int k=0;k<patternlen;k++)
        {
           if(word[i+k] != pattern[k]) 
           {
            found=false;
            break;
           }
        }
        if(found){index=i;break;}
    }
    if(patternlen==0)
    {cout<<"Empty pattern"<<endl;}
    else if(index == -1)
    {cout<<"Pattern not Found!"<<endl;}
    else{
        cout<<"Pattern found at the index "<<index<<endl;
        if(index==0){cout<<"Pattern found at the beginning"<<endl;}
        else if(index== txtlen-patternlen){cout<<"Pattern found at the end"<<endl;}
        else{
            cout<<"pattern found in the middle"<<endl;//this is for when the text entered exceeds 3 or more words
        }
    }
    
    return 0;
}
