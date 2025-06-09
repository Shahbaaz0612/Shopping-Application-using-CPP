//#include"shop.h"
//#include"bank.h"
SHOP::SHOP()
{
        cout<<"In shopping"<<endl;
        struct product list[MAX]={0};
        tolamt=0;
}
void SHOP::addtocart()
{
        if(cnt==MAX)
        {
                cout<<"Cart is full"<<endl;
                return;
        }
        cout<<"Enter product name"<<endl;
        cin>>list[cnt].name;
        cout<<"Enter quantity"<<endl;
        cin>>list[cnt].quantity;
        //if((list[cnt].quantity>=0 && list[cnt].quantity<=47) || (list[cnt].quantity>=58 && list[cnt].quantity<=128))
        if(cin.fail())
        {
                cout<<"Invalid input"<<endl;
                exit(0);
        }
        cout<<"Enter price"<<endl;
        cin>>list[cnt].price;
        tolamt+=list[cnt].price*list[cnt].quantity;
        cnt++;
}
void SHOP::removefromcart(char *s)
{
        int i,j;
        if(cnt==0)
        {
                cout<<"Cart is empty"<<endl;
                return;
        }
        for(i=0;i<cnt;i++)
        {
                cout<<s<<endl;
                cout<<list[i].name<<endl;
                if(strcmp(s,list[i].name)==0)
                {
                        tolamt-=(list[i].price*list[i].quantity);
                        for(j=i;j<cnt;j++)
                        {
                                list[j]=list[j+1];
                        }
                        cnt--;
                        return;
                }
        }
        if(i==cnt)
        {
                cout<<"Product name not matched"<<endl;
                return;
        }
}
void SHOP::viewcart()
{
        int i;
        if(cnt==0)
        {
                cout<<"Cart is empty"<<endl;
                return;
        }
        for(i=0;i<cnt;i++)
        {
                cout<<i+1<<"."<<"Product name-"<<list[i].name<<" "<<"Quantity-"<<list[i].quantity<<" "<<"Price of 1 product-"<<list[i].price<<" "<<"Total amount of this product:"<<list[i].quantity*list[i].price<<endl;
        }
}
void SHOP::menu()
{
        char choice,s[20];
        while(1)
        {
        cout<<"________Menu________"<<endl;
        cout<<"A.Product add to cart\n"<<"R.Remove product from cart\n"<<"V.View cart\n"<<"E.Exit"<<endl;
        cout<<"Enter choice"<<endl;
        cin>>choice;
        switch(choice)
        {
                case 'A':addtocart();
                         break;
                case 'R':if(cnt==0)
                         {
                                 cout<<"Cart is empty"<<endl;
                                 break;
                         }
                         cout<<"Enter removing product name"<<endl;
                         cin>>s;
                         removefromcart(s);
                         break;
                case 'V':viewcart();
                         break;
                case 'E':return;
                default:cout<<"Enter valid choice"<<endl;
        }
        }
}
bool SHOP::paybill(BANK &a)
{
        if(a.verifypswd())
        {
                if(a.bal>=tolamt)
                {
                        a.bal-=tolamt;
                        struct product list[MAX]={0};
                        cnt=0;
                        return true;
                }
                cout<<"Balance insufficient"<<endl;
                return false;
        }
        cout<<"Invaild password"<<endl;
        return false;
}
SHOP::~SHOP()
{
        cout<<"in destructor"<<endl;
}
