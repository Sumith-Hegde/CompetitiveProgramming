#include<iostream>
#include<math.h>
using namespace std;
#define rows 9
#define columns 9
void print(int grid[][columns])
{
    for(int i=0;i<rows;i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
        
    }
}
int valid(int grid[][columns],int row,int column,int value)
{
    int r,c,s;
    //checking if the value is already present in the same column
    for(int i=0;i<rows;i++)
    {
        if(i!=row&&grid[i][column]==value)
        {
            return 0;
        }
    }
    //checking if the value is already present in the same row
    for(int i=0;i<columns;i++)
    {
        if(i!=column&&grid[row][i]==value)
        {
            return 0;
        }
    }
    //checking if the value is already present in the same box
    s=(int)sqrt(rows);
       r=row-row%s;
       c=column-column%s;
        for(int i=r;i<r+3;i++)
        {
            for(int j=c;j<c+3;j++)
            {
                if(i==row&&j==column)
                {
                    continue;
                }
                if(grid[i][j]==value)
                {
                    return 0;
                }
            }
        }
    return 1;
}
int solve(int grid[][columns])
{
    int r=-1;
    int c=-1;
    bool filled=true;
    //find an empty box
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if(grid[i][j]==0)
            {
                r=i;
                c=j;
                filled=false;
                break;
            }
        }
        if(!filled)
        {
            break;
        }    
    }
    //if no empty box reutrn 1(solved)
    if(filled)
    {
        return 1;
    }
    for(int i=1;i<rows+1;i++)
    {
        //find a valid number(1-9) that can be filled in found empty box
        if(valid(grid,r,c,i))
        {
            grid[r][c]=i;
            //if grid can be solved by filling that number in that box, return 1
            if(solve(grid))
            {
                return 1;
            }
            //if cant be solved by filling that number in that box,empty that box and 
            // check for pther values that can be filled there
            else
            {
                grid[r][c]=0;
            }
        }
    }
    //if cant fill all empty boxes return 0 
    return 0;
    
}
int main()
{
    int filled=0;
    //take a valid grid
    int grid[rows][columns]={{0,7,0,0,0,0,0,0,9},
                    {5,1,0,4,2,0,6,0,0},
                    {0,8,0,3,0,0,7,0,0},
                    {0,0,8,0,0,1,3,7,0},
                    {0,2,3,0,8,0,0,4,0},
                    {4,0,0,9,0,0,1,0,0},
                    {9,6,2,8,0,0,0,3,0},
                    {0,0,0,0,1,0,4,0,0},
                    {7,0,0,2,0,3,0,9,6}};
    // cout<<"enter grid(0 if blank)"<<endl;
    // cout<<"(entered grid must be valid!)"<<endl;
    // for(int i=0;i<9;i++)
    // {
    //     for(int j=0;j<9;j++)
    //     {
    //         cout<<"row "<<i+1<<" column "<<j+1<<endl;
    //         cin>>grid[i][j];
    //     }
    // }
    int flag=solve(grid);
    if(flag==1)
    {
        print(grid);
    }
    else
    {
        cout<<"no solution";
    }
}