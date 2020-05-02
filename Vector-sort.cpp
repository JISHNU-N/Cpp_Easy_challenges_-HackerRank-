

/* The following program illustrates how a vector is sorted. The program also contains some of the basic functions of
vectors inorder to perform various operations.
		Input: 5
			   1 6 10 8 4	
		In the first line of the input 5 it represents the number of inputs to the vector.
		 The second line represents the vector inputs.
		
		Output: 1 4 6 8 10
		
		*/


#include<algorithm> //STL for the sort function
#include <vector>   //includes the STL vector inorder to use vector functions
#include <iostream>



using namespace std;


int main() {
  int number_of_inputs,a;
  
  vector<int> v;   //declaring an integer vector v
  cin>>number_of_inputs ;
  
  for(int i=0;i<number_of_inputs;++i)
  {
  	cin>>a;
  	v.push_back(a); //the function push back is used to insert elements in to the vector
  }
  
  sort(v.begin(),v.end());  //v.begin() represents the beginning of the vector. and v.end() represents the end of the vector.
  
  for(int i =0;i<v.size();++i)  // v.size() is used to get the size of the vector.
  {
  	cout<<v.at(i)<<" "; //vector_name.at(position) gets the vector element at that position
	}
  
  
 
    return 0;
}

