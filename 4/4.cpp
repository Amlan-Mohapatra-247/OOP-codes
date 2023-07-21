#include <iostream>
#include <string>
using namespace std;

class teach{
	public:
		string tname;
		string tsubj;
		int totalclass;
		class stud {
			public:
				string name;
				string scholarid;
				int classatt;
				int per;
		};
		
		class stud1: public stud {
			
		};
		stud1 shishya1;
		
		class stud2: public stud {
			
		};
		stud1 shishya2;
		
		class stud3: public stud {
			
		};
		stud1 shishya3;
		
		class stud4: public stud {
			
		};
		stud1 shishya4;
		
		class stud5: public stud {
			
		};
		stud1 shishya5;
};
teach guru;

int main() {
	cout <<"Welcome to NIT Silchar Attendance System\nPlease Enter User ID: ";
	string uid,pass="nits",passwd;
	cin >>uid;
	cout <<"Please Enter Password: ";
	cin >>passwd;
	if (passwd!=pass) {
		cout <<"Incorrect Password\nPlease Login Again.";
	}
	else {
		cout <<"Enter Teacher's Name And Subject: ";
		string tn,ts;
		cin >>tn>>ts;
		guru.tname=tn;
		guru.tsubj=ts;
		cout <<"Enter the total number of classes conducted: ";
		int n;
		cin >>n;
		guru.totalclass=n;
		
		cout <<"Enter Details of Student No. 1\n";
		cout <<"Enter Student's Name and ScholarID: ";
		string nam;
		int q;
		cin >>nam>>q;
		guru.shishya1.name=nam;
		guru.shishya1.scholarid=q;
		cout <<"Enter number of classes attended: ";
		int w;
		cin >>w;
		guru.shishya1.classatt=w;
		guru.shishya1.per=guru.shishya1.classatt*100/guru.totalclass;
		
		cout <<"Enter Details of Student No. 2\n";
		cout <<"Enter Student's Name and ScholarID: ";
		cin >>nam>>q;
		guru.shishya2.name=nam;
		guru.shishya2.scholarid=q;
		cout <<"Enter number of classes attended: ";
		cin >>w;
		guru.shishya2.classatt=w;
		guru.shishya2.per=guru.shishya2.classatt*100/guru.totalclass;
		
		cout <<"Enter Details of Student No. 3\n";
		cout <<"Enter Student's Name and ScholarID: ";
		cin >>nam>>q;
		guru.shishya3.name=nam;
		guru.shishya3.scholarid=q;
		cout <<"Enter number of classes attended: ";
		cin >>w;
		guru.shishya3.classatt=w;
		guru.shishya3.per=guru.shishya3.classatt*100/guru.totalclass;
		
		cout <<"Enter Details of Student No. 4\n";
		cout <<"Enter Student's Name and ScholarID: ";
		cin >>nam>>q;
		guru.shishya4.name=nam;
		guru.shishya4.scholarid=q;
		cout <<"Enter number of classes attended: ";
		cin >>w;
		guru.shishya4.classatt=w;
		guru.shishya4.per=guru.shishya4.classatt*100/guru.totalclass;
		
		cout <<"Enter Details of Student No. 5\n";
		cout <<"Enter Student's Name and ScholarID: ";
		cin >>nam>>q;
		guru.shishya5.name=nam;
		guru.shishya5.scholarid=q;
		cout <<"Enter number of classes attended: ";
		cin >>w;
		guru.shishya5.classatt=w;
		guru.shishya5.per=guru.shishya5.classatt*100/guru.totalclass;
		
		cout <<"\n***** REPORT *****\n";
		cout <<"Teacher Name: "<<guru.tname<<"\nTeacher Subject: "<<guru.tsubj<<"\nTotal Number of classes taken: "<<guru.totalclass;
		
		cout <<"Student1-\nStudent Name: "<<guru.shishya1.name<<"\nScholar ID: "<<guru.shishya1.scholarid<<"Attendance: "<<guru.shishya1.per;
		if (guru.shishya1.per<75) {
			cout <<"Low Attendance. A report has been sent to home.\n";
		}
		
		cout <<"Student2-\nStudent Name: "<<guru.shishya2.name<<"\nScholar ID: "<<guru.shishya2.scholarid<<"Attendance: "<<guru.shishya2.per;
		if (guru.shishya2.per<75) {
			cout <<"Low Attendance. A report has been sent to home.\n";
		}
		
		cout <<"Student3-\nStudent Name: "<<guru.shishya3.name<<"\nScholar ID: "<<guru.shishya3.scholarid<<"Attendance: "<<guru.shishya3.per;
		if (guru.shishya3.per<75) {
			cout <<"Low Attendance. A report has been sent to home.\n";
		}
		
		cout <<"Student4-\nStudent Name: "<<guru.shishya4.name<<"\nScholar ID: "<<guru.shishya4.scholarid<<"Attendance: "<<guru.shishya4.per;
		if (guru.shishya4.per<75) {
			cout <<"Low Attendance. A report has been sent to home.\n";
		}
		
		cout <<"Student5-\nStudent Name: "<<guru.shishya5.name<<"\nScholar ID: "<<guru.shishya5.scholarid<<"Attendance: "<<guru.shishya5.per;
		if (guru.shishya5.per<75) {
			cout <<"Low Attendance. A report has been sent to home.\n";
		}
	}
	return 0;
}
