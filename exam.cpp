#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class etnp {
	
	private:
		class ic {
			public:
				string pic;
				string sco;
		};
		
	protected:
		class cd {
			public:
				int it;
				int cc;
		};
		
	public:
		class branch :private ic, protected cd {
			public:
			    int noe=-1;
			    int nop;
			    float pp;
			
			    void setDetails1(string q,string w) {
				    string pic=q;
				    string sco=w;
			    }
			
			    void setDetails2(int e,int r) {
				    int it=e;
				    int cc=r;
			    }
			
			    string getDetails1() {
				    return pic;
			    }
			
			    string getDetails2() {
				    return sco;
			    }
			
			    int getDetails3() {
				    return it;
			    }
			
			    int getDetails4() {
				    return cc;
			    }
		    };
		
		class cse: public branch {
			public:
				void printOrder() {
					string myText;
				    ifstream MyFile("cse.txt");
				    while (getline (MyFile, myText)) {
					    int i=0;
					    for (i=0;i<myText.size();i++) {
					        cout <<myText[i];
						    }
					    }
				    }
		};
		cse cs;
		
		class ece: public branch {
			public:
				void printOrder() {
					string myText;
				    ifstream MyFile("ece.txt");
				    while (getline (MyFile, myText)) {
					    int i=0;
					    for (i=0;i<myText.size();i++) {
					        cout <<myText[i];
						    }
					    }
				    }
		};
		ece ec;
		
		class ee: public branch {
			public:
				void printOrder() {
					string myText;
				    ifstream MyFile("ee.txt");
				    while (getline (MyFile, myText)) {
					    int i=0;
					    for (i=0;i<myText.size();i++) {
					        cout <<myText[i];
						    }
					    }
				    }
		};
		ee e;
		
		class eie: public branch {
			public:
				void printOrder() {
					string myText;
				    ifstream MyFile("eie.txt");
				    while (getline (MyFile, myText)) {
					    int i=0;
					    for (i=0;i<myText.size();i++) {
					        cout <<myText[i];
						    }
					    }
				    }
		};
		eie ei;
		
};
etnp placement;

int main() {
	cout <<"E-TnP NIT Silchar";
	int t=1;
	while (t>0) {
		int n,b;
		cout <<"\nPlease choose the operation you want to perform:\nEnter 1 for inserting/updating information\nEnter 2 for viewing information\nEnter 3 to generate Branch Placement order\nEnter 4 to register complaint\nEnter 5 to check eliginility\nEnter anything else to exit\n:";
		cin >>n;
		if (n==1) {
			cout <<"\nPlease choose the branch:\nEnter 1 for CSE\nEnter 2 for ECE\nEnter 3 for EE\nEnter 4 for EIE";
			cin >>b;
			if (b==1) {
				string q,w;
				int e,r,t,y;
				float u;
				cout <<"Enter name of Professor in charge for CSE branch: ";
				cin >>q;
				cout <<"Enter name of Student coordinator for CSE branch: ";
				cin >>w;
				cout <<"Enter number of IT companies that hired CSE students: ";
				cin >>e;
				cout <<"Enter number of core companies that hired CSE students:";
				cin >>r;
				cout <<"Enter number of students eligible for placement: ";
				cin >>t;
				cout <<"Enter number of students already placed: ";
				cin >>y;
				u=y*100/t;
				placement.cs.setDetails1(q,w);
				placement.cs.setDetails2(e,r);
				placement.cs.noe=t;
				placement.cs.nop=y;
				placement.cs.pp=u;
			}
			else if (b==2) {
				string q,w;
				int e,r,t,y;
				float u;
				cout <<"Enter name of Professor in charge for ECE branch: ";
				cin >>q;
				cout <<"Enter name of Student coordinator for ECE branch: ";
				cin >>w;
				cout <<"Enter number of IT companies that hired ECE students: ";
				cin >>e;
				cout <<"Enter number of core companies that hired ECE students:";
				cin >>r;
				cout <<"Enter number of students eligible for placement: ";
				cin >>t;
				cout <<"Enter number of students already placed: ";
				cin >>y;
				u=y*100/t;
				placement.ec.setDetails1(q,w);
				placement.ec.setDetails2(e,r);
				placement.ec.noe=t;
				placement.ec.nop=y;
				placement.ec.pp=u;
			}
			else if (b==3) {
				string q,w;
				int e,r,t,y;
				float u;
				cout <<"Enter name of Professor in charge for EE branch: ";
				cin >>q;
				cout <<"Enter name of Student coordinator for EE branch: ";
				cin >>w;
				cout <<"Enter number of IT companies that hired EE students: ";
				cin >>e;
				cout <<"Enter number of core companies that hired EE students:";
				cin >>r;
				cout <<"Enter number of students eligible for placement: ";
				cin >>t;
				cout <<"Enter number of students already placed: ";
				cin >>y;
				u=y*100/t;
				placement.e.setDetails1(q,w);
				placement.e.setDetails2(e,r);
				placement.e.noe=t;
				placement.e.nop=y;
				placement.e.pp=u;
			}
			else if (b==4) {
				string q,w;
				int e,r,t,y;
				float u;
				cout <<"Enter name of Professor Incharge for EIE branch: ";
				cin >>q;
				cout <<"Enter name of Student Coordinator for EIE branch: ";
				cin >>w;
				cout <<"Enter number of IT companies that hired EIE students: ";
				cin >>e;
				cout <<"Enter number of core companies that hired EIE students:";
				cin >>r;
				cout <<"Enter number of students eligible for placement: ";
				cin >>t;
				cout <<"Enter number of students already placed: ";
				cin >>y;
				u=y*100/t;
				placement.ei.setDetails1(q,w);
				placement.ei.setDetails2(e,r);
				placement.ei.noe=t;
				placement.ei.nop=y;
				placement.ei.pp=u;
			}
			else {
				cout <<"\nPlease enter the above mentioned values only.\n";
			}
		}
		else if (n==2) {
			cout <<"\nPlease choose the branch:\nEnter 1 for CSE\nEnter 2 for ECE\nEnter 3 for EE\nEnter 4 for EIE";
			cin >>b;
			if (b==1) {
				if (placement.cs.noe==-1) {
					cout <<"\nPlease enter the details first";
				}
				else {
					string z,x;
					int l,p;
					z=placement.cs.getDetails1();
					x=placement.cs.getDetails2();
					l=placement.cs.getDetails3();
					p=placement.cs.getDetails4();
					cout <<"\nBranch: Computer Science and Engineering\n";
					cout <<"\nProfessor Incharge: "<<z;
					cout <<"\nStudent Coordinatior: "<<x;
					cout <<"\nNumber of IT companies that hired CSE students: "<<l;
					cout <<"\nNumber of core companies that hired CSE students: "<<p;
					cout <<"\nNumber of students eligible for placement: "<<placement.cs.noe;
					cout <<"\nNumber of students already placed: "<<placement.cs.nop;
					cout <<"\nPlacement Percentage: "<<placement.cs.pp;
				}
			}
			else if (b==2) {
				if (placement.ec.noe==-1) {
					cout <<"\nPlease enter the details first";
				}
				else {
					string z,x;
					int l,p;
					z=placement.ec.getDetails1();
					x=placement.ec.getDetails2();
					l=placement.ec.getDetails3();
					p=placement.ec.getDetails4();
					cout <<"\nBranch: Electronics and Communication Engineering\n";
					cout <<"\nProfessor Incharge: "<<z;
					cout <<"\nStudent Coordinatior: "<<x;
					cout <<"\nNumber of IT companies that hired ECE students: "<<l;
					cout <<"\nNumber of core companies that hired ECE students: "<<p;
					cout <<"\nNumber of students eligible for placement: "<<placement.ec.noe;
					cout <<"\nNumber of students already placed: "<<placement.ec.nop;
					cout <<"\nPlacement Percentage: "<<placement.ec.pp;
				}
			}
			else if (b==3) {
				if (placement.e.noe==-1) {
					cout <<"\nPlease enter the details first";
				}
				else {
					string z,x;
					int l,p;
					z=placement.e.getDetails1();
					x=placement.e.getDetails2();
					l=placement.e.getDetails3();
					p=placement.e.getDetails4();
					cout <<"\nBranch: Electrical Engineering\n";
					cout <<"\nProfessor Incharge: "<<z;
					cout <<"\nStudent Coordinatior: "<<x;
					cout <<"\nNumber of IT companies that hired EE students: "<<l;
					cout <<"\nNumber of core companies that hired EE students: "<<p;
					cout <<"\nNumber of students eligible for placement: "<<placement.e.noe;
					cout <<"\nNumber of students already placed: "<<placement.e.nop;
					cout <<"\nPlacement Percentage: "<<placement.e.pp;
				}
			}
			else if (b==4) {
				if (placement.ei.noe==-1) {
					cout <<"\nPlease enter the details first";
				}
				else {
					int l,p;
					string z,x;
					z=placement.ei.getDetails1();
					x=placement.ei.getDetails2();
					l=placement.ei.getDetails3();
					p=placement.ei.getDetails4();
					cout <<"\nBranch: Electronics and Instrumentation Engineering\n";
					cout <<"\nProfessor Incharge: "<<z;
					cout <<"\nStudent Coordinatior: "<<x;
					cout <<"\nNumber of IT companies that hired EIE students: "<<l;
					cout <<"\nNumber of core companies that hired EIE students: "<<p;
					cout <<"\nNumber of students eligible for placement: "<<placement.ei.noe;
					cout <<"\nNumber of students already placed: "<<placement.ei.nop;
					cout <<"\nPlacement Percentage: "<<placement.ei.pp;
				}
			}
			else {
				cout <<"\nPlease enter the above mentioned values only.\n";
			}
		}
		else if (n==3) {
			cout <<"\nPlease choose the branch:\nEnter 1 for CSE\nEnter 2 for ECE\nEnter 3 for EE\nEnter 4 for EIE";
			cin >>b;
			if (b==1) {
				placement.cs.printOrder();
			}
			else if (b==2) {
				placement.ec.printOrder();
			}
			else if (b==3) {
				placement.e.printOrder();
			}
			else if (b==4) {
				placement.ei.printOrder();
			}
			else {
				cout <<"\nPlease enter the above mentioned values only.\n";
			}
		}
		else if (n==4) {
			string b,cmp;
			cout <<"\nPlease choose the branch:\nEnter 1 for CSE\nEnter 2 for ECE\nEnter 3 for EE\nEnter 4 for EIE";
			cin >>b;
			cout <<"Please mention your complaint along with your identity:\n";
			cin >>cmp;
			cout <<"Your complaint has been registered. Our cell will get back to you soon.\n";
		}
		else if (n==5) {
			cout <<"Enter cgpa: ";
			float f;
			cin >>f;
			if (f>=8.0) {
				cout <<"Eligible for placement\n";
			}
			else {
				cout <<"Not eligible for placement\n";
			}
		}
		else {
			t--;
		}
	}
	return 0;
}
