// input--takes dimensions of board,number of queens & bishops and coordinates of queens & bishops
// output--board with coordinates of bishops->"B", coordinates of queen->"Q",
//         coordinates attacked by (i)only bishop ->"*"
//                                 (ii)only queen ->"$"
//                                 (iii)both bishop&queen ->"%"
//                                 (iv)none->"_"
#include<iostream>
#include<list>
using namespace std;
char a[100][100]={'\0'};
int m,n;
list<pair<int,int>> Q;
list<pair<int,int>> B;
//checks if i,j is attacked by any of the placed bishop
int bishop(int i,int j)
{
         for(auto k:B)
         {
                //  checks if i,j is in the diagonal of any bishop
                 if(labs(k.first-i)==labs(k.second-j))
                 {
                     return 1;
                 }
         }

     return 0;
}
//checks if i,j is attacked by any of the placed queens
int queen(int i,int j)
{
    for(auto k:Q)
    {
        //  checks if i,j is in the diagonal,row,column of any queen
        if(labs(k.first-i)==labs(k.second-j)||k.first==i||k.second==j)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int q,b,x,y;
    cout<<"enter dimensions(seperated by a space)"<<endl;
    cin>>m;
    cin>>n;
    cout<<"enter number of bishops and queens(seperated by a space)"<<endl;
    cin>>b;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cout<<"enter x and y coordinates of queen "<<i+1<<endl;
        cin>>x;
        cin>>y;
        a[x][y]='Q';
        Q.push_back(make_pair(x,y));
    }
    for(int i=0;i<b;i++)
    {
        cout<<"enter x and y coordinates of bishop "<<i+1<<endl;
        cin>>x;
        cin>>y;
        a[x][y]='B';
        B.push_back(make_pair(x,y));
    }
    //  already filled condition and invalid coordinates not considered
    //filling board according to question
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]=='\0')
            {
                if(bishop(i,j)&&queen(i,j))
                {
                    a[i][j]='%';
                }
                else if(bishop(i,j)&&!queen(i,j))
                {
                    a[i][j]='*';
                }
                else if(!bishop(i,j)&&queen(i,j))
                {
                    a[i][j]='$';
                }
                else
                {
                    a[i][j]='_';
                }
            }
            
        }
    }
    // printing the board
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf(" %c ",a[i][j]);
        }
        printf("\n");
    }

}