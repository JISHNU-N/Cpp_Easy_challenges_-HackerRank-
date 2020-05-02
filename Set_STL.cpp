#include<iostream>
#include<set>
using namespace std;


int main()
{
	set<int> s;
	int test_case;
	cin>>test_case;
	int y,x;
	for(int i=1;i<=test_case;++i)
	{
		
		cin>>y>>x;
		switch(y)
		{
			case 1:s.insert(x);
			break;
			case 2:
				s.erase(x);
			
			break;
			case 3: 
					cout<<(s.find(x)==s.end()?"No":"Yes")<<endl;
			break;
		}
	
}}
