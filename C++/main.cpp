#include<iostream>
#include <fstream>
#include <string>


void Login_Account();
void Sign_up();

int main(){
    int Authencation;
    std::cout<<"1. Log in"<<std::endl;
    std::cout<<"2. Sign up"<<std::endl;
    std::cin>>Authencation;

    if(Authencation == 1){
        Login_Account();
    }
    else if(Authencation == 2){
        Sign_up();
    }




}

void Login_Account(){
    int Account_ID, Account_PASSCODE;
    std::fstream file ("Account_detail.txt");
    std::string id;

    std::cout<<"Enter ACCOUNT_ID: ";
    std::cin>>Account_ID;

    std::string Account_IDSTR = std::to_string(Account_ID);

    while(file >> id){
        if(id == Account_IDSTR){
            std::cout << "ID exists\n";
        }
        else{
            std::cout << "Account Not Exist. Need To Sign Up\n";
        }
    }
}

void Sign_up(){
    std::cout<<"Nice";
}