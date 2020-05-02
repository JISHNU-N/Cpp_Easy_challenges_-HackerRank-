#include <iostream>
#include <vector>


using namespace std;

int main()
{
    vector<int> v;
    int N,Q,element;
    cin>>N;
    for(int i=0;i<N;++i)
    {
        cin>>element;
        v.push_back(element);
    }
    cin>>Q;
    vector<int> ::iterator a;
    for(int i=0;i<Q;++i)
    {
        cin>>element;
        a=lower_bound(v.begin(),v.end(),element);
        if(v[a-v.begin()]==element)
        {
            cout<<"Yes "<<a-v.begin()+1<<"\n";
        }
        else
        {
            cout<<"No "<<a-v.begin()+1<<"\n";
        }
    }
}

