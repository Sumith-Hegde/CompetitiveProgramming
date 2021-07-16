// A palindrome is a string that reads the same backward as forward. For example, the strings "z", "aaa", "aba", and 
// "abccba" are palindromes, but "codeforces" and "ab" are not. You hate palindromes because they give you déjà vu.

// There is a string s. You must insert exactly one character 'a' somewhere in s. If it is possible to create a string 
// that is not a palindrome, you should find one example. Otherwise, you should report that it is impossible.

// For example, suppose s= "cbabc". By inserting an 'a', you can create "acbabc", "cababc", "cbaabc", "cbabac", or 
// "cbabca". However "cbaabc" is a palindrome, so you must output one of the other options.

// Input
// The first line contains a single integer t (1≤t≤104) — the number of test cases.

// The only line of each test case contains a string s consisting of lowercase English letters.

// The total length of all strings does not exceed 3⋅105.

// Output
// For each test case, if there is no solution, output "NO".

// Otherwise, output "YES" followed by your constructed string of length |s|+1 on the next line. 
// If there are multiple solutions, you may print any.

// You can print each letter of "YES" and "NO" in any case (upper or lower).
// input-
// 6
// cbabc
// ab
// zza
// ba
// a
// nutforajaroftuna

// output-
// YES
// cbabac
// YES
// aab
// YES
// zaza
// YES
// baa
// NO
// YES
// nutforajarofatuna
#include<iostream>
using namespace std;
void dejavu()
{
    int n=0;
    string a;
    cin>>a;
    n=a.size();
    int yes=0;
    //places the character 'a' in each position and checks if corresponding character from last is also 'a'
    //if yes move ahead untill no
    //if always yes print no
    //else print no and print the string by inserting 'a' at that position
    for (int i = 0; (n-i-1)>=0; i++)
    {
        if(a[n-1-i]!='a')
        {
            yes=1;
            a.insert(i,"a");
            break;
        }
    }
    if(yes)
    {
        cout<<"YES"<<endl;
        cout<<a<<endl;
    }
    else
    {
        printf("NO\n");
    }   
}
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        dejavu();
    }
    return 0;
}