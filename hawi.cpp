#include<iostream>
using namespace std;

struct product{
	int product_id;
	string product_id_add;
	string product_name;
	int quantity;
	float price;
	float discount;//by percent
	string product_type;
	
}add_pro;
void add_product(product added_pro);
  //void show_add_product(product added_pro);
void Admin_menu(){
 int option;
	switch(option)
	{
		system("cls");
	case 1: 
	add_product(add_pro);
	break;
	
	case 2: 
	show_add_product(add_pro);
	break;
	
	//case 3:
}
 
}
int main(){
int option;

	
	system("cls");
	cout<<"\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	cout<<"\n\tPress 1 to ADD PRODUCT";
	cout<<"\n\tPress 2 to DISPLAY ALL PRODUCTS";
//	cout<<"\n\tPress 3 to DELETE;
	cout<<"\n\tPress 4 to GO BACK TO MAIN MENU";
	cout<<"\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	 
	cout<<"\n\n\tOption: ";
	cin>>option;
	Admin_menu();
}
void 	add_product(product added_pro){
	product add[100];
char press;
int num;
       cout<<"**********************  The programm already have clothes,shoes and bags.  ****************************\n";
	   cout<<"*********************  Do you want to add another type of product?"<<endl;
	   cout<<"Press Y to continue or N to go back to menu\n";
	   cin>>press;
	   if(press='Y'){
	   	cout<<"What is the your Product type: "<<endl;
	   	cin>>added_pro.product_type;
	   	cout<<"How many products are their in your product type: "<<endl;
	   	cin>>num;
	   	for(int i=0;i<num;i++){
	   		cout<<"The product in "<<i+1<<endl;
	   		cout<<"Enter the ID of the Product : ";
	   		cin>>add[i].product_id_add;
	   		cout<<"The Name of the Product : ";
	   		cin>>add[i].product_name;
	   		cout<<"The price of the product : ";
	   		cin>>add[i].price;
	   		cout<<"THe quantity of your product :";
	   		cin>>add[i].quantity;
	   		cout<<"The dicount of the Product : ";
	   		cin>>add[i].discount;
	   		
	   		cout<<endl;
	   		
	   		
	   		
		   }
	   	
	   	}

	   	
}
