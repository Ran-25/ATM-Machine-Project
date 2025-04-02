#include<iostream>
#include <fstream>
#include <string>
#include<cstdlib>


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

void Login_Account() {
    int Account_ID;
    std::fstream file("Account_detail.dat");

    std::cout << "Enter ACCOUNT_ID: ";
    std::cin >> Account_ID;

    std::string Account_IDSTR = std::to_string(Account_ID);
    std::string id;
    bool found = false;


    while (file >> id) {
        if (id == Account_IDSTR) {
            found = true;
            break;
        }
    }


    file.close();

    if (found) {
        std::cout << "ID exists\n";
    } else {
        std::cout << "NO Lahh\n";
    }
}

void Sign_up(){
    srand((unsigned) time(NULL));

	// Get a random number
	int random = 100000 + rand() % 900000;
    std::string randomSTR = std::to_string(random);

    std::string Account_ID = "84" + randomSTR + "26";

    std::ofstream writeFile;
    writeFile.open("Account_detail.dat", std::ios::app);

    // Write to the file
    writeFile<<Account_ID<<std::endl;

    // Close the file
     writeFile.close();
      
}