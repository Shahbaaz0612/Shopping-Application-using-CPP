#define MAX 10
struct product
{
        char name[20];
        int quantity;
        float price;
};
class SHOP
{
        struct product list[MAX];
        float tolamt;
        static int cnt;
        public:SHOP();
               void addtocart();
               void removefromcart(char *);
               void viewcart();
               bool paybill(BANK &);
               void menu();
               //friend bool BANK :: trasaction(SHOP &);
               ~SHOP();
};
int SHOP::cnt=0;
