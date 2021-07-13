// input--takes dimensions of board,number of queens & bishops and coordinates of queens & bishops
// output--board with coordinates of bishops->"B", coordinates of queen->"Q",
//         coordinates attacked by (i)only bishop ->"*"
//                                 (ii)only queen ->"$"
//                                 (iii)both bishop&queen ->"%"
//                                 (iv)none->"_"
#include<iostream>
using namespace std;
char a[100][100]={'\0'};
int m,n;
//checks if i,j is attacked by any of the placed bishop
int bishop(int i,int j)
{
    // goes through entire board and searches for bishops
     for(int k=0;k<m;k++)
     {
         for(int l=0;l<n;l++)
         {
             if(a[k][l]=='B')
             {
                //  checks if i,j is in the diagonal of found bishop
                 if(labs(k-i)==labs(l-j))
                 {
                     return 1;
                 }
             }
         }
     }
     return 0;
}
//checks if i,j is attacked by any of the placed queens
int queen(int i,int j)
{
    // goes through entire board and searches for queens
    for(int k=0;k<m;k++)
    {
        for(int l=0;l<n;l++)
        {
            if(a[k][l]=='Q')
            {
                //  checks if i,j is in the diagonal of found bishop
                if(labs(k-i)==labs(l-j)||k==i||l==j)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}
int main()
{
    int q,b,x,y;
    // printf("enter dimensions(with space)\n");
    // scanf("%d %d",&m,&n);
    // printf("enter number of bishops and queens respectively(with space)\n");
    // scanf("%d %d",&b,&q);
    cout<<"enter dimensions(seperated by a space)"<<endl;
    cin>>m;
    cin>>n;
    cout<<"enter number of bishops and queens(seperated by a space)"<<endl;
    cin>>m;
    cin>>n;
    for(int i=0;i<q;i++)
    {
        printf("enter x and y coordinates of queen %d(respectively with a space)",i+1);
        scanf("%d %d",&x,&y);
        a[x][y]='Q';
    }
    for(int i=0;i<b;i++)
    {
        printf("enter x and y coordinates of bishop %d(respectively with a space)",i+1);
        scanf("%d %d",&x,&y);
        a[x][y]='B';
    }
    //  already filled condition and invalid coordinates not considered
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
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf(" %c ",a[i][j]);
        }
        printf("\n");
    }

}