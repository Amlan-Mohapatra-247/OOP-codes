#include<bits/stdc++.h>
using namespace std;

class Election_Notification{
    public:
        string Date_of_Election;
        string Eligibility_critiron;
        string Date_of_result;
        int Number_of_candidates;
        public:
        string setDate() {
            cout<<"Enter the date of Election"<<endl;
            cin>>Date_of_Election;
            return Date_of_Election;
        }
        string setResultDate() {
            cout<<"Enter the date of Result"<<endl;
            cin>>Date_of_result;
			return Date_of_result;
        }
        string setEligibility_critiron() {
            cout<<"Enter the Eligibility critiron for the Candidate"<<endl;
            cin>>Eligibility_critiron;
            return Eligibility_critiron;
        }
        void getDate(string d) {
            cout<<"The date of Election is :"<<d<<endl;
        }
        void getResultDate(string d) {
            cout<<"The Result Date is :"<<d<<endl;
        }
        void print_Eligibility_critiron(string s) {
            cout<<"The Eligibility Critiron for the Candidates are"<<endl;
            cout<<s;
            cout<<endl;
        }
        int setNOC(){
            cout<<"Set the Total no. of Eligible candidates"<<endl;
            int a;
            cin>>a;
            return a;
        }
};

class Processing_the_Nominies{
    public:
        int no_of_candidates;
        int no_of_selected_candidates;
        string q[100];
        string a[100];
        int Remove() {
            cout<<"Number of Candidates wanting to withdraw their name :"<<endl;
            cin>>no_of_selected_candidates;
            return no_of_selected_candidates;
        }

        string* getNominies(int n) {
            cout<<"Give the Candidates Name:"<<endl;
            int i=0;
            while(n--) {
                string str;
                cin>>str;
                q[i]=str;
                i++;
            }
            return q;
        }
        void search(string str,string *arr,int n) {
            for (int i = 0; i < n; i++) {
                if(arr[i]==str) {
                    arr[i]="0";
                }
            }  
        }
        void select_Nominies(int n,int m) {
            cout<<"Names of Candidates withdrawing:"<<endl;
            int t=n-m;
            while(t--){
                string str;
                cin>>str;
                search(str,q,n);
            }
        }
        string * print_the_finial_Candidates(string *arr,int n) {
            int i=0;
            int j=0;
            while(n--) {
                if(arr[i]!="0") {
                    a[j]=arr[i];
                    j++;
                    i++;
                }
                else{
                    i++;
                }
            }
			cout<<"The selected candidates for the election are"<<endl;
            for(int k=0;k<j;k++) {
                cout<<a[k]<<endl;
            }
            return a;
        }
};

class Campign{
    public:
        string agenda[100];
        void Set_the_Menifesto_for_the_Selected_candidates(string *arr,int n) {
            int i=0;
            while(n--) {
                cout<<"set the AGENDAS for the candidate:"<<arr[i]<<endl;
                string str;
                cin>>str;
                agenda[i]=str;
                i++;
            }
        }
        void Provide_the_Manifasto_to_the_public(string *arr,int n) {
            int i=0;
            while(n--) {
                cout<<"The agenda of the candidate "<<arr[i]<<" "<<"is:"<<endl;
                cout<<agenda[i]<<endl;
                i++;
            }
        }
};

class Voting{
    public:
    int ar[100];
    int i=0;
    void Take_the_vote_from_students(string *arr,int n)//candidates name,no. of Cnd
    {
        
       while(n--){
       cout<<"Number of votes achived by "<<arr[i]<<" is:"<<endl;
       cin>>ar[i];
       i++;
       }   
    }
    int select_the_winner(){
    int* max=ar; //larger element pointer initially pointed to first element
    for (int i = 1; i < 10; i++)
    {
    if (ar[i] > *max)
    {
      max = &ar[i]; //updating the pointer to maximum 
    }
    }
    int index = max - ar;
    return index;
}
void Anounch_the_winner(string *arr,int p){//Name of candidates,index
       cout<<"WINNER of the ELECTION is:"<<endl;
       cout<<arr[p];
}
};
int main()
{
   Election_Notification obj;
   string n1=obj.setDate();
   string n2=obj.setResultDate();
   string n3=obj.setEligibility_critiron();
   obj.getDate(n1);
   obj.getResultDate(n2);
   obj.print_Eligibility_critiron(n3);
   int n=obj.setNOC();
   

Processing_the_Nominies obj2;
string *s=obj2.getNominies(n);
int f=obj2.Remove();
obj2.select_Nominies(n,f);
string *s2=obj2.print_the_finial_Candidates(s,n);
int t=n-f;//Number of selected Nomonies
Campign obj3;
obj3.Set_the_Menifesto_for_the_Selected_candidates(s2,t);
obj3.Provide_the_Manifasto_to_the_public(s2,t);
Voting obj4;
obj4.Take_the_vote_from_students(s2,t);
int r=obj4.select_the_winner();
obj4.Anounch_the_winner(s2,r);
}
