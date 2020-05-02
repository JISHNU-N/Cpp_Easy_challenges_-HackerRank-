#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<string,int> stud;
	int T;
	cin>>T;int type,Y;
	string X;
	for(int i=0;i<T;++i)
	{
		cin>>type;	
		switch(type)
		{
			case 1:cin>>X>>Y;
			
			stud[X]+=Y;
			break;
			case 2:cin>>X;
			stud.erase(X);
			break;
			case 3:cin>>X;
			cout<<stud[X];break;
		}
	}
	
	
	
}
