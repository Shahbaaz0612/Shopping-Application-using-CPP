#include<iostream>
using namespace std;

#include<cstdlib>
#include<cstring>
#include"bank.h"
#include"bank.cpp"
int main()
{
        char choice;
        BANK obj1,obj2;
        while(1)
        {
                cout<<"M.menu\n"<<"T.transaction\n"<<"E.exit"<<endl;
                cin>>choice;
                switch(choice)
                {
                        case 'M':obj1.menu();
                                 break;
                        case 'T':if(obj1.transaction(obj2))
                                 {
                                         cout<<"Transaction successfull"<<endl;
                                 }
                                 else
                                 {
                                         cout<<"Transaction failed"<<endl;
                                 }
                                 break;
                        case 'E':exit(0);
                }
        }
}
