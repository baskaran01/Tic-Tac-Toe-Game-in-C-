#include <iostream>
using namespace std;

class ttt {
    string p1,p2;
    int n,m,k;

public:
void disp(char in[][3])
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
void check(char in[][3])
{
    
}


void play(char in[0][3]){
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
        }
        else
        {
            cout<<endl<<endl<<" Invaild Index "<<endl<<endl;
            k--;
        }
            disp(in);
    }

}


};



int main()
{
    char in[3][3]= { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    ttt v;
    cout<<" Welcome to Tic Tac Toe Game "<<endl;
    v.disp(in);
    v.play(in);
    return 0;
}
