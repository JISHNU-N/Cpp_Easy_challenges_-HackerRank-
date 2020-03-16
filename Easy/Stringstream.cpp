

/*the following program is used to seperate the integers in a string seperated by comma and print them line by line using the standard library
functions stringstream. The character seperating the integers can not only be comma(,) but also any other characters. 
for example:
		input : 1,2,3
		output : 1
				 2
				 3 	
	inorder to identify the number at the end in the program i added a comma at the end of the string. You will understand it when reading the code.
		
	
	*/

#include <sstream>  //sstream is the STL where string stream function us located
#include <vector> //inorder to use the vector datatype
#include <iostream> 

using namespace std;


vector<int> parseInts(string str) //user defined vector type function
{ 
    str+=",";  				//added a comma at the end of the string to make the test condition true for character at the end of str in while loop
    stringstream ss(str);  //string is converted into stream using the STL template stringstrema
   
	char ch;
    int a;
    vector<int> output; //vectors are memory inefficient compared to the array
    
	
	while(ss>>a>>ch)   //condition is true if an integer is followed by a character in string strean : eg: 1, 2 ,
        output.push_back(a);  //push_back will add elements in the vector

	
	return output;  //returns a vector because the function data type is vector
    // Complete this function
}


int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);  //function calling
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";  //the integers in the input string is printed in line by line
    }
    
    return 0;
}

