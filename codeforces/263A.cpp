#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,c;
    int matrix[6][6];

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>matrix[i][j];

        }
    }


    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(matrix[i][j]==1)
            {
                x=i+1;
                y=j+1;
            }

        }
    }
   c=abs(x-3)+abs(y-3);

    cout<<c<<endl;
    return 0;
}
