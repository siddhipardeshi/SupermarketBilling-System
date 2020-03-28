#include<iostream>
#include<string>
#include<fstream>
#include<queue>
using namespace std;
static int count;
queue <string> que; 
void show(queue <string> g)
{
		while(!g.empty())
		{
			cout<<g.front()<<endl;
			g.pop();
		}
}
class superMarket
{
	char name[30];
	float cost;
	long long int contactNo;
	int Order[6][4];
	string itemName[6][4];
	
	public:
			superMarket()
			{
				cost = 0;
				Order[0][0]=600;
				Order[0][1]=500;
				Order[0][2]=900;
				Order[0][3]=1000;
				Order[1][0]=1000;
				Order[1][1]=500;
				Order[1][2]=400;
				Order[1][3]=300;
				Order[2][0]=500;
				Order[2][1]=100;
				Order[2][2]=150;
				Order[2][3]=100;
				Order[3][0]=1000;
				Order[3][1]=500;
				Order[3][2]=400;
				Order[3][3]=300;
				Order[4][0]=60;
				Order[4][1]=50;
				Order[4][2]=40;
				Order[4][3]=30;
				Order[5][0]=200;
				Order[5][1]=100;
				Order[5][2]=40;
				Order[5][3]=20;
				itemName[0][0]="Shirts-cotton King";
				itemName[0][1]="Shirts-Raymond";
				itemName[0][2]="Shirts-Peter England";
				itemName[0][3]="Shirts-Van Heusen";
				itemName[1][0]="Shoes-Puma";
				itemName[1][1]="Shoes-Bata";
				itemName[1][2]="Shoes-Flite";
				itemName[1][3]="Shoes-HiFly";
				itemName[2][0]="Accessories-Watch";
				itemName[2][1]="Accessories-Earrings";
				itemName[2][2]="Accessories-Perfumes";
				itemName[2][3]="Accessories-Bracelets";
				itemName[3][0]="Jeans-Pepe Jeans";
				itemName[3][1]="Jeans-Levi's";
				itemName[3][2]="Jeans-Wrangler";
				itemName[3][3]="Jeans-lee";
				itemName[4][0]="Cosmetics-Powder";
				itemName[4][1]="Cosmetics-Creams";
				itemName[4][2]="Cosmetics-Facewash";
				itemName[4][3]="Cosmetics-Soap";	
				itemName[5][0]="Eatables-Pizza";
				itemName[5][1]="Eatables-Burger";
				itemName[5][2]="Eatables-Ice creams";
				itemName[5][3]="Eatables-Cadbury";
							
				
			}
		/*	inline char * get_name()
			{
				return name;
			}
		*/
			void acceptOrder();
			void Display();
			int acceptItem( int );
			void fileSave(int, int, int);						
			
};
	void superMarket::Display()
	{
		cout<<"\n"<<name<<"\t\t"<<contactNo<<endl;
		
	}
			
			void superMarket:: acceptOrder()
			{	char z;
				cost=0;
				int item,Quantity,Brand;
				cout<<"\n-----------------------------------------------------------------------------------\n";
				cout<<"\nEnter name:";
				cin>>name;
				cout<<"\nEnter contact no:";
				cin>>contactNo;
				do
				{	
					cout<<"Sr No \t\t List of items \n";
					cout<<"\n 1 \t\t Shirts \n 2 \t\t Shoes \n 3 \t\t Accessories \n 4 \t\t Jeans/Trousers \n 5 \t\t Cosmetics \n 6 \t\t Eatables \n";
					cout<<"Enter ur choice:";
					cin>>item;
					que.push(name);
					Brand=acceptItem(item);
					cout<<"Enter quantity:";
					cin>>Quantity;
				//	fileSave(item,Quantity,Brand);
					cost=(Order[item-1][Brand-1])*Quantity+cost;
					cout<<"Total Cost:"<<cost;
									
					cout<<"\nAny other choice?(y/n):";
					cin>>z;
					while(z!='y'&&z!='Y'&&z!='n'&&z!='N')
					{	cout<<"\nEnter correct choice";
						cin>>z;
					}		
				}while(z=='y' ||z=='Y');
			}			
			int superMarket::acceptItem( int item)
			{	int brand;
				switch(item)
				{
					case 1: 	cout<<"\n Brand \t\t Cost";
								cout<<" \n 1-Cotton King \t\t 600 \n 2-Raymond \t\t 500 \n 3-Peter England \t 900 \n 4-Van Heusen \t\t 1000\nEnter ur choice\n";
								cin>>brand;
								return brand;										
					case 2: 	cout<<"\n Brand \t\t Cost";
								cout<<" \n 1-Puma \t\t 1000 \n 2-Bata \t\t 500 \n 3-Flite \t\t 400 \n 4-HiFly \t\t 300\n Enter ur choice\n";
								cin>>brand;
								return brand;	
					case 3: 	cout<<"\n Brand \t\t Cost";
								cout<<" \n 1-Watch \t\t 500 \n 2-Earrings \t\t 100 \n 3-Perfumes \t\t 150 \n 4-bracelates \t\t 100\n Enter ur choice\n";
								cin>>brand;
								return brand;	
					case 4: 	cout<<"\n Brand \t\t Cost";
								cout<<" \n 1-Pepe Jeans  \t\t 1000 \n 2-Levi's \t\t 500 \n 3-Wrangler \t\t 400 \n 4-Lee \t\t 300\n Enter ur choice\n";
								cin>>brand;
								return brand;	
					case 5: 	cout<<"\n Brand \t\t Cost";
								cout<<" \n 1-Powder \t\t 60 \n 2-Creams \t\t 50 \n 3-Facewash \t\t 40 \n 4-Soap \t\t 30\n Enter ur choice\n";
								cin>>brand;
								return brand;	
					case 6: 	cout<<"\n Brand \t\t Cost";
								cout<<" \n 1-Pizza \t\t 200 \n 2-Burger \t\t 100 \n 3-ice creams \t\t 40 \n 4-Cadbury \t\t 20\n Enter ur choice\n";
								cin>>brand;
								return brand;				
				}
			}
			
/*void superMarket::filesave(int i,int q,int b)
{
	superMarket s1;
	cout<<"\nenter number of customers"
}*/
int main()
{	
	
	superMarket s;
	int repeat,choice;
	char ch;
	 do
    {
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"\t\t\t\tSUPERMARKET\n";
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"\t\t\t 1.Accept Order 2-serve order 3-Display contents from file Market \n Enter ur choice";
        cin>>choice;
        switch(choice)
        {
            case 1:{
            			ofstream out;
						out.open("market.dat",ios::binary | ios::app);
						do
						{		
							s.acceptOrder();
							out.write((char *)&s,sizeof(s));
							cout<<"customer's details are written successfully to the File named market!!!";
							cout<<"\nPress 1 to continue";
							cin>>repeat;
						}while(repeat==1);
						out.close();
						break;
					}
			case 2:{		
							cout<<"\norder is served for:"<<que.front()<<endl;
							que.pop();
							cout<<"\nlist of orders which are not served:\n";
							cout<<"\nNAME  \n";
							show(que);
						
						break;
					}
            case 3:{	cout<<"\nNAME \t\t CONTACT NO. \n";
            			ifstream in;
            			in.open("market.dat",ios::binary);
            			while(in)
            			{
            				in.read((char*)&s,sizeof(s));
            				if(in.eof()!=0)
            					break;
							s.Display();
						}
						in.close();
					}
					
		            break;
        }
        cout<<"\nany other operation?(y/n)\n";
        cin>>ch;
        
        }while(ch=='y'||ch=='Y');
	
	
	return 0;	
	
}
