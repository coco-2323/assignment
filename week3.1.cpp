//Name:Lawrence Njeru
//reg no:BCS-05-0066/2025
//Week 3 assignment
#include<iostream>
using namespace std;

int main(){
	int choice;
	
	cout<<"select data bundle:"<<endl;
	cout<<"1.100mb@50 kes:"<<endl;
	cout<<"2.500mb@200 kes:"<<endl;
	cout<<"3.1gb@350 kes:"<<endl;
	cout<<"4.2gb@600kes:"<<endl;
	
	cout<<"enter choice(1-4):";
	cin>>choice;
	
	switch(choice){
		case 1:
			cout<<"you selected 100mb.cost=50 kes"<<endl;
			break;
			
		case 2:
			cout<<"you selected500mb.cost=200 kes"<<endl;
			break;
			
		case 3:
			cout<<"you selected 1gb.cost=350 kes"<<endl;
			break;
			
		case 4:
			cout<<"you selected 2gb.cost=600 kes"<<endl;
			break;
						
		default:
			cout<<"invalid choice"<<endl;
					
					
	}
	
	return 0;
	
}
