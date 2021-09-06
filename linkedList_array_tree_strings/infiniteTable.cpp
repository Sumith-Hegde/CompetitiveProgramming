// Polycarp has found a table having an infinite number of rows and columns. The rows are numbered from 1, starting from the topmost one. The columns are numbered from 1, starting from the leftmost one.

// Initially, the table hasn't been filled and Polycarp wants to fix it. He writes integers from 1 and so on to the table as follows.

// The figure shows the placement of the numbers from 1 to 10. The following actions are denoted by the arrows.
// The leftmost topmost cell of the table is filled with the number 1. Then he writes in the table all positive integers beginning from 2 sequentially using the following algorithm.

// First, Polycarp selects the leftmost non-filled cell in the first row and fills it. Then, while the left neighbor of the last filled cell is filled, he goes down and fills the next cell. So he goes down until the last filled cell has a non-filled neighbor to the left (look at the vertical arrow going down in the figure above).

// After that, he fills the cells from the right to the left until he stops at the first column (look at the horizontal row in the figure above). Then Polycarp selects the leftmost non-filled cell in the first row, goes down, and so on.

// A friend of Polycarp has a favorite number k. He wants to know which cell will contain the number. Help him to find the indices of the row and the column, such that the intersection of the row and the column is the cell containing the number k.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        bool notFound=true;
        int k=0;
        cin>>k;
        int row=0;
        int col=0;
        int splNum=0;
        for(int i=0;(i*i)+1<=k;i++)
        {
            col++;
        }
        splNum=(col)*(col)-(col-1);
        row=col;
        int temp=splNum;
        while(row>=1)
        {
            if(k==temp)
            {
                cout<<row<<" "<<col<<endl;
                notFound=false;
            }
            temp--;
            row--;

        }
        temp=splNum;
        if(notFound)
        {
            row=col;
            while(col>=1)
            {
                if(k==temp)
                {
                    cout<<row<<" "<<col<<endl;
                }
                temp++;
                col--;
            }
        }
        // int temp1=col;
        // if(k==splNum)
        // {
        //     cout<<1<<" "<<col<<endl;
        //     continue;
        // }
        // for(int i=1;i<temp1+1;i++)
        // {
        //     if(splNum+i==k)
        //     {
        //         cout<<i+1<<" "<<col<<endl;
        //         continue;
        //     }
        // }
        // row=col;
        // splNum=(col+1)*(col+1);
        // if(k==splNum)
        // {
        //     cout<<row<<" "<<1<<endl;
        //     continue;
        // }
        // for(int i=1;splNum!=k;i++)
        // {
        //     splNum--;
        //     col=i+1;
        // }
        // cout<<row<<" "<<col<<endl;
    }
}