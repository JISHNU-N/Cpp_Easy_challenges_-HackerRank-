
/* The following program is a basic program about using classes and objects in C++. The program brings the basic idea of how object oriented programming is done
in classes. I also added the Standard template library function string stream inorder to make a string stream from integers and strings. Stringstream is an 
efficient class, you can refer the C++ documentation inorder to get a good idea about how it works. The logic of the program is very simple. It's about 
how to do it using OOP.
			Input: 15
					john
					carmack
					10
			Output: 15
					carmack, john
					10

					15,john,carmack,10 
					
					The end of the output is done using stringstream class
 */

#include <iostream>
#include <sstream>  //The STL containing the function stringstream

using namespace std;




class Student{	// Class declaration, Class is the blueprint of objects.
	private:   //Private is an access specifier, It shows the scope of the functions and variables declared under it. The private members cannot be used outside the class
				//it's a good practice to declare variables in private section, inorder to improve the data security.
		int std,b,count;
		string first,last;
	public:   //Public members can be used anywhere the code is usable in the program
		Student() //This is known as a class constructor. This where you initialize the class variables
		{
			std=0;b=0;
			first.clear(); last.clear();
		}
		void set_age(int a) //Known as the setter function . Inorder to initialize the age with value it is classed.
		{
			b=a;
		}
		void set_first_name(string str)  //setter function for first name
		{
			first=str;
		}
		void set_last_name(string s)	//setter function for last_name. Setter functions are usually called when input is taken from the user.
		{
			last=s;
		}
		void set_standard(int st) //setter function for standard.
		{
			std=st;
		}
		int get_age()  //this is known as the getter function, Used to return the value stored. 
		{
			return b;
		}
		string get_first_name() //getter function for first name. Getter function returns the variable after different operations are done on them by member functions of class. 
		{
			return first;
		}
		string get_last_name() //getter function for last name. In here no opertions are done on the variables. So it is returned as it is initialized.
		{
			return last;
		}
		int get_standard()  //getter function for standard
		{
			return std;
		}
		string to_string() 
		{
			count=0;
			stringstream ss; //declaring a stringstream named ss
			
			ss<<b<<","<<first<<","<<last<<","<<std; //string stream is used to convert integers and strings to a string stream. And they are seperated by comma
			
			return ss.str(); //The stringstream is converted back to the string
	}
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
