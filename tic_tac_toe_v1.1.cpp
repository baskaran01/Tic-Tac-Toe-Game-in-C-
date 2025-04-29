#include <iostream>
using namespace std;

class ttt {
    char in[3][3]= { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    string p1,p2;
    int n,m,k;

public:
void disp()
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

void ann()
{
    if(k%2==0)
    {
        cout<<"\n\n Player X is a winner \n\n"<<endl;
    }
    else
    {
        cout<<"\n\n Player O is a winner \n\n"<<endl;
    }
}

void play(){
    for(k=0;k<9;k++)
    {   
        cout<<"Where to place, Enter two index of row and column [1,2,3]"<<endl;
        cin >>n>>m;
        if((n>0&&n<=3&&m>0&&m<=3)&& in[n-1][m-1]==' ')
        {
            if(k%2==0)
            {
                in[n-1][m-1]='x';
            }
            else
            {
                in[n-1][m-1]='o';
            }
            if( (in[0][0]==in[1][1] && in[1][1]==in[2][2] && in[0][0]!=' ')||
                (in[2][0]==in[1][1] && in[1][1]==in[0][2] && in[2][0]!=' ')||
                (in[0][0]==in[0][1] && in[0][1]==in[0][2] && in[0][0]!=' ')||
                (in[1][0]==in[1][1] && in[1][1]==in[1][2] && in[1][0]!=' ')||
                (in[2][0]==in[2][1] && in[2][1]==in[2][2] && in[2][0]!=' ')||
                (in[0][0]==in[1][0] && in[1][0]==in[2][0] && in[0][0]!=' ')||
                (in[0][1]==in[1][1] && in[1][1]==in[2][1] && in[0][1]!=' ')||
                (in[0][2]==in[1][2] && in[1][2]==in[2][2] && in[0][2]!=' ') )
            {
                ann();
                break;
            }
        }
        else
        {
            cout<<endl<<endl<<" Invaild Index \n Input must be [1-3]"<<endl<<endl;
            k--;
        }
  
        disp();
    }
    cout<<"\n\n Match Drawn \n -TRY AGAIN-\n\n";

}
};

int main()
{
    ttt v;
    cout<<" Welcome to Tic Tac Toe Game "<<endl;
    v.disp();
    v.play();
    return 0;
}
