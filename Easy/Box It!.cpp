

/* This is a program to understand the basics in OOP. The following program explains the basics in object oriented programming. The program
shows the differnt types of constructors, getter functions and the method of operator overloading.
		Input:5
			  2 3 4 5
			  4
 			  5
			  4
			  2 4 6 7

		Output:3 4 5
			   60
			   3 4 5
			   60
			   4 6 7
			Based on the first input different aspects of the object oriented programme defined in the program is called. Refer the C++ documentation 
			of each of them for better understanding. 
*/

#include<bits/stdc++.h>

using namespace std;




class Box{    //Implement the class Box  
    private:
               //l,b,h are integers representing the dimensions of the box
    public:   
	int l,b,h;      //Default constructor
        Box()        // Constructors: 
        {                // Box();
        l=0;b=0;h=0;
        }
        Box(int length,int breadth,int height)   // Box(int,int,int); parameterized constructor
        {
            l=length;
            b=breadth;
            h=height;
        }
        Box(const Box&B)            // Box(Box); copy constructor
        {
            l=B.l;
            b=B.b;
            h=B.h;        
        }
        int getLength()            // int getLength(); // Return box's length //getter function
        {
            return l;
        }
        int getBreadth()            // int getBreadth (); // Return box's breadth getter function
        {
            return b;
        }
        int getHeight()            // int getHeight ();  //Return box's height
        {
            return h;
        }
        long long int CalculateVolume()            // long long CalculateVolume(); // Return the volume of the box
        {
            return (long long) l*b*h;  //type casting is used in returning the function values, inorder to handle large amount of data
        }
        bool operator <(Box& B) //operator overloading The operator < is overloaded here
        {
            if((l<B.l) || ((b<B.b) && (l==B.l)) || ((h<B.h) && (b==B.b) && (l==B.l)))

                return true;
            else
                return false;
        }
      };

  ostream& operator<<(ostream& out, Box& B)
        {
            out<<B.l<<" "<<B.b<<" "<<B.h;
        }
void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;  // the default constructor is called in here
		}
		if(type == 2)
		{ 
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);  //parameterized constructor is called here
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h); 
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else  // the length,breadth and height of two box objects are compared in here.
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;  //The volume of a box object is calculated in here
		}
		if(type==5)
		{
			Box NewBox(temp);  // copy constructor is called in here, Where you inherit the members of an object into another object.
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();  //The above check2 function is called in the main.
}
