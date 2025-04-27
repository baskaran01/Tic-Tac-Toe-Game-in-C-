#include <iostream>
using namespace std;

void val(char in[][3])
{
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<in[i][j]<<" | ";
        }
        cout<<endl;
    }
}

int main()
{
    int c,n,m;
    char in[3][3]= { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    cout<<" Welcome to Tic Tac Toe Game "<<endl;
    val(in);
    for(int k=0;k<9;k++)
    {
    cout<<"Where to place, Enter two index of row and column [1,2,3]"<<endl;
    cin>> n>>m;
    if(n>0&&n<=3&&m>0&&m<=3)
    {
        if(k%2==0)
        {
            in[n-1][m-1]='x';
        }
        else
        {
            in[n-1][m-1]='o';
        }
    }
    else
    {
        cout<<endl<<endl<<" Invaild Index "<<endl<<endl;
    }
    val(in);
    }
    
    return 0;
}