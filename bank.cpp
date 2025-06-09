//#include"shop.h"
//#include"bank.h"

BANK::BANK()
{
        cout<<"IN BANK"<<endl;
        cout<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter balance"<<endl;
        cin>>bal;
        cout<<"Enter email"<<endl;
        cin>>email;
        setpswd();
        account=cnt++;
}
void BANK::deposit(float amount)
{
        if(verifypswd())
        {
                bal+=amount;
        }
        else
        {
                cout<<"Invalid password"<<endl;
                exit(0);
        }
}
bool BANK::withdrawal(float amount)
{

        if(verifypswd())
        {
                if(amount<=bal)
                {
                        bal-=amount;
                        return true;
                }
                else
                {
                        cout<<"balance insufficient"<<endl;
                        return false;
                }
        }
        cout<<"Invalid password"<<endl;
        return false;
}
void BANK::baleq()
{
        if(verifypswd())
        {
                cout<<"Available balance in your account:"<<bal<<endl;
        }
        else
        {
                cout<<"Invalid password"<<endl;
        }
}
void BANK::setpswd()
{
        cout<<"Enter password"<<endl;
        cin>>password;
}
bool BANK::verifypswd()
{
        string s;
        cout<<"Enter password"<<endl;
        cin>>s;
        if(password==s)
        {
                return true;
        }
        return false;
}
bool BANK::transaction(BANK &a)
{
        float amt;
        cout<<"Enter amount"<<endl;
        cin>>amt;
        if(verifypswd())
        {
                if(amt<=bal)
                {
                        bal-=amt;
                        a.bal+=amt;
                        return true;
                }
                else
                {
                        cout<<"Balance insufficient"<<endl;
                        return false;
                }
        }
        cout<<"Invalid password"<<endl;
        return false;
}
void BANK::menu()
{
        char choice;
        float amount;
        cout<<"D.Deposit\n"<<"W.Withdrawal\n"<<"B.Balance Enquiry\n"<<"S:Set password\n"<<"E.exit"<<endl;
        cin>>choice;
        switch(choice)
        {
                case 'D':cout<<"Enter deposit amount"<<endl;
                         cin>>amount;
                         deposit(amount);
                         break;
                case 'W':cout<<"Enter withdrawal amount"<<endl;
                         cin>>amount;
                         if(withdrawal(amount))
                         {
                                 cout<<"Transaction is successfull"<<endl;
                         }
                         else
                         {
                                 cout<<"Transaction is failed"<<endl;
                         }
                         break;
                case 'B':baleq();
                         break;
                case 'E':return;
                default:cout<<"Enter valid input"<<endl;
        }
}
BANK::~BANK()
{
        cout<<"In destructor"<<endl;
}



