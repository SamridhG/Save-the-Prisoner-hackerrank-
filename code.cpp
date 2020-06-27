#include<iostream>
using namespace std;
int main()
{
     int rem,loop,prisner,sweet,start,temp;
    cin>>loop;
    for(int i=1;i<=loop;i++)
    {
        cin>>prisner>>sweet>>start;
        if(prisner>=sweet)
        {
            temp=start+(sweet-1);
            if(temp>prisner)
            {
                cout<<(temp%prisner)<<endl;
            }
            else{cout<<temp<<endl;}
        }
         else if(prisner<sweet)
        {
             rem=sweet%prisner;
             temp=start+(rem-1);
            if(temp>prisner)
            {
                cout<<(temp%prisner)<<endl;
            }
            else if(temp==0)
            {
                cout<<prisner<<endl;
            }
            else{cout<<temp<<endl;}
        }
    }
}
