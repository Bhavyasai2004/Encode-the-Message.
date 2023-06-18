#include <bits/stdc++.h> 
string encode(string &message)
{
    //   Write your code here.
    int c=1,i;
    string s;
    for(i=0;i<message.length()-1;i++)
    {
        if(message[i]==message[i+1])
        c++;
        else{
            s+=message[i];
            s+=to_string(c);
            c=1;
            //cout << s;
        }
        
    }
    s+=message[i];
    s+=to_string(c);
    return s;
}
