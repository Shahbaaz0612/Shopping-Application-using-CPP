class BANK
{
        int account;
        double bal;
        char name[20];
        char email[20];
        string password;
        bool verifypswd();
        static int cnt;
        public:BANK();
               void deposit(float);
               bool withdrawal(float);
               void setpswd();
               void baleq();
               bool transaction(BANK &);
               void menu();
               ~BANK();
               friend class SHOP;
};
int BANK::cnt=360000000;
