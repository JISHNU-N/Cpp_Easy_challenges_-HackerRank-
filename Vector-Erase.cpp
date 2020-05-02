


/*You are provided with a vector of N integers. Then, you are given 2 queries. For the first query, you are provided with 1
integer, which denotes a position in the vector. The value at this position in the vector needs to be erased. The next query
consists of 2 integers denoting a range of the positions in the vector. The elements which fall under that range should be 
removed. The second query is performed on the updated vector which we get after performing the first query.

		Input: 6
				1 4 6 2 8 9
				2
				2 4
		Output: 3
				1 8 9	
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
	vector<int> v;
    int N,elements,pos,upper,lower;
    cin>>N;
    
	for(int i=0;i<N;++i)
    {
        cin>>elements;
        v.push_back(elements);  //insert elements in the vector
    }
    
    cin>>pos>>upper>>lower;

  
     
   	v.erase(v.begin()+pos-1);  //erase the element in the specified position
    
	v.erase(v.begin()+upper-1,v.begin()+lower-1); //erase the elements in a specified range

   
    cout<<v.size()<<"\n";  //display the size of vector after removing the elements
    
    
    for(int i=0;i<v.size();++i)
    {
    
    cout<<v.at(i)<<' '; //To display the vector after removing the specified elements from it.
    }
   
    return 0;
}

