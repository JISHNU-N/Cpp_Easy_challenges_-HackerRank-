

/* the following code is the basic familiarization of the user defined data type structure. Unlike arrays which are only capable of holding the
same types of data, Structures are capable of storing group of items which are of non similar types. Here I created a structure Student which stores
the age, standard , first_name, last_name of a student. As you can see the structure stores the non similar data types int and string grouped as one
in it's structure. It's the main advanatage of a structure over other data types.
		input: 15
			   john
			   carmack
  			   10
  		output: 15 john carmack 10


 */

#include <iostream>

using namespace std;

struct Student // structure declaration 
{
	int age,standard;
	string first_name,last_name;
}; //semi colon at the end of the closing braces of a structure is necessary when defining it.

int main() {
    Student st; // This declaring the structure variable. The syntax for structure variable declaration is structure_name variable_name;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;//structure variable is used to access the variables inside the structure. structure_variable.variable_name_inside_the structure
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}
