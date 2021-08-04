#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'minimumAbsoluteDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int minimumAbsoluteDifference(vector<int> arr) {
    sort(arr.begin(),arr.end());
    int min=arr[1]-arr[0];
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i+1]-arr[i]<min)
        {
            min=arr[i+1]-arr[i];
        }
    }
    return min;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = minimumAbsoluteDifference(arr);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int n;
//     int *a;
//     cin >>n;
//     a=new int[100000];
//     for (int i=0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     sort(a,a+n);
//     int min=a[1]-a[0];
//     for (int i=0; i < n-1; i++)
//     {
//         if(a[i+1]-a[i]<min)
//         {
//             min=a[i+1]-a[i];
//         }
//     }
//     cout << min;
// }
// #include <bits/stdc++.h>

// using namespace std;

// const int maxN = 1e5+10;
// int N,A[maxN];

// int main()
// {
//     cin >> N;
//     for (int i=0; i <N; i++) cin >> A[i];
//     sort(A,A+N);
//     int ans = abs(A[2]-A[1]);
//     for (int i=1; i < N; i++) ans = min(ans,abs(A[i]-A[i-1]));
//     cout << ans;
// }
