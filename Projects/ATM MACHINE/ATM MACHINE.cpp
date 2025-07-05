#include<iostream>
#include<string>

using namespace std;

/*Mini project= ATM
  -> Check Balance
  -> Cash Withdraw
  -> User Details
  -> Update Mobile No.
 */

class atm                        //class atm
{
    private:                         //private member variables
    long int account_No;
    string name;
    int PIN;
    double balance;
    string mobile_No;
    
    public:                          //public member functions
    
    // setData function is setting the data into private member variables
    void setData(long int account_No_a, string name_a, int PIN_a, double balance_a,
                 string mobile_No_a)
    {
        account_No = account_No_a; // assigning the formal arguments to the private member var's
        name = name_a;
        PIN = PIN_a;
        balance = balance_a;
        mobile_No = mobile_No_a;
    }
    
    //getAccountNo function is returning the user's account no.
    long int getAccountNo( )
    {
        return account_No;
    }
    
    //getName function is returning the user's Name
    string getName( )
    {
        return name;
    }
    
    //getPIN function is returning the user's PIN
    int getPIN( )
    {
        return PIN;
    }
    
    //getBalance is returning the user's Bank Balance
    double getBalance( )
    {
        return balance;
        
    }
    
    //getMobileNo is returning the user's mobile no.
    string getMobileNo( )
    {
        return mobile_No;
    }
    
    //setMobile function is updating the user mobile  no
    void setMobile(string mob_prev, string mob_new)
    {
        if (mob_prev == mobile_No)        // it will check old Mobile no
        {
            mobile_No = mob_new;          // and update with new, of  old matches
            
            cout << endl <<  "Successfully Updated Mobile No.";
            cin.ignore();
            cin.get( );    // cin.get() is to hold the screen(until user presses any key)
        }
        else               //Does not update if old mobile no does not match
        {
            cout << endl << "Incorrect !!! Old Mobile No";
            cin.ignore();
            cin.get( );
        }
    }
    
    //cashWithDraw function is used to withdraw money from ATM
    void cashWithDraw(int amount_a)
    {
        if ( amount_a > 0 && amount_a<  balance)         // check entered amount validity
        {
            balance -= amount_a;
            cout << endl <<  "Please Collect Your Cash";
            cout << endl << "Available Balance:" << balance;
            cin.ignore();
            cin.get( );
        }
        else
        {
            cout << endl << "Invaild Input or Insufficient Balance";
            cin.ignore();
            cin.get( );
        }
    }
};
    
    int main()
    {
        int choice = 0, enterPIN;    // enterPin and enterAccountNo is for user authentication
        long int enterAccountNo;
        
        system("clear");  // cleans the screen after every function
        
        //created user (object)
        atm user1;
        //set user details(into object)
        user1.setData(1234567,"Tim", 1111, 2100000, "99999");
        
        
        do
        {
            system("clear");
            
            cout << endl  << "*****Welcome to ATM*****" << endl;
            cout << endl << "Enter Your Account No." << endl;
            cin >> enterAccountNo;
            
            cout << endl << "Enter PIN";
            cin >> enterPIN;
            
            
            //chech whether enter values matches with user details
            
            if ((enterAccountNo = user1.getAccountNo()) && (enterPIN == user1.getPIN()))
            {
                do
                {
                    int amount =0;
                    string oldMobileNo, newMobileNo;
                    
                    system("clear");
                    //user interface
                    cout <<   endl << "****Welcome to ATM ****" << endl;
                    cout << endl << "Select Options";
                    cout << endl << "1. Check Balance";
                    cout << endl << "2. Cash Withdraw";
                    cout << endl << "3. Show User Details";
                    cout << endl << "4. Update Mobile No.";
                    cout << endl << "5. Exit" << endl;
                    cin >> choice;
                    
                    switch (choice)
                    {
                        case 1:       // if user presses 1
                            cout << endl << "Your Bank Balance is:" << user1.getBalance();
                            //getBalance is printing the user's bank balance
                            cin.ignore();
                            cin.get( );
                            break;
                            
                        case 2:      // if user presses 2
                            cout << endl << "Enter The Amount:";
                            cin >> amount;
                            user1.cashWithDraw(amount);
                            break;
                            
                        case 3:
                            cout << endl << "*** User Detail Are :-";
                            cout << endl << "--> Account No :" <<  user1.getAccountNo();
                            cout << endl << "--> Name :" << user1.getName();
                            cout << endl << "--> Balance :" << user1.getBalance();
                            cout << endl << "--> Mobile No. :" << user1.getMobileNo( );
                            
                            // getting and printing user details
                            cin.ignore();
                            cin.get( );
                            break;
                            
                        case 4:
                            cout << endl  << "Enter Old Mobile No.";
                            cin >> oldMobileNo;
                            
                            cout << endl << "Enter New Mobile No.";
                            cin >> newMobileNo;
                            
                            user1.setMobile(oldMobileNo, newMobileNo);
                            break;
                            
                        case 5:
                            exit(0);
                            
                        default:
                            cout << endl << "Enter Vaild Data!";
                    }
                    
                } while (1);
            }
            else
            {
                cout << endl << "User Details Are Invalid !!!";
                cin.ignore();
                cin.get( );
            }
        } while (1);
        return 0;
    }


