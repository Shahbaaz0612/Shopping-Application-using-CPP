#include<iostream>
using namespace std;
class SHOP;

#include<cstring>
#include<cstdlib>
#include "bank.h"
#include "shop.h"
#include "bank.cpp"
#include "shop.cpp"
int main()
{
        BANK obj1;
        SHOP sobj;
        char choice;
        while(1)
        {
                cout<<"M.Menu\n"<<"P.Pay bill\n"<<"E.Exit"<<endl;
                cout<<"Enter choice"<<endl;
                cin>>choice;
                switch(choice)
                {
                case 'M':sobj.menu();
                         break;
                case 'P':if(sobj.paybill(obj1))
                         {
                                 cout<<"Transaction successfull"<<endl;
                         }
                         else
                         {
                                 cout<<"Transaction failed"<<endl;
                         }
                         obj1.baleq();
                         break;
                case 'E':exit(0);
			 break;
                }
        }
}
