#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the maxSubsetSum function below.
int *dp;
// int mss(vector<int> a,int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     if(dp[n]!=1.5)
//     {
//         return dp[n];
//     }
//     return dp[n]=max(mss(a,n-1),a[n-1]+mss(a,n-2));
// }
int maxSubsetSum(vector<int> arr) {
    dp=new int[arr.size()+1];
    dp[0]=0;
    for(int i=1;i<arr.size()+1;i++)
    {
        if(i-2>0)
        {
            dp[i]=max(dp[i-1],arr[i-1]+dp[i-2]);
        }
        else {
        dp[i]=max(dp[i-1],arr[i-1]);
        }
    }
    return dp[arr.size()];
    // return mss(arr,arr.size());

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int res = maxSubsetSum(arr);

    fout << res << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
