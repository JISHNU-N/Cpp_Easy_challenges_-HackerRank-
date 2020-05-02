

/*The following program is used to familiarize with basic string operations. In the code basic string operations like
adding two strings , finding the size of a string , and exchanging the first letters of two strings and printing them 
can be seen. The most important thing to keep in mind is a string can be treated as an array of characters.
 Therefore you can access the first letter of a string named as string_1 using string_1[0] you do not need to predefine an
 array to do it. 
  input: abcd efg
  output: 4 3
  		 abcdefg
		 ebcd afg
		 
		 */




#include <iostream>

using namespace std;

int main() {
	// Complete the program
  string string_1,string_2;
  cin>>string_1>>string_2;
   
   cout<<string_1.size()<<" "<<string_2.size()<<"\n"; //string_name.size() is used to find the size of the string
   cout<<string_1+string_2<<"\n";
   
   char string_1_first=string_1[0]; //string_1[0] is used to get the first letter of the string_1 , since the string is treated as a character array in here
    
   string_1[0]=string_2[0];
   string_2[0]=string_1_first;
   
   cout<<string_1<<" "<<string_2;
  
    return 0;
}
