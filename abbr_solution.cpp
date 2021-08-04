#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'abbreviation' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING a
 *  2. STRING b
 */
bool isLowerCase(char a)
{
    if('a'<=a&&'z'>=a)
    {
        return true;
    }
    return false;
}
// int abb(vector<vector<int>> dp,string a,int n,string b,int m)
// {
//     if(m==0)
//     {
//         return 1;
//     }
//     if(n==0)
//     {
//         return 0;
//     }
//     if(a[n-1]==b[m-1]||a[n-1]-32==b[m-1])
//     {
//         return abb(dp,a,n-1,b,m-1)||abb(dp,a,n-1,b,m);
//     }
//     if(isLowerCase(a[n-1]))
//     {
//         return abb(dp,a,n-1,b,m);
//     }
//     return 0;
// }
string abbreviation(string a, string b) {
    int dp[a.length()+1][b.length()+1];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<a.length()+1;i++)
    {
        bool upper=false;
    //    if(isLowerCase(a[i-1]))
    //    {
    //        dp[i][0]=1;
    //    }
        if(!upper)
        {
            dp[i][0]=1;
        }
        else {
            upper=true;
            dp[i][0]=0;
        }
    }
    for(int i=1;i<a.length()+1;i++)
    {
        for(int j=1;j<b.length()+1;j++)
        {
            if(!isLowerCase(a[i-1]))
            {
                if(a[i-1]==b[j-1]&&dp[i-1][j-1])
                {
                    dp[i][j]=1;
                }
            }
            else
            {
                if(a[i-1]-32==b[j-1]&&dp[i-1][j-1])
                {
                    dp[i][j]=1;
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
    }
    if(dp[a.length()][b.length()])
    {
        return "YES";
    }
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string a;
        getline(cin, a);

        string b;
        getline(cin, b);

        string result = abbreviation(a, b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
 
