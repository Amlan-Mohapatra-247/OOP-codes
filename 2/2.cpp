#include <iostream>
#include <string>
using namespace std;

class atm {
	public:
		class action {
			public:
			    int balance=10000;
			    string OTP="6767";
			    
			    void check(string otp) {
			    	if (otp==OTP) {
					    cout <<"Account is successfully Linked";
				    }
				    else {
					    cout <<"Account Linking is Unsuccessful";
				    }
				}
				
				void withdraw(int amt) {
					if (amt>=balance) {
					    cout <<"Insufficient Balance";
				    }
				    else {
					    balance-=amt;
					    cout <<amt<<" rupees has been withdrawn successfully";
				    }
				}
				
				void transfer(int amt,string an) {
					if (amt>=balance) {
					    cout <<"Insufficient Balance";
				    }
				    else {
					    balance-=amt;
					    cout <<amt<<" rupees has been transferred successfully to A/C no:- "<<an;
			  	    }
				}
				
				void recharge(int amt,int mno) {
					if (amt>=balance) {
					    cout <<"Insufficient Balance";
				    }
				    else {
					    balance-=amt;
					    cout <<amt<<" rupees has been recharged successfully to mobile no:- "<<mno;
				    }
				}
		};
		
		class current: public action {
			
		};
		current curacc;
		
		class savings: public action {
			
		};
		savings savacc;
};
atm access;

int main() {
	cout <<"Welcome to The ATM\nPlease select your language\nPress:-\n1 for English\n2 for Hindi\n3 for Bengali\n4 for Assamesse\n:";
	string l;
	cin >>l;
	string PIN="1234",pin;
	cout <<"Enter PIN: ";
	cin >>pin;
	if (PIN==pin) {
		cout <<"Login Successful\nChoose Account Type\nPress:-\n1 for Current\n2 for Savings\n:";
		int acc;
		cin >>acc;
		if (acc=1) {
			cout <<"Choose Action\nPress:-\n1 to Link Account\n2 to Withdraw Cash\n3 to Check Balance\n4 to Transfer Money\n5 to Recharge Mobile Number\n:";
			int c;
			cin >>c;
			if (c==1) {
				string an,otp;
				cout <<"Enter Account Number.: ";
				cin >>an;
				cout <<"An OTp has been sent to your regisgtered Mobile Number\nPlease Enter the OTP: ";
				cin >>otp;
				access.curacc.check(otp);
			}
			else if (c==2) {
				int amt;
				cout <<"Enter Amount to be withdrawn: ";
				cin >>amt;
				access.curacc.withdraw(amt);
			}
			else if (c==3) {
				cout <<"Balance in your account is rupees "<<access.curacc.balance;
			}
			else if (c==4) {
				string an;
				int amt;
				cout <<"Enter Account Number.: ";
				cin >>an;
				cout <<"Enter Amount to be transferred: ";
				cin >>amt;
				access.curacc.transfer(amt,an);
			}
			else if (c==5) {
				int mno,amt;
				cout <<"Enter Mobile Number: ";
				cin >>mno;
				cout <<"Enter Amount to be recharged: ";
				cin >>amt;
				access.curacc.recharge(amt,mno);
			}
			else {
			    cout <<"\nPlease enter the above mentioned values only.\n";
		    }
		}
		else if (acc=2) {
			cout <<"Choose Action\nPress:-\n1 to Link Account\n2 to Withdraw Cash\n3 to Check Balance\n4 to Transfer Money\n5 to Recharge Mobile Number\n:";
			int c;
			cin >>c;
			if (c==1) {
				string an,otp;
				cout <<"Enter Account Number.: ";
				cin >>an;
				cout <<"An OTp has been sent to your regisgtered Mobile Number\nPlease Enter the OTP: ";
				cin >>otp;
				access.savacc.check(otp);
			}
			else if (c==2) {
				int amt;
				cout <<"Enter Amount to be withdrawn: ";
				cin >>amt;
				access.savacc.withdraw(amt);
			}
			else if (c==3) {
				cout <<"Balance in your account is rupees "<<access.savacc.balance;
			}
			else if (c==4) {
				string an;
				int amt;
				cout <<"Enter Account Number.: ";
				cin >>an;
				cout <<"Enter Amount to be transferred: ";
				cin >>amt;
				access.curacc.transfer(amt,an);
			}
			else if (c==5) {
				int mno,amt;
				cout <<"Enter Mobile Number: ";
				cin >>mno;
				cout <<"Enter Amount to be recharged: ";
				cin >>amt;
				access.curacc.recharge(amt,mno);
			}
			else {
			    cout <<"\nPlease enter the above mentioned values only.\n";
		    }
		}
		else {
			cout <<"\nPlease enter the above mentioned values only.\n";
		}
		return 0;
	}
	else {
		cout <<"Login Unsuccessful\n";
		return 0;
	}
}
