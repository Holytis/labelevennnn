#include<iostream>
#include<string>
using namespace std;

int main(){
	char grade ;
	int i = 1 ;
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit."<< endl;
	do{
		cout << "Student ["<< i << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A'){ // if grade is A
			count[0]++;//Do something
		}else if(grade == 'B'){ // if grade is B
			count[1]++;//Do something
		//and so on ... for grade = C, D, F
		}else if(grade == 'C'){// if grade is B
			count[2]++;
		}else if(grade == 'D'){// if grade is B
			count[3]++;
		}else if(grade == 'F'){// if grade is B
			count[4]++;
		}else if(grade == '0'){// if grade is B
			break;
		}else{ 
			cout << "Wrong input. Please input again."<<endl ;// grade is wrong input
			i--;
			//Do something
		}
		i++;
	}while(true);
	int countall = count[0] + count[1] + count[2] + count[3] + count[4];
	cout << "In total "<< countall <<" students."<< endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4];		
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
