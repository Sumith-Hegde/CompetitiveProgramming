#include<bits/stdc++.h>

using namespace std;

int sumOfAll(string str )
{
    int total=0;
    long long int ch=str.length();

    for(long long int  i=0; i<ch; ++i)
      {  total = (total + (str[i]-'0'))%9;
      }
    return total%9;

}


int main(int argc, char const *argv[])
{
    string str;
    int k;
    int sum;

    cin>>str>>k;

    k%=9;

    if(k==0)
    {    cout<<"9";
            exit(0);
    }

    else
    {
        sum= sumOfAll(str);
        sum =(sum*k)%9;

        if(sum==0)
        {
            cout<<"9";
        }
        else
        {
            cout<<sum;
        }
    }

    return 0;
}
