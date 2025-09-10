#include<iostream>
#include<string>
using namespace std;

int main() {

    string word,pattern;

    cout<<"Enter your word: ";
    getline(cin,word);
    cout<<"Enter the pattern: ";
    getline(cin,pattern);

    int index = -1;
    int txtlen= word.size();
    int patternlen= pattern.size();
    

    if(patternlen==0)
    {cout<<"Empty pattern"<<endl;return 0;}

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
    
    if(index == -1)
    {cout<<"Pattern not Found!"<<endl;}
    else{
        cout<<"Pattern found at the index "<<index<<endl;
        if(index==0)
        {cout<<"Pattern found at the beginning"<<endl;}
        else if(index== txtlen-patternlen)
        {cout<<"Pattern found at the end"<<endl;}
        else{
            cout<<"pattern found in the middle"<<endl;//this is for when the text entered exceeds 3 or more words
            }
    }
    
    return 0;
}
