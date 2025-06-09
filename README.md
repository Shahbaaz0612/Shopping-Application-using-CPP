🛍️ Shopping and Banking Application in C++

📜 Description
This project simulates two interconnected console applications:
Shopping Application (shoppingapp.cpp)
Banking Application (bankapp.cpp)
Users can manage their bank accounts and perform shopping transactions using a simple CLI interface. Shopping payments are handled via integration with the bank system, where authentication and balance checks are performed.

🗂️ Project Structure
.
├── bank.h          // BANK class definition
├── bank.cpp        // BANK class implementation
├── bankapp.cpp     // Standalone banking application
├── shop.h          // SHOP class definition
├── shop.cpp        // SHOP class implementation
├── shoppingapp.cpp // Shopping interface integrated with banking

🧩 Features
🔐 Bank System (BANK Class)
Create a new bank account with name, email, password, and initial balance.
Deposit and withdrawal operations (password-protected).
Balance inquiry (requires password).
Transfer funds to another bank account.
Password setting and verification.
Each account is assigned a unique account number (starting from 360000000).

🛒 Shop System (SHOP Class)
Add items to a cart with name, quantity, and price.
Remove items from the cart using product name.
View all items in the cart along with the total amount.
Pay bill using a linked BANK account (requires password and sufficient balance).
Clears cart after successful payment.

📂 How to Compile
You can compile either of the apps using g++:
🔸 Shopping App
g++ shoppingapp.cpp -o shoppingapp
./shoppingapp
🔸 Bank App
g++ bankapp.cpp -o bankapp
./bankapp

--shoppingapp--
M. Menu       -> Access shopping cart options
P. Pay bill   -> Process payment via BANK account
E. Exit       -> Exit application
Within Shopping Menu:
A. Add product to cart
R. Remove product from cart
V. View cart
E. Exit shopping menu

--bankapp--
M. Menu        -> Deposit, Withdraw, Check Balance
T. Transaction -> Transfer money to another account
E. Exit        -> Exit application
