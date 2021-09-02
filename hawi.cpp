#include<iostream>
using namespace std;


void Admin_menu(){
 
	system("cls");
	int option;
	cout<<"\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	cout<<"\n\tPress 1 to ADD PRODUCT";
	cout<<"\n\tPress 2 to DISPLAY ALL PRODUCTS";
	cout<<"\n\tPress 3 to DELETE PRODUCT";
	cout<<"\n\tPress 4 to GO BACK TO MAIN MENU";
	cout<<"\n\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@";
	 
	cout<<"\n\n\tOption: ";
	cin>>option;
	switch(option)
	{
	case 1: system("cls");
	//add_product();
	break;
	
	case 2: //show_all_product();
	break;
	
	case 3:
	int num;
	system("cls");	
	cout<<"\n\n\tPlease Enter The Product Number: ";
	cin>>num;
	//display_record(num);
	break;
	
	case 4: //edit_product();
	break;

	case 5: //delete_product();
	break;
		case 6: system("cls");
	break;
	
	default:Admin_menu();
	}
}	 
