#include<iostream>
using namespace std;

int main(){
	int a=0,b=0,c=0,d=0,f=0,i=1;
	char grade;
	int count[5] = {'A','B','C','D','F'}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student [" <<i<< "]: ";
		cin >> grade; 
		if(grade==count[0]){ // if grade is A
			a++;
		}else if(grade==count[1]){ // if grade is B
			b++;
		}else if(grade==count[2]){
			c++;
		}else if(grade==count[3]){
			d++;
		}else if(grade==count[4]){
			f++;
		}else if(grade=='0') break;
		else {
			cout<<"Wrong input. Please input again."<<endl;
			continue;
		}
		i++;
		} while(true);
	
	
	cout << "In total "<<i-1<< " students."<<endl;
	cout << "A = " << a <<", ";
	cout << "B = " << b <<", ";	
	cout << "C = " << c <<", ";	
	cout << "D = " << d <<", ";
	cout << "F = " << f ;
	
	return 0;
}
