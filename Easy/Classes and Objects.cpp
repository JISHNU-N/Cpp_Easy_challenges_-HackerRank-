

/*A basic program to familiarize with array of objects. Here I created a dynamic array of objects inorder to store the scores of students in a
class. In the dynamic array of objects, every object posess an array of index 5, which shows the marks of the student object in five subject. You
can use vector instead for the same scenario.
		Kristen is a contender for valedictorian of her high school. She wants to know how many students (if any) have scored higher than her in the 5 exams given during this semester.
		
		Input:The first line contains n, the number of students in Kristen's class. The n subsequent lines contain each student's 5 exam grades for this semester. 
			   3
				30 40 45 10 10
				40 40 40 10 10
				50 20 30 10 10
				
		Output: 1
				Kristen's grades are on the first line of grades. Only 1 student scored higher than her. */
				
				

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student{
	private:
		int scores[5],total,i;
	public:
		Student()
		{
			total=0;
			fill_n(scores,5,0);
		}
		void input() //member function of Student class that takes the input of student's scores.
		{
			for(i=0;i<5;++i)
			{
				cin>>scores[i];
			}
		}
		int calculateTotalScore() //member function to calculate the total score of each student object.
		{
			for(i=0;i<5;++i)
			{
				total+=scores[i];
			}
			return total;
		}
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // A dynamic array of n student objects.
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    int kristen_score = s[0].calculateTotalScore();  // calculate kristen's score

   
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}

