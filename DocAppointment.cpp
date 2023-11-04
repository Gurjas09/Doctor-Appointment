//Doctor appointment system
#include<iostream>
#include<string.h>
using namespace std;
class appointment
{
	public:
     char fname[50],lname[50],address[50],date[50],time[50];
     int phone,age;
     void registeration()
     {
     	cout<<"Welcome to Doctor appointment booking system"<<endl;
     	cout<<"                      REGISTERATION FORM"<<endl;
     	cout<<"Please enter your First Name:"<<endl;
     	cin>>fname;
     	cout<<"Please enter your Last Name:"<<endl;
     	cin>>lname;
     	cout<<"Please enter your Address:"<<endl;
     	cin>>address;
     	cout<<"Please Enter your Phone number:"<<endl;
     	cin>>phone;
     	cout<<"Please enter your age:"<<endl;
     	cin>>age;
     		cout<<"         April 2022"<<endl;
	cout<<"MON TUE WED THURS FRI SAT SUN"<<endl;
	cout<<"                   1   2   3"<<endl;
	cout<<" 4   5   6    7    8   9  10"<<endl;
	cout<<" 11  12  13   14   15  16  17"<<endl;
	cout<<" 18  19  20   21   22  23  24"<<endl;
	cout<<" 25  26  27   28   29  30    "<<endl;
     	cout<<"Please Enter the date of the appointment:"<<endl;
     	cin>>date;
     	cout<<"Please Enter the time: "<<endl;
     	cin>>time;
     	cout<<endl;
     	cout<<endl;
     	
     }
     void displayData()
     {
     	cout<<"First Name:"<<fname<<endl;
     	cout<<"Last Name:"<<lname<<endl;
     	cout<<"Address:"<<address<<endl;
     	cout<<"Phone Number:"<<phone<<endl;
     	cout<<"Age:"<<age<<endl;
     	cout<<"Date:"<<date<<endl;
     	cout<<"Time:"<<time<<endl;
	 }
};
	 class doctor:public appointment
{
	public:
		void list()
		{
			cout<<endl;
			cout<<"List of Doctors"<<endl;
		}
		void doc()
		{
			cout<<"Select your doctor for appointment"<<endl;
	    }
		
		void one()
		{
			cout<<"1) Dr.Divya Shetty........(Eye Specialist)"<<endl;
			
		}
		void two()
		{
			cout<<"2) Dr.Krishna Thakker.......(Dermatologists)"<<endl;	//skin doctor
		}
		void three()
		{
			cout<<"3) Dr.Mansi Jaiswal.......(Cardiologist)"<<endl;//heart doctor
		}
		void four()
		{
			cout<<"4) Dr.Gurjas Singh..........(Dentist)"<<endl;
		}
		void five()
		{
			cout<<"5) Dr.Manav Pamnani..........(Neurologist)"<<endl;//brain
		}		
};
class payment:public doctor{
	public:
		void pay()
		{
		cout<<endl;
		cout<<endl;
			cout<<"Please select the method of payment"<<endl;
		}
		void cash()
		{
			cout<<"a) Cash"<<endl;
		}
		void debit()
		{
			cout<<"b) Debit Card:"<<endl;
		}
		void online()
		{
			cout<<"c) Online Banking"<<endl;
		}
};
int main()
{
		appointment a;
    	a.registeration();
    	a.displayData();
    	doctor d;
    	d.list();
    	d.one();
    	d.two();
    	d.three();
    	d.four();
    	d.five();
    	d.doc();
    	payment p;
    	p.pay();
    	p.cash();
    	p.debit();
    	p.online();
    	
	
	int num;
	cin>>num;
		switch(num)
		{
			case 1:
				d.one();
				cout<<"Fees Rs.2000"<<endl;
				break;
		
	       	case 2:
			 d.two();
			 cout<<"Fees Rs.1500"<<endl;
			break;
			
			case 3:
				 d.three();
				 cout<<"Fees Rs.2500"<<endl;
				break;
			case 4:
					 d.four();
					 cout<<"Fees Rs.1000"<<endl;
					break;
			case 5:
				 d.five();
				 cout<<"Fees Rs.2300"<<endl;
						break;
						cout<<"Invalid output";
						default:	
							break;
												
	}
	char ch;
	cin>>ch;
	switch(ch)
	{
		case 'a':
			p.cash();
			cout<<"Payment successfull"<<endl;
			break;
			case 'b':
				p.debit();
				cout<<"Payment successfull"<<endl;
				break;
				case 'c':
					p.online();
					cout<<"Payment successfull"<<endl;
					break;
	}
	cout<<"Appointment Booked";

}
