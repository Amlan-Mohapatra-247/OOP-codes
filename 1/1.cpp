#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class hmm {
	
	private:
		class deansw{
			public:
			    string warden;
			    string supervisor;
			    string prefect;
		};
		
	protected:
		class mmc{
			public:
			    string caterer;
			    int now;
		};
	
	public:
		class bh :private deansw, protected mmc{
			public:
				
				int nos;
				
				void setContacts1(string q,string w,string e) {
					string warden=q;
					string supervisor=w;
					string prefect=e;
				}
				
			    void setContacts2(string r,int t) {
					string caterer=r;
					int now=t;
				}
				
				string getContacts1() {
					cout <<warden;
			    }
				
				string getContacts2() {
					cout <<supervisor;
				}
				
				string getContacts3() {
					cout <<prefect;
				}
				
				string getContacts4() {
					cout <<caterer;
				}
				
				int getContacts5() {
					cout <<now;
				}
		};
		
		class bh1: public bh {
			public:
				void printmenu() {
					string myText;
					ifstream MyFile("foodbh1.txt");
					while (getline (MyFile, myText)) {
						int i=0;
						cout <<"List of food:-\n";
						for (i=0;i<myText.size();i++) {
							if (myText[i]==',') {
								cout <<endl;
							}
							else {
								cout <<myText[i];
							}
						}
					}
					MyFile.close();
				};
		};
		bh1 onebh;
		
		class bh2: public bh {
			public:
				void printmenu() {
					string myText;
					ifstream MyFile("foodbh2.txt");
					while (getline (MyFile, myText)) {
						int i=0;
						cout <<"List of food:-\n";
						for (i=0;i<myText.size();i++) {
							if (myText[i]==',') {
								cout <<endl;
							}
							else {
								cout <<myText[i];
							}
						}
					}
					MyFile.close();
				};
		};
		bh2 twobh;
		
		class bh3: public bh {
			public:
				void printmenu() {
					string myText;
					ifstream MyFile("foodbh3.txt");
					while (getline (MyFile, myText)) {
						int i=0;
						cout <<"List of food:-\n";
						for (i=0;i<myText.size();i++) {
							if (myText[i]==',') {
								cout <<endl;
							}
							else {
								cout <<myText[i];
							}
						}
					}
					MyFile.close();
				};
		};
		bh3 threebh;
		
		
	public:	
		class gh :private deansw, protected mmc{
			public:
				
				int nos;
				
				void setContacts1(string q,string w,string e) {
					string warden=q;
					string supervisor=w;
					string prefect=e;
				}
				
			    void setContacts2(string r,int t) {
					string caterer=r;
					int now=t;
				}
				
				string getContacts1() {
					cout <<warden;
			    }
				
				string getContacts2() {
					cout <<supervisor;
				}
				
				string getContacts3() {
					cout <<prefect;
				}
				
				string getContacts4() {
					cout <<caterer;
				}
				
				int getContacts5() {
					cout <<now;
				}
		};
		
		class gh1: public gh {
			public:
				void printmenu() {
					string myText;
					ifstream MyFile("foodgh1.txt");
					while (getline (MyFile, myText)) {
						int i=0;
						cout <<"List of food:-\n";
						for (i=0;i<myText.size();i++) {
							if (myText[i]==',') {
								cout <<endl;
							}
							else {
								cout <<myText[i];
							}
						}
					}
					MyFile.close();
				};
		};
		gh1 onegh;
		
		class gh2: public gh {
			public:
				void printmenu() {
					string myText;
					ifstream MyFile("foodgh2.txt");
					while (getline (MyFile, myText)) {
						int i=0;
						cout <<"List of food:-\n";
						for (i=0;i<myText.size();i++) {
							if (myText[i]==',') {
								cout <<endl;
							}
							else {
								cout <<myText[i];
							}
						}
					}
					MyFile.close();
				};
		};
		gh2 twogh;
};
hmm access;

int main() {
	int t=1;
	while (t>0) {
		cout <<"\n\nEnter:-\n1.to enter values\n2.to view values\n3.to report issue.\n4.to view mess menu.\n5.to exit\n";
		int z;
		cin >>z;
		if (z==1) {
			cout <<"\nEnter:'\nb1.for bh1     b2.for bh2     b3.for bh3\ng1.for gh1     g2.for gh2\n";
			string x;
			cin >>x;
			if (x=="b1") {
				string c,v,b,m;
				int p,o;
				cout <<"\nEnter warden,supervisor,prefect,caterer,no. of workers,no. of students in this order\n";
				cin >>c>>v>>b>>m>>p>>o;
				access.onebh.setContacts1(c,v,b);
				access.onebh.setContacts2(m,p);
				access.onebh.nos=o;
			}
			else if (x=="b2") {
				string c,v,b,m;
				int p,o;
				cout <<"\nEnter warden,supervisor,prefect,caterer,no. of workers,no. of students in this order\n";
				cin >>c>>v>>b>>m>>p>>o;
				access.twobh.setContacts1(c,v,b);
				access.twobh.setContacts2(m,p);
				access.twobh.nos=o;
			}
			else if (x=="b3") {
				string c,v,b,m;
				int p,o;
				cout <<"\nEnter warden,supervisor,prefect,caterer,no. of workers,no. of students in this order\n";
				cin >>c>>v>>b>>m>>p>>o;
				access.threebh.setContacts1(c,v,b);
				access.threebh.setContacts2(m,p);
				access.threebh.nos=o;
			}
			else if (x=="g1") {
				string c,v,b,m;
				int p,o;
				cout <<"\nEnter warden,supervisor,prefect,caterer,no. of workers,no. of students in this order\n";
				cin >>c>>v>>b>>m>>p>>o;
				access.onegh.setContacts1(c,v,b);
				access.onegh.setContacts2(m,p);
				access.onegh.nos=o;
			}
			else if (x=="g2") {
				string c,v,b,m;
				int p,o;
				cout <<"\nEnter warden,supervisor,prefect,caterer,no. of workers,no. of students in this order\n";
				cin >>c>>v>>b>>m>>p>>o;
				access.twogh.setContacts1(c,v,b);
				access.twogh.setContacts2(m,p);
				access.twogh.nos=o;
			}
			else {
				cout <<"\nPlease enter the above mentioned values only.\n";
			}
		}
		else if (z==2) {
			cout <<"\nEnter:'\nb1.for bh1     b2.for bh2     b3.for bh3\ng1.for gh1     g2.for gh2\n";
			string x;
			cin >>x;
			if (x=="b1") {
				if (access.onebh.nos==0) {
					cout<<"Please enter the values first\n";
				}
				else {
					cout<<"\nWarden:"<<access.onebh.getContacts1()<<"\nSupervisor:"<<access.onebh.getContacts2()<<"\nPrefect:"<<access.onebh.getContacts3()<<"\nCaterer:"<<access.onebh.getContacts4()<<"\nNo. of Workers:"<<access.onebh.getContacts5()<<"\nNo. of Students:"<<access.onebh.nos<<endl;
				}
			}
			else if (x=="b2") {
				if (access.twobh.nos==0) {
					cout<<"Please enter the values first\n";
				}
				else {
					cout<<"\nWarden:"<<access.twobh.getContacts1()<<"\nSupervisor:"<<access.twobh.getContacts2()<<"\nPrefect:"<<access.twobh.getContacts3()<<"\nCaterer:"<<access.twobh.getContacts4()<<"\nNo. of Workers:"<<access.twobh.getContacts5()<<"\nNo. of Students:"<<access.twobh.nos<<endl;
				}
		    }
			else if (x=="b3") {
				if (access.threebh.nos==0) {
					cout<<"Please enter the values first\n";
				}
				else {
					cout<<"\nWarden:"<<access.threebh.getContacts1()<<"\nSupervisor:"<<access.threebh.getContacts2()<<"\nPrefect:"<<access.threebh.getContacts3()<<"\nCaterer:"<<access.threebh.getContacts4()<<"\nNo. of Workers:"<<access.threebh.getContacts5()<<"\nNo. of Students:"<<access.threebh.nos<<endl;
				}
			}
			else if (x=="g1") {
				if (access.onegh.nos==0) {
					cout<<"Please enter the values first\n";
				}
				else {
					cout<<"\nWarden:"<<access.onegh.getContacts1()<<"\nSupervisor:"<<access.onegh.getContacts2()<<"\nPrefect:"<<access.onegh.getContacts3()<<"\nCaterer:"<<access.onegh.getContacts4()<<"\nNo. of Workers:"<<access.onegh.getContacts5()<<"\nNo. of Students:"<<access.onegh.nos<<endl;
				}
			}
			else if (x=="g2") {
				if (access.twogh.nos==0) {
					cout<<"Please enter the values first\n";
				}
				else {
					cout<<"\nWarden:"<<access.twogh.getContacts1()<<"\nSupervisor:"<<access.twogh.getContacts2()<<"\nPrefect:"<<access.twogh.getContacts3()<<"\nCaterer:"<<access.twogh.getContacts4()<<"\nNo. of Workers:"<<access.twogh.getContacts5()<<"\nNo. of Students:"<<access.twogh.nos<<endl;
				}
			}
			else {
				cout <<"Please enter the above mentioned values only.\n";
			}
		}
		else if (z==3) {
			string ri,hn;
			cout <<"\nSelect your hostel:'\nb1.for bh1     b2.for bh2     b3.for bh3\ng1.for gh1     g2.for gh2\n";
			cin >>hn;
			cout <<"Write your room number:";
			cin >>ri;
			cout <<"\nYou will be visited by the authorities soon!\n";
		}
		else if (z==4) {
			string hn;
			cout <<"\nSelect your hostel:'\nb1.for bh1     b2.for bh2     b3.for bh3\ng1.for gh1     g2.for gh2\n";
			cin >>hn;
			if (hn=="b1") {
				access.onebh.printmenu();
			}
			else if (hn=="b2") {
				access.twobh.printmenu();
			}
			else if (hn=="b3") {
				access.threebh.printmenu();
			}
			else if (hn=="g1") {
				access.onegh.printmenu();
			}
			else if (hn=="g2") {
				access.twogh.printmenu();
			}
			else {
				cout <<"Please enter the above mentioned values only.\n";
			}
		}
		else if (z==5) {
			t=0;
		}
		else {
			cout <<"Please enter the above mentioned values only.\n";
		}
	}
	return 0;
}
