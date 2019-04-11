#include<iostream>
#include<string>
using namespace std;
int main(){	
	int t; 
	cout<<"Number of strings you want to alter: ";
	cin>>t;
	while(t--){	
		int select;
		cout<<"press 1 to insert sub-string"<<endl;
		cout<<"press 2 to delete characters"<<endl;
		cin>>select;
		string s,s_add;
		if (select == 1){
			cout<<"Enter a String:";
			cin>>s;
			cout<<"Enter string you want to add :";
			cin>>s_add;
			int pos;
			cout<<"Enter position to add sub-string:";
			cin>>pos;
			s.insert(pos,s_add);
			cout<<"result:"<<s<<endl;
		}
		else if(select == 2){
			cout<<"Enter a String:";
			cin>>s;
			int start,end;
			cout<<"Enter range of char you want to remove :";
			cin>>start>>end;
			s.erase(start,end);
			cout<<"result :"<<s<<endl;
		}
		else cout<<"invalid Choice"<<endl;		
	}
return 0;	
}

