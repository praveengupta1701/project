/*   Developer :- Praveen Gupta  */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string name, pizza[]={"","Capsicon","Onion     " ,"Cheese-double" ,"Creamy Max"};
	int pizza_size_price[]={0,250,500,1000};
	string roll[]={"","Veg-roll","Egg Roll","Chicken Roll"};
	int roll_price[]={0,100,200,350};
	string bur[]={"","Ginger Burger","Chicken Burger","Veg Burger"};
	int bur_price[]={0,100,150,200};
	string sand[]={"","Club Sandwich       ","Chicken Crispy Sandwich","Extream Veg Sandwich"};
	int sand_price[]={0,250,150,100};
	string bir[]={"","Chicken Biryani","Prawn Biryani","Veg Biryani"};
	int bir_price[]={0,150,250,200};
	string size[]={"","Small","Regular","Large"};
	vector<pair<string,pair<int,int>>> p1_vec,r1_vec,b1_vec,s1_vec,b2_vec;
	vector<int> p1_item,b1_item,s1_item,b2_item,r1_item;
	char gotostart ;
	int choice=0,item1=0,item2=0,item3=0,item4=0,item5=0,pizzachoice=0, quantity=0;
	int pizza_total=0,roll_total=0,bur_total=0,sand_total=0,bir_total=0,total=0;
	int p1_total=0,r1_total=0,b1_total=0,s1_total=0,b2_total=0;
	//system("CLS");
	cout<<"\t\t\t----------Welcome to Global Fast Food Restauant-----------\n\n";
	cout<<"Please Enter Your Name: ";
	cin>>name;
	cout<<"\nHello "<<name<<"\n\nWelcome to our Global Fast Food Restauant\n"<<"\n\nWhat would you like to order?\n\n";
        beginning:
	cout<<"\t\t\t\t--------Menu--------\n\n";
	cout<<"1) Pizzas\n";
	cout<<"2) Burgers\n";
	cout<<"3) Sandwich\n";
	cout<<"4) Rolls\n";
	cout<<"5) Biryani\n\n";
	cout<<"\nPlease Enter your Choice: ";
	cin>>choice;
	if(choice==1)
	 { 
		try_pizza:
		cout<<"\n1) "<<pizza[1]<<"\n";
		cout<<"2) "<<pizza[2]<<"\n";
		cout<<"3) "<<pizza[3]<<"\n";
		cout<<"4) "<<pizza[4]<<"\n";
		cout<<"\nPlease Enter which Flavour would you like to have?: ";
		cin>>pizzachoice;
		if(pizzachoice>=1 && pizzachoice<=4)
		{
			pizzaagain:
			cout<<"\n1) "<<size[1]<<" Rs.250\n"<<"2) "<<size[2]<<" Rs.500\n"<<"3) "<<size[3]<<" Rs.1000\n";
			cout<<"\nChoose Size Please: ";
			cin>>item1;
			if(item1>=1 && item1<=3)
			{
				cout<<"\nPlease Enter Quantity: ";
				cin>>quantity;
				switch(item1)
				{
				case 1: pizza_total = pizza_size_price[item1]*quantity;
				break;

				case 2: pizza_total = pizza_size_price[item1]*quantity;
				break;

				case 3: pizza_total = pizza_size_price[item1]*quantity;
				break;
				default:
				cout<<"Please Enter right Choice: "<<endl;
				goto pizzaagain;
				}
				p1_vec.push_back({pizza[pizzachoice],{quantity,pizza_total}});
				p1_item.push_back(item1);
			}
			p1_total=p1_total+pizza_total;
			cout<<"\nWould you like to try another pizza? Y / N: ";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto try_pizza;
			}
			cout<<"\nWould you like to order anything else? Y / N: ";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			}



		}

	 }


	 else if(choice==2)
	 {
	 	try_bur:
		cout<<"\n1) "<<bur[1]<<" Rs.100"<<"\n";
		cout<<"2) "<<bur[2]<<" Rs.150"<<"\n";
		cout<<"3) "<<bur[3]<<" Rs.200"<<"\n";
		cout<<"\nPlease Enter which Burger you would like to have?: ";
		cin>>item2;
		if(item2>=1 && item2<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(item2)
			{
			case 1: bur_total = bur_price[item2]*quantity;
			break;

			case 2: bur_total = bur_price[item2]*quantity;
			break;

			case 3: bur_total = bur_price[item2]*quantity;
			break;

			}
			b1_vec.push_back({bur[item2],{quantity,bur_total}});
			b1_item.push_back(item2);

			b1_total=b1_total+bur_total;
			cout<<"\nWould you like to try another burgar? Y / N: ";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto try_bur;
			  //return 0;
			}
			cout<<"\nWould you like to order anything else? Y / N: ";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}

		}
	}
	else if(choice==3)
	 {
	 	try_sand:
		cout<<"\n1)  "<<sand[1]<<" Rs.250"<<"\n";
		cout<<"2)  "<<sand[2]<<" Rs.150"<<"\n";
		cout<<"3)  "<<sand[3]<<" Rs.100"<<"\n";
		cout<<"\nPlease Enter which Sandwich you would like to have?: ";
		cin>>item3;
		if(item3>=1 && item3<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(item3)
			{
			case 1: sand_total = sand_price[item3]*quantity;
			break;

			case 2: sand_total = sand_price[item3]*quantity;
			break;

			case 3: sand_total = sand_price[item3]*quantity;
			break;

			}
			s1_vec.push_back({sand[item3],{quantity,sand_total}});
			s1_item.push_back(item3);

			s1_total=s1_total+sand_total;
			cout<<"\nWould you like to try another Sandwich? Y / N: ";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto try_sand;
			}

			cout<<"\nWould you like to order anything else? Y / N: ";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			}
		}
	}


	 else if(choice==4)
	 {
	 	try_roll:
		cout<<"\n1) "<<roll[1]<<" Rs.100"<<"\n";
		cout<<"2) "<<roll[2]<<" Rs.200"<<"\n";
		cout<<"3) "<<roll[3]<<" Rs.350"<<"\n";
		cout<<"\nPlease Enter which you would like to have?: ";
		cin>>item4;
		if(item4>=1 && item4<=3)
		{
			cout<<"\nHow Much Rolls Do you want: ";
			cin>>quantity;
			switch(item4)
			{
			case 1: roll_total = roll_price[item4]*quantity;
			break;

			case 2: roll_total = roll_price[item4]*quantity;
			break;

			case 3: roll_total = roll_price[item4]*quantity;
			break;

			}
			r1_vec.push_back({roll[item4],{quantity,roll_total}});
			r1_item.push_back(item4);

			r1_total=r1_total+roll_total;
			cout<<"\nWould you like to try another Roll? Y / N: ";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto try_roll;
			}
			cout<<"\nWould you like to order anything else? Y / N: ";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			}
			}
 		
	}
	else if(choice==5)
	 {
	 	try_bir:
		cout<<"\n1) "<<bir[1]<<" Rs.150"<<"\n";
		cout<<"2) "<<bir[2]<<" Rs.250"<<"\n";
		cout<<"3) "<<bir[3]<<" Rs.200"<<"\n";
		cout<<"\nPlease Enter which Biryani you would like to have?: ";
		cin>>item5;
		if(item5>=1 && item5<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(item5)
			{
			case 1: bir_total = bir_price[item5]*quantity;
			break;

			case 2: bir_total = bir_price[item5]*quantity;
			break;

			case 3: bir_total = bir_price[item5]*quantity;
			break;

			}
			b2_vec.push_back({bir[item5],{quantity,bir_total}});
			b2_item.push_back(item5);

			b2_total=b2_total+bir_total;
			cout<<"\nWould you like to try another biryani? Y / N: ";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto try_bir;
			}
			cout<<"\nWould you like to order anything else? Y / N:  ";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			}
		}
	}
	else
	{
		//system("CLS");
		cout<<"Please Select Right Option: \n";
		cout<<"\nWould You like to Start the program again? Y / N: " ;
		cin>>gotostart;

		if(gotostart=='Y' || gotostart=='y')
		{
		  goto beginning;
		}
	}

	cout<<endl<<"\n\n";
	if(item1!=0)
	{	
		cout<<"Pizza Flavour"<<"\t"<<"Quantity"<<"\t"<<"Size"<<"\t"<<"Price"<<"\t"<<"Total\n\n";
		int k=0;
		for(const auto &p : p1_vec)
        {
        	cout << p.first << "\t" << p.second.first <<"\t\t"<<size[p1_item[k]]<<"\t"<<pizza_size_price[p1_item[k]]<< "\t" << p.second.second  << endl;
        	k++;
		}
		cout<<"\nTotal Pizza Bill is \t\t\t\t"<<p1_total<<"\n\n";
		total=total+p1_total;
	}
	if(item2!=0)
	{
		cout<<"\nBurgar Type"<<"\t"<<"Quantity"<<"\t"<<"Price"<<"\t"<<"Total\n\n";
		int k=0;
		for(const auto &p : b1_vec)
        {
        	cout << p.first << "\t" << p.second.first <<"\t\t"<<bur_price[b1_item[k]]<< "\t" << p.second.second  << endl;
        	k++;
		}
		cout<<"\nTotal Burgar Bill is \t\t\t"<<b1_total<<"\n";
		total=total+b1_total;
	}
	if(item3!=0)
	{
		cout<<"\nSandwich Type"<<"\t"<<"Quantity"<<"\t"<<"Price"<<"\t"<<"Total\n\n";
		int k=0;
		for(const auto &p : s1_vec)
        {
        	cout << p.first << "\t" << p.second.first <<"\t"<<sand_price[s1_item[k]]<< "\t" << p.second.second  << endl;
        	k++;
		}
		cout<<"\nTotal Sandwich Bill is \t\t\t"<<s1_total<<"\n";
		total=total+s1_total;
	}
	if(item4!=0)
	{
		cout<<"\nRoll Type"<<"\t"<<"Quantity"<<"\t"<<"Price"<<"\t"<<"Total\n\n";
		int k=0;
		for(const auto &p : r1_vec)
        {
        	cout << p.first << "\t" << p.second.first <<"\t\t"<<roll_price[r1_item[k]]<< "\t" << p.second.second  << endl;
        	k++;
		}
		cout<<"\nTotal Rolls Bill is \t\t\t"<<r1_total<<"\n";
		total=total+r1_total;
	}
	if(item5!=0)
	{
		cout<<"\nBiryani Type"<<"\t"<<"Quantity"<<"\t"<<"Price"<<"\t"<<"Total\n\n";
		int k=0;
		for(const auto &p : b2_vec)
        {
        	cout << p.first << "\t" << p.second.first <<"\t\t"<<bir_price[b2_item[k]]<< "\t" << p.second.second  << endl;
        	k++;
		}
		cout<<"\n\nTotal biryani Bill is\t\t\t "<<b2_total<<"\n";
		total=total+b2_total;
	}
	cout<<"\n\nYour Total bill is \t\t\t"<<total<<"\n\nYour Order Will be delivered in 40 Minutes";
	cout<<"\n\n\nThank you For Ordering Fast Food From Global Fast Food Restauant\n";
	cout<<"\n\nWe feel very grateful for serving you\n";
    return 0;
}
