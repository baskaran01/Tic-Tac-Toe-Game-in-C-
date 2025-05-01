#include <iostream>
using namespace std;

class ttt {
    char in[3][3]= { {' ',' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    int n,m,k;

public:
void disp()
{
    cout<<endl<<" ----+---+----"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<" | ";
        for (int j=0;j<3;j++)
        {
            cout<<in[i][j]<<" | ";
        }
        cout<<endl<<" ----+---+----"<<endl;
    }
}

void play(){
    for(k=0;k<9;k++)
    {   
        cout<<"Where to place, Enter two index of row and column [1,2,3]"<<endl;
        cin >>n>>m;
        if (cin.fail())
        {
            cin.clear(); // Clear error flags
            cin.ignore(); // Discard invalid input
            cout << "Invalid input! Please enter a number."<<endl;
        }
        else if((n>0&&n<=3&&m>0&&m<=3)&& in[n-1][m-1]==' ')
        {
            k%2==0?in[n-1][m-1]='X':in[n-1][m-1]='O';
            if( (in[0][0]==in[1][1] && in[1][1]==in[2][2] && in[0][0]!=' ')||
                (in[2][0]==in[1][1] && in[1][1]==in[0][2] && in[2][0]!=' ')||
                (in[0][0]==in[0][1] && in[0][1]==in[0][2] && in[0][0]!=' ')||
                (in[1][0]==in[1][1] && in[1][1]==in[1][2] && in[1][0]!=' ')||
                (in[2][0]==in[2][1] && in[2][1]==in[2][2] && in[2][0]!=' ')||
                (in[0][0]==in[1][0] && in[1][0]==in[2][0] && in[0][0]!=' ')||
                (in[0][1]==in[1][1] && in[1][1]==in[2][1] && in[0][1]!=' ')||
                (in[0][2]==in[1][2] && in[1][2]==in[2][2] && in[0][2]!=' ') )
            {
                disp();
                cout<<(k%2==0?"\n\n Player X is a winner \n\n":"\n\n Player O is a winner \n\n")<<endl;
                return;
            }
        }
        else
        {
            cout<<endl<<endl<<" Invaild Index - Input must be [1-3]"<<endl<<endl;
            k--;
        }
  
        disp();
    }
    cout<<"\n\n Match Drawn \n -TRY AGAIN-\n\n";

}
};

int main()
{
    char A='y';
    while(A=='y')
        {
            cout<<" Welcome to Tic Tac Toe Game "<<endl;
            ttt v;
            v.disp();
            v.play();
            cout<<endl<<"If you want play again press \"y\" or else any key to exit"<<endl;
            cin>>A;
        }
    return 0;
}
