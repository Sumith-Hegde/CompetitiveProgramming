#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'candies' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY arr
 */
int isValid(int a,int n)
{
    if(a>=n||a<0)
    {
        return 0;
    }
    return 1;
}
// TimeComplexity = O(n)
// SpaceComplexity = O(n)
//go from left to right to check min chocolate req considering only left neighbour
//then go from right to left to check min chocolate req considering only right neighbours
//choose max of both 
long candies(int n, vector<int> arr) {
    long NoCandies=0;
    int candy[n];
    int candy2[n];
    for(int i=0;i<n;i++)
    {
        candy[i]=1;
        candy2[i]=1;
    }
    for(int i=0;i<arr.size();i++)
    {
        int a=i-1;
        if(isValid(a,n)&&arr[a]<arr[i])
        {
            candy[i]=candy[a]+1;
        }
    }
    for(int i=arr.size()-1;i>=0;i--)
    {
        int a=i+1;
        if(isValid(a,n)&&arr[a]<arr[i])
        {
            candy2[i]=candy2[a]+1;
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        NoCandies+=max(candy[i],candy2[i]);
    }
    
    return NoCandies;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item_temp;
        getline(cin, arr_item_temp);

        int arr_item = stoi(ltrim(rtrim(arr_item_temp)));

        arr[i] = arr_item;
    }

    long result = candies(n, arr);

    fout << result << "\n";

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
