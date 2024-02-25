/*this is mohsin ali bscs sec-d
this is exercise no :
dated: */

#include <iostream>
#include <iomanip>
#include<string>
using namespace std;

void admin();
int admin_choice;


struct product{
	int product_num;
	string product_name;
	float price;
	
};
product p1[5];




//p1 = &quantity;
void pro();
void back();
void buyer();
void del();


int main(){ 
system ("color 70");
	int choice;
	p1[0].product_num=101;p1[0].product_name="oil";p1[0].price=100;
				p1[1].product_num=1002;p1[1].product_name="milk pak";p1[1].price=80;
				p1[2].product_num=8009;p1[2].product_name="Egg";p1[2].price=30;
				p1[3].product_num=2004;p1[3].product_name="Face Wash";p1[3].price=600;
				p1[4].product_num=2309;p1[4].product_name="T-shirts";p1[4].price=700;
		

cout<<"\t\t\t\t======================================================================================="<<endl;
cout<<"\t\t\t\t_ _ _ _ _ _ _ _ _ _ _ _ _  _WELCOME TO MEHRAN SUPERMART_ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
cout<<"\t\t\t\t======================================================================================="<<endl;

cout<<"\t\t\t\t1).ADMINISTRATOR "<<endl;
cout<<"\t\t\t\t2). BUYER "<<endl;
cout<<"\t\t\t\t3). EXIT "<<endl;
cout<<"\t\t\t\t======================================================================================="<<endl;

cout<<"\t\t\t\tenter your preferences : ";cin>>choice;
system ("cls");
switch (choice){
	
	case 1:{
		 admin();
		break;
	}
	
	case 2:{
		buyer();
		break;
	}
		 
		case 3 : {
		exit ;
		break;
	}
		 
}
return 0;

}
//void interface(){
	

void admin(){
	int chk=0;
	string email;
	string password;
		cout<<endl;
		cout<<"\t\t\t\t======================================================================================="<<endl;
		cout<<"\t\t\t\t_ _ _ _ _ _ _ _  _  WELOCIME TO ADMINISTRATOR PORTAL_ _ _ _ _ _ _ _   "<<endl;
		cout<<"\t\t\t\t======================================================================================="<<endl;
	
		cout<<"\t\t\t\t1).FIRST YOU HAVE TO LOGIN AS A ADMIN   "<<endl;
		cout<<"\t\t\t\tENTER YOUR EMAIL : ";cin>>email;
		cout<<"\t\t\t\tENTER YOUR PASSWORD  : ";cin>>password;	
			chk++;
			while (!(email == "cadetmohsan@gmail.com" && password =="mohsin177" ||email=="farhanali@gmail.com"&& password == "farhan123"||email=="kiran@gmail.com"&& password == "kiran123")){
				cout<<"\t\t\t\tenter correct email and password : ";
				cin>>email;
				
				cout<<"\t\t\t\tpassword : ";
				cin>>password;
				chk++;
				if(chk==2){
				cout<<"\t\t\t\tYou have last attempt enter carefully \n";
				}
				else if(chk==3){
					system ("cls");
					back();
					
				}	
			}

			
		cout<<"\t\t\t\t======================================================================================="<<endl;
		cout<<"\t\t\t\t_ _ _ _ _ _ _ _ _WELCOME USER_ _ _ _ _ _ _ _    "<<endl;
		cout<<"\t\t\t\t======================================================================================="<<endl;	
		cout<<"\t\t\t\t1).SHOW PRODUCTS "<<endl;
		cout<<"\t\t\t\t2). DELETE PRODUCT  "<<endl;
//		cout<<"\t\t\t\t3). EDIT PRODUCT  "<<endl;
		cout<<"\t\t\t\t4). BACK TO MAIN MENU  "<<endl;
		cout<<"\t\t\t\t======================================================================================="<<endl;
			
		int choice1;
		cout<<"\t\t\t\tenter your choice : ";cin>>choice1;
		if(choice1==1){
				system("cls");
		}
		
//	
		
		
		while(choice1==1){
			pro();
		cout<<"\t\t\t\t======================================================================================="<<endl;	
		cout<<"\t\t\t\t1).SHOW PRODUCTS "<<endl;
		cout<<"\t\t\t\t2). DELETE PRODUCT  "<<endl;
		cout<<"\t\t\t\t3). EDIT PRODUCT  "<<endl;
		cout<<"\t\t\t\t4). BACK TO MAIN MENU  "<<endl;
		cin>>choice1;
		}
		if(choice1==2){
			system("cls");
				del();
		}
	
		
		 if(choice1==4){
			system("cls");
		}
		while(choice1==4){
		
			back();
		}
				}
				

				
void pro(){
//		p1[0].product_num=101;p1[0].product_name="oil";p1[0].price=100;
//		p1[1].product_num=1002;p1[1].product_name="milk pak";p1[1].price=80;
//		p1[2].product_num=8009;p1[2].product_name="Egg";p1[2].price=30;
//		p1[3].product_num=2004;p1[3].product_name="Face Wash";p1[3].price=600;
//		p1[4].product_num=2309;p1[4].product_name="T-shirts";p1[4].price=700;
		
		cout<<endl<<"\t\t\t\tSq.  Product no  \t\t Product name \t\t Product Price "<<endl	;
		for(int i=0;i<5;i++)
		{
			if(p1[i].product_num!=-1)
			{
							cout<<"\t\t\t\t"<<i+1<<"). "<<right<<setw(5)<<p1[i].product_num<<right<<setw(32)<<p1[i].product_name<<right<<setw(25)<<p1[i].price<<endl;

			}
		}
		
						
		int choice2;
			cout<<"\t\t\t\t======================================================================================="<<endl;	
		cout<<"\t\t\t\t1).SHOW PRODUCTS  "<<endl;
		cout<<"\t\t\t\t2). DELETE PRODUCT  "<<endl;
//		cout<<"\t\t\t\t3). EDIT PRODUCT  "<<endl;
		cout<<"\t\t\t\t4). BACK TO MAIN MENU  "<<endl;
		cout<<"\t\t\t\tenter your choice : ";cin>>choice2;
//			system("cls");
	while(choice2==1){
			pro();
		cout<<"\t\t\t\t======================================================================================="<<endl;	
		cout<<"\t\t\t\t1).SHOW PRODUCTS  "<<endl;
		cout<<"\t\t\t\t2). DELETE PRODUCT  "<<endl;
//		cout<<"\t\t\t\t3). EDIT PRODUCT  "<<endl;
		cout<<"\t\t\t\t4). BACK TO MAIN MENU  "<<endl;
		cin>>choice2;
		}
		if(choice2==2)
		{
			system("cls");
				del();
		}
	
		
		while(choice2==4){
			system("cls");
			back();
		}
		
			}
			
			
void back(){
	int last;
		cout<<"\t\t\t\t======================================================================================="<<endl;
		cout<<"\t\t\t\t_ _ _ _ _ _ _ _ _ _ _ _ _  _WELCOME TO MEHRAN SUPRMART_ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
		cout<<"\t\t\t\t======================================================================================="<<endl;

		cout<<"\t\t\t\t1).ADMINISTRATOR "<<endl;
		cout<<"\t\t\t\t2).BUYER "<<endl;
		cout<<"\t\t\t\t3).EXIT "<<endl;
		cout<<"\t\t\t\t======================================================================================="<<endl;
		
		cout<<"\t\t\t\tenter your preferences : ";cin>>last;
		system("cls");
		
switch (last){
	case 1:{
		admin();
		break;
	}
	case 2:
		system("cls");
	buyer();
		break;
	
	case 3:{
			exit (0) ;
		break;
	}
}	
}



void buyer(){
		int last;
	int buyer;
	int sum=0;
	char check;
	
		cout<<"\t\t\t\t======================================================================================="<<endl;	
		cout<<"\t\t\t\t1).BUY SOMETHING  "<<endl;
		
		cout<<"\t\t\t\tenter your choice : ";cin>>last;
		
		switch (last){
			
			case 1:{
				
					cout<<endl<<"\t\t\t\tSq.  Product no  \t\t Product name \t\t Product Price "<<endl	;
					for(int i=0;i<5;i++){
					if(p1[i].product_num!=-1)
					cout<<"\t\t\t\t"<<i+1<<"). "<<right<<setw(5)<<p1[i].product_num<<right<<setw(32)<<p1[i].product_name<<right<<setw(25)<<p1[i].price<<endl;}
		
					cout<<"\t\t\t\t======================================================================================="<<endl;
					cout<<"\t\t\t\tEnter the  number (sq no) : ";cin>>buyer;
					int quantity;
					int cash;
					switch(buyer){
						case 1:{
							p1[0].product_num=101;p1[0].product_name="oil";p1[0].price=100;
							cout<<endl<<"\t\t\t\tHow many "<<p1[0].product_name<<" you want to buy : ";cin>>quantity;
							sum +=p1[0].price *quantity;
							
							cout<<endl<<"\t\t\t\tAny thing else sir : ";cin>>check;
							
							while(check=='Y'||check=='y'){
							cout<<"\t\t\t\tEnter Product number (sq no) : ";cin>>buyer;
							if(buyer==2){
								cout<<endl<<"\t\t\t\tHow many "<<p1[1].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[1].price *quantity;
								
							}
							else if(buyer==3){
								cout<<endl<<"\t\t\t\tHow many "<<p1[2].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[2].price *quantity;
								
							}
							
								else if(buyer==4){
								cout<<endl<<"\t\t\t\tHow many "<<p1[3].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[3].price *quantity;
								
							}
								else if(buyer==5){
								cout<<endl<<"\t\t\t\tHow many "<<p1[4].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[4].price *quantity;
								
							}
							cout<<endl<<"\t\t\t\tAre you want to add something : ";cin>>check;	
							}
							if(check=='n'||check=='N'){
							cout<<"\t\t\t\t======================================================================================="<<endl;	
							cout<<endl<<"\t\t\t\t Sir your total bill is  : "<<sum;
							cout<<endl<<"\t\t\t\thow many cash you want to give : ";cin>>cash;
							int back=cash-sum;
							
							cout<<endl<<"\t\t\t\tyour remaining amount is : "<<back;
								exit (0);
							}
						
							break;
						}
						
						case 2: {
							
						
							cout<<endl<<"\t\t\t\tHow many "<<p1[1].product_name<<" you want to buy : ";cin>>quantity;
							sum +=p1[1].price *quantity;
							
							cout<<endl<<"\t\t\t\tAny thing else sir : ";cin>>check;
							
							while(check=='Y'||check=='y'){
							cout<<"\t\t\t\tEnter Product number (sq no) : ";cin>>buyer;
							
							if(buyer==1){
								cout<<endl<<"\t\t\t\tHow many "<<p1[0].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[0].price *quantity;	
							}
						
							else if(buyer==2){
								cout<<endl<<"\t\t\t\tHow many "<<p1[1].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[1].price *quantity;
								
							}
							else if(buyer==3){
								cout<<endl<<"\t\t\t\tHow many "<<p1[2].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[2].price *quantity;
								
							}
							
								else if(buyer==4){
								cout<<endl<<"\t\t\t\tHow many "<<p1[3].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[3].price *quantity;
											}
													
								else if(buyer==5){
								cout<<endl<<"\t\t\t\tHow many "<<p1[4].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[4].price *quantity;
														}
														
							cout<<endl<<"\t\t\t\tAre you want to add something : ";cin>>check;	
							}
							
							if(check=='n'||check=='N'){
							cout<<"\t\t\t\t======================================================================================="<<endl;	
							cout<<endl<<"\t\t\t\t Sir your total bill is  : "<<sum;
							cout<<endl<<"\t\t\t\thow many cash you want to give : ";cin>>cash;
							int back=cash-sum;
							
							cout<<endl<<"\t\t\t\tyour remaining amount is : "<<back;
							exit (0);
							}	
							break;
						}
						case 3:{
							
							cout<<endl<<"\t\t\t\tHow many "<<p1[2].product_name<<" you want to buy : ";cin>>quantity;
							sum +=p1[2].price *quantity;
							
							cout<<endl<<"\t\t\t\tAny thing else sir : ";cin>>check;
							
							while(check=='Y'||check=='y'){
							cout<<"\t\t\t\tEnter Product number (sq no) : ";cin>>buyer;
							
							if(buyer==1){
								cout<<endl<<"\t\t\t\tHow many "<<p1[0].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[0].price *quantity;	
							}
						
							else if(buyer==2){
								cout<<endl<<"\t\t\t\tHow many "<<p1[1].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[1].price *quantity;
								
							}
							else if(buyer==3){
								cout<<endl<<"\t\t\t\tHow many "<<p1[2].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[2].price *quantity;
								
							}
							
								else if(buyer==4){
								cout<<endl<<"\t\t\t\tHow many "<<p1[3].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[3].price *quantity;
											}
													
								else if(buyer==5){
								cout<<endl<<"\t\t\t\tHow many "<<p1[4].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[4].price *quantity;
														}
														
							cout<<endl<<"\t\t\t\tAre you want to add something : ";cin>>check;	
							}
							
							if(check=='n'||check=='N'){
							cout<<"\t\t\t\t======================================================================================="<<endl;	
							cout<<endl<<"\t\t\t\t Sir your total bill is  : "<<sum;
							cout<<endl<<"\t\t\t\thow many cash you want to give : ";cin>>cash;
							int back=cash-sum;
							
							cout<<endl<<"\t\t\t\tyour remaining amount is : "<<back;
							exit (0);
							}
							
							
							
							break;
						} 
						
						case 4: {
							
						
							cout<<endl<<"\t\t\t\tHow many "<<p1[3].product_name<<" you want to buy : ";cin>>quantity;
							sum +=p1[3].price *quantity;
							
							cout<<endl<<"\t\t\t\tAny thing else sir : ";cin>>check;
							
							while(check=='Y'||check=='y'){
							cout<<"\t\t\t\tEnter Product number (sq no) : ";cin>>buyer;
							
							if(buyer==1){
								cout<<endl<<"\t\t\t\tHow many "<<p1[0].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[0].price *quantity;	
							}
						
							else if(buyer==2){
								cout<<endl<<"\t\t\t\tHow many "<<p1[1].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[1].price *quantity;
								
							}
							else if(buyer==3){
								cout<<endl<<"\t\t\t\tHow many "<<p1[2].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[2].price *quantity;
								
							}
							
								else if(buyer==4){
								cout<<endl<<"\t\t\t\tHow many "<<p1[3].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[3].price *quantity;
											}
													
								else if(buyer==5){
								cout<<endl<<"\t\t\t\tHow many "<<p1[4].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[4].price *quantity;
														}
														
							cout<<endl<<"\t\t\t\tAre you want to add something : ";cin>>check;		
							}
							
								if(check=='n'||check=='N'){
							cout<<"\t\t\t\t======================================================================================="<<endl;	
							cout<<endl<<"\t\t\t\t Sir your total bill is  : "<<sum;
							cout<<endl<<"\t\t\t\thow many cash you want to give : ";cin>>cash;
							int back=cash-sum;
							
							cout<<endl<<"\t\t\t\tyour remaining amount is : "<<back;
							exit (0);
							}
							break;
						}
					}
						case 5: {
							
						
							cout<<endl<<"\t\t\t\tHow many "<<p1[4].product_name<<" you want to buy : ";cin>>quantity;
							sum +=p1[4].price *quantity;
							
							cout<<endl<<"\t\t\t\tAny thing else sir : ";cin>>check;
							
							while(check=='Y'||check=='y'){
							cout<<"\t\t\t\tEnter Product number (sq no) : ";cin>>buyer;
							
							if(buyer==1){
								cout<<endl<<"\t\t\t\tHow many "<<p1[0].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[0].price *quantity;	
							}
						
							else if(buyer==2){
								cout<<endl<<"\t\t\t\tHow many "<<p1[1].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[1].price *quantity;
								
							}
							else if(buyer==3){
								cout<<endl<<"\t\t\t\tHow many "<<p1[2].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[2].price *quantity;
								
							}
							
								else if(buyer==4){
								cout<<endl<<"\t\t\t\tHow many "<<p1[3].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[3].price *quantity;
											}
													
								else if(buyer==5){
								cout<<endl<<"\t\t\t\tHow many "<<p1[4].product_name<<" you want to buy : ";cin>>quantity;
								sum +=p1[4].price *quantity;
														}
														
								cout<<endl<<"\t\t\t\tAre you want to add something : ";cin>>check;	
							}
							
								if(check=='n'||check=='N'){
							cout<<"\t\t\t\t======================================================================================="<<endl;	
							cout<<endl<<"\t\t\t\t Sir your total bill is  : "<<sum;
							cout<<endl<<"\t\t\t\thow many cash you want to give : ";cin>>cash;
							int back=cash-sum;
							
							cout<<endl<<"\t\t\t\tyour remaining amount is : "<<back;
							
							exit (0);
							}	
							break;
						}
					
			}	
					}
			}

void del(){
	
		for(int i=0;i<5;i++){
					if(p1[i].product_num!=-1)
					cout<<"\t\t\t\t"<<i+1<<"). "<<right<<setw(5)<<p1[i].product_num<<right<<setw(32)<<p1[i].product_name<<right<<setw(25)<<p1[i].price<<endl;}
		
	int d;
	cout<<endl<<"\t\t\t\tenter the product id which you want to delete : ";cin>>d;
	for(int i=0;i<5;i++)
	{
			if(d==p1[i].product_num)
			{
							p1[i].product_num=-1;
				cout<<endl<<"\t\t\t\tdlt successfully "<<endl;
				break;
			}
	}
		cout<<"\t\t\t\t======================================================================================="<<endl;	
		cout<<"\t\t\t\t1).SHOW PRODUCTS  "<<endl;
		cout<<"\t\t\t\t2). DELETE PRODUCT  "<<endl;
//		cout<<"\t\t\t\t3). EDIT PRODUCT  "<<endl;
		cout<<"\t\t\t\t4). BACK TO MAIN MENU  "<<endl;
		
		int choice3;
		cout<<endl<<"\t\t\t\teter the number : ";cin>>choice3;
		
		
		if(choice3==1){
			system("cls");
				pro();
			
		}
		else if(choice3==2){
			del();
		}
			else if(choice3==4){
			back();
		}
	
	
	
}

