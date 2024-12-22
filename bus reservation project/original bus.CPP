/*This Program related to bus reservation.It includes all the possible details that the
actual reservation system include......*/
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
#include<stdio.h>
#include<iomanip.h>
class system
{
	private:  //by default
	int age,r;
	int  busmon,buswed,busfri,bus1sun,bus1tue,bus1sat,bus2thus,bus3mon,bus3sat,bus4wed,bus4thus,bus4sun;
	char bmon[5],bwed[5],bfri[5],b1sun[5],b1tue[5],b1sat[5],b2thus[5],b3mon[5],b3sat[5],b4wed[5],b4thus[5],b4sun[5];
	static int npeople;
	char day[5],btime1[15],btime2[15],btime3[15],b1time1[15],b1time2[15],b1time3[15],b2time1[15],b3time1[15],b3time2[15],b4time1[15],b4time2[15],b4time3[15];
	char name[10],lname[10],destination[50],destination1[50],destination2[50],destination3[50],destination4[50],des[50];
	char des2[50],destination5[50],destination6[50],destination7[50],destination8[50],destination9[50];
	char gen[50];

	//public section

	public:

	void setdata();
	void businfo();
	void availablebuses();
	void getdata();
	void checkdetls();
	void dilete();
};
int system :: npeople;
//RESERVATION
void system :: setdata()
{
	int i;
	char c;
	cout<<"Enter source city :: ";
	cin>>des;
	cout<<"Enter destination city :: ";
	cin>>des2;
	ifstream in("businfo.txt");
	in>>destination;
	in>>destination1;

	in>>bmon;
	in>>busmon;
	in>>btime1;

	in>>bwed;
	in>>buswed;
	in>>btime2;

	in>>bfri;
	in>>busfri;
	in>>btime3;

	in>>destination2;
	in>>destination3;

	in>>b1sun;
	in>>bus1sun;
	in>>b1time1;

	in>>b1tue;
	in>>bus1tue;
	in>>b1time2;

	in>>b1sat;
	in>>bus1sat;
	in>>b1time3;

	in>>destination4;
	in>>destination5;

	in>>b2thus;
	in>>bus2thus;
	in>>b2time1;

	in>>destination6;
	in>>destination7;

	in>>b3mon;
	in>>bus3mon;
	in>>b3time1;

	in>>b3sat;
	in>>bus3sat;
	in>>b3time2;

	in>>destination8;
	in>>destination9;

	in>>b4wed;
	in>>bus4wed;
	in>>b4time1;

	in>>b4thus;
	in>>bus4thus;
	in>>b4time2;

	in>>b4sun;
	in>>bus4sun;
	in>>b4time3;
	in>>r;
if(strcmp(des,destination)==0 && strcmp(des2,destination1)==0)
{
	cout<<"Enter Day of journey :: ";
	cin>>day;

	if(strcmp(day,bmon)==0)
	{
		if(busmon>=1)
		  {
				cout<<"Enter number of people :: ";
				cin>>npeople;
				if(npeople>busmon)
				{
					cout<<"only "<<busmon<<" seats available...";
				}
				else
				{
					if(npeople>1)
					{
						for(i=1;i<=npeople;i++)
						{
							in>>r++;
							in>>busmon--;
							getdata();
							ofstream x("businfot.txt",x.app);
							x<<destination<<endl;
							x<<destination1<<endl;
							x<<bmon<<endl;
							x<<btime1<<endl;
							x<<r<<endl;
							x.close();
						}
					 }
					 else
					 {
						in>>r++;
						in>>busmon--;
						getdata();
						ofstream x("businfot.txt",x.app);
						x<<destination<<endl;
						x<<destination1<<endl;
						x<<bmon<<endl;
						x<<btime1<<endl;
						x<<r<<endl;
						x.close();
					 }
					 cout<<endl<<"Your Ticket booked successfully....."<<endl;
				 }
			}
			else
			{
				cout<<"No more bookings available on that day......";
			}
	}
	else if(strcmp(day,bwed)==0)
	{
		if(buswed>=1)
		{
			cout<<"Enter number of people :: ";
			cin>>npeople;
			if(npeople>buswed)
			{
				cout<<"only "<<buswed<<" seats available...";
			}
			else
			{
					if(npeople>1)
					{
						for(i=1;i<=npeople;i++)
						{
							in>>r++;
							in>>buswed--;
							getdata();
							ofstream x("businfot.txt",x.app);
							x<<destination<<endl;
							x<<destination1<<endl;
							x<<bwed<<endl;
							x<<btime2<<endl;
							x<<r<<endl;
							x.close();
						}
					}
					else
					{
						in>>r++;
						in>>buswed--;
						getdata();
						ofstream x("businfot.txt",x.app);
						x<<destination<<endl;
						x<<destination1<<endl;
						x<<bwed<<endl;
						x<<btime2<<endl;
						x<<r<<endl;
						x.close();
					}
					cout<<endl<<"Your Ticket booked successfully....."<<endl;
			}
		}
		else
		{
			cout<<"No more bookings available on that day......";
		}
	}
	else if(strcmp(day,bfri)==0)
	{
		if(busfri>=1)
		{
			cout<<"Enter number of people :: ";
			cin>>npeople;
			if(npeople>busfri)
			{
				cout<<"only "<<busfri<<" seats available...";
			}
			else
			{
				if(npeople>1)
				{
					for(i=1;i<=npeople;i++)
					{
						in>>r++;
						in>>busfri--;
						getdata();
						ofstream x("businfot.txt",x.app);
						x<<destination<<endl;
						x<<destination1<<endl;
						x<<bfri<<endl;
						x<<btime3<<endl;
						x<<r<<endl;
						x.close();
					}
				}
				else
				{
					in>>r++;
					in>>busfri--;
					getdata();
					ofstream x("businfot.txt",x.app);
					x<<destination<<endl;
					x<<destination1<<endl;
					x<<bfri<<endl;
					x<<btime3<<endl;
					x<<r<<endl;
					x.close();
				}
				cout<<endl<<"Your Ticket booked successfully....."<<endl;

			}
		}
		else
		{
			cout<<"No more bookings available......";
		}
	}
	else
	{
		cout<<"No bookings available on that day......";
	}
}
else if(strcmp(des,destination2)==0 && strcmp(des2,destination3)==0)
{
	cout<<"Enter Day of journey :: ";
	cin>>day;
	if(strcmp(day,b1sun)==0)
	{
			if(bus1sun>=1)
			{
				cout<<"Enter number of people :: ";
				cin>>npeople;
				if(npeople>bus1sun)
				{
					cout<<"only "<<bus1sun<<" seats available...";
				}
				else
				{
					if(npeople>1)
					{
						for(i=1;i<=npeople;i++)
						{
							in>>r++;
							in>>bus1sun--;
							getdata();
							ofstream x("businfot.txt",x.app);
							x<<destination2<<endl;
							x<<destination3<<endl;
							x<<b1sun<<endl;
							x<<b1time1<<endl;
							x<<r<<endl;
							x.close();
						}
					 }
					else
					{
						in>>r++;
						in>>bus1sun--;
						getdata();
						ofstream x("businfot.txt",x.app);
						x<<destination2<<endl;
						x<<destination3<<endl;
						x<<b1sun<<endl;
						x<<b1time1<<endl;
						x<<r<<endl;
						x.close();
					}
					cout<<endl<<"Your Ticket booked successfully....."<<endl;
				 }
			}
			else
			{
				cout<<"No more bookings available on that day......";
			}
	}
	else if(strcmp(day,b1tue)==0)
	{
		if(bus1tue>=1)
		{
			cout<<"Enter number of people :: ";
			cin>>npeople;
			if(npeople>bus1tue)
			{
				cout<<"only "<<bus1tue<<" seats available...";
			}
			else
			{
				if(npeople>1)
				{
					for(i=1;i<=npeople;i++)
					{
						in>>r++;

						in>>bus1tue--;
						getdata();
						ofstream x("businfot.txt",x.app);
						x<<destination2<<endl;
						x<<destination3<<endl;
						x<<b1tue<<endl;
						x<<b1time2<<endl;
						x<<r<<endl;
						x.close();
					}
				}
				else
				{
					in>>r++;
					in>>bus1tue--;
					getdata();
					ofstream x("businfot.txt",x.app);
					x<<destination2<<endl;
					x<<destination3<<endl;
					x<<b1tue<<endl;
					x<<b1time2<<endl;
					x<<r<<endl;
					x.close();
				}
				cout<<endl<<"Your Ticket booked successfully....."<<endl;
			}
		}
		else
		{
			cout<<"No more bookings available on that day......";
		}
	}
	else if(strcmp(day,b1sat)==0)
	{
		if(bus1sat>=1)
		{
			cout<<"Enter number of people :: ";
			cin>>npeople;
			if(npeople>bus1sat)
			{
				cout<<"only "<<bus1sat<<" seats available...";
			}
			else
			{
				if(npeople>1)
				{
					for(i=1;i<=npeople;i++)
					{
						in>>r++;
						in>>bus1sat--;
						getdata();
						ofstream x("businfot.txt",x.app);
						x<<destination2<<endl;
						x<<destination3<<endl;
						x<<b1sat<<endl;
						x<<b1time3<<endl;
						x<<r<<endl;
						x.close();
					}
				}
				else
				{
					in>>r++;
					in>>bus1sat--;
					getdata();
					ofstream x("businfot.txt",x.app);
					x<<destination2<<endl;
					x<<destination3<<endl;
					x<<b1sat<<endl;
					x<<b1time3<<endl;
					x<<r<<endl;
					x.close();
				}
				cout<<endl<<"Your Ticket booked successfully....."<<endl;
			}
		}
		else
		{
			cout<<"No more bookings available......";
		}

	}
	else
	{
		cout<<"No bookings available on that day......";
	}
}
else if(strcmp(des,destination4)==0 && strcmp(des2,destination5)==0)
{
	cout<<"Enter Day of journey :: ";
	cin>>day;
		if(strcmp(day,b2thus)==0)
		{
			if(bus2thus>=1)
			{
				cout<<"Enter number of people :: ";
				cin>>npeople;
				if(npeople>bus2thus)
				{
					cout<<"only "<<bus2thus<<" seats available...";
				}
				else
				{
					if(npeople>1)
					{
						for(i=1;i<=npeople;i++)
						{
							in>>r++;
							in>>bus2thus--;
							getdata();
							ofstream x("businfot.txt",x.app);
							x<<destination4<<endl;
							x<<destination5<<endl;
							x<<b2thus<<endl;
							x<<b2time1<<endl;
							x<<r<<endl;
							x.close();
						}
					 }
					else
					{
						in>>r++;
						in>>bus2thus--;
						getdata();
						ofstream x("businfot.txt",x.app);
						x<<destination4<<endl;
						x<<destination5<<endl;
						x<<b2thus<<endl;
						x<<b2time1<<endl;
						x<<r<<endl;
						x.close();
					}
					cout<<endl<<"Your Ticket booked successfully....."<<endl;

				 }
			}
			else
			{
				cout<<"No more bookings available on that day......";
			}
		}
		else
		{
			cout<<"No bookings available on that day......";
		}
}
else if(strcmp(des,destination6)==0&&strcmp(des2,destination7)==0)
{
	cout<<"Enter Day of journey :: ";
	cin>>day;
	if(strcmp(day,b3mon)==0)
	{
		if(bus3mon>=1)
		  {
				cout<<"Enter number of people :: ";
				cin>>npeople;
				if(npeople>bus3mon)
				{
					cout<<"only "<<bus3mon<<" seats available...";
				}
				else
				{
					if(npeople>1)
					{
						for(i=1;i<=npeople;i++)
						{
							in>>r++;
							in>>bus3mon--;
							getdata();
							ofstream x("businfot.txt",x.app);
							x<<destination6<<endl;
							x<<destination7<<endl;
							x<<b3mon<<endl;
							x<<b3time1<<endl;
							x<<r<<endl;
							x.close();
						}
					 }
					else
					{
						in>>r++;
						in>>bus3mon--;
						getdata();
						ofstream x("businfot.txt",x.app);
						x<<destination6<<endl;
						x<<destination7<<endl;
						x<<b3mon<<endl;
						x<<b3time1<<endl;
						x<<r<<endl;
						x.close();
					}
					cout<<endl<<"Your Ticket booked successfully....."<<endl;
				 }
			}
			else
			{
				cout<<"No more bookings available on that day......";
			}
	}
	else if(strcmp(day,b3sat)==0)
	{
		if(bus3sat>=1)
		{
			cout<<"Enter number of people :: ";
			cin>>npeople;
			if(npeople>bus3sat)
			{
				cout<<"only "<<bus3sat<<" seats available...";
			}
			else
			{
				if(npeople>1)
				{
					for(i=1;i<=npeople;i++)
					{
						in>>r++;
						in>>bus3sat--;
						getdata();
						ofstream x("businfot.txt",x.app);
						x<<destination6<<endl;
						x<<destination7<<endl;
						x<<b3sat<<endl;
						x<<b3time2<<endl;
						x<<r<<endl;
						x.close();
					}
				}
				else
				{
					in>>r++;
					in>>bus3sat--;
					getdata();
					ofstream x("businfot.txt",x.app);
					x<<destination6<<endl;
					x<<destination7<<endl;
					x<<b3sat<<endl;
					x<<b3time2<<endl;
					x<<r<<endl;
					x.close();
				}
				cout<<endl<<"Your Ticket booked successfully....."<<endl;
			}
		}
	}
	else
	{
		cout<<"No bookings available on that day......";
	}
}
else if(strcmp(des,destination8)==0 && strcmp(des2,destination9)==0)
{
	cout<<"Enter Day of journey :: ";
	cin>>day;
	if(strcmp(day,b4wed)==0)
	{
		if(bus4wed>=1)
		  {
			 cout<<"Enter number of people :: ";
			cin>>npeople;
			if(npeople>bus4wed)
			{
				cout<<"only "<<bus4wed<<" seats available...";
			}
			else
			{
				if(npeople>1)
				{
					for(i=1;i<=npeople;i++)
					{
						in>>r++;
						in>>bus4wed--;
						getdata();
						ofstream x("businfot.txt",x.app);
						x<<destination8<<endl;
						x<<destination9<<endl;
						x<<b4wed<<endl;
						x<<b4time1<<endl;
						x<<r<<endl;
						x.close();
					 }
				 }
				 else
				 {
					in>>r++;
					in>>bus4wed--;
					getdata();
					ofstream x("businfot.txt",x.app);
					x<<destination8<<endl;
					x<<destination9<<endl;
					x<<b4wed<<endl;
					x<<b4time1<<endl;
					x<<r<<endl;
					x.close();
				 }
				cout<<endl<<"Your Ticket booked successfully....."<<endl;
			 }
		  }
		  else
		  {
			cout<<"No more bookings available on that day......";
		  }
	}
	else if(strcmp(day,b4thus)==0)
	{
		if(bus4thus>=1)
		{
			cout<<"Enter number of people :: ";
			cin>>npeople;
			if(npeople>bus4thus)
			{
				cout<<"only "<<bus4thus<<" seats available...";
			}
			else
			{
				if(npeople>1)
				{
					for(i=1;i<=npeople;i++)
					{
						in>>r++;
						in>>bus4thus--;
						getdata();
						ofstream x("businfot.txt",x.app);
						x<<destination8<<endl;
						x<<destination9<<endl;
						x<<b4thus<<endl;
						x<<b4time2<<endl;
						x<<r<<endl;
						x.close();
					}
				}
				else
				{
					in>>r++;
					in>>bus4thus--;
					getdata();
					ofstream x("businfot.txt",x.app);
					x<<destination8<<endl;
					x<<destination9<<endl;
					x<<b4thus<<endl;
					x<<b4time2<<endl;
					x<<r<<endl;
					x.close();
				}
				cout<<endl<<"Your Ticket booked successfully....."<<endl;
			}
		}
		else
		{
			cout<<"No more bookings available on that day......";
		}
	}
	else if(strcmp(day,b4sun)==0)
	{
		if(bus4sun>=1)
		{
			cout<<"Enter number of people :: ";
			cin>>npeople;
			if(npeople>bus4sun)
			{
				cout<<"only "<<bus4sun<<" seats available...";
			}
			else
			{
				if(npeople>1)
				{
					for(i=1;i<=npeople;i++)
					{
						in>>r++;
						in>>bus4sun--;
						getdata();
						ofstream x("businfot.txt",x.app);
						x<<destination8<<endl;
						x<<destination9<<endl;
						x<<b4sun<<endl;
						x<<b4time3<<endl;
						x<<r<<endl;
						x.close();
					}
				}
				else
				{
					in>>r++;
					in>>bus4sun--;
					getdata();
					ofstream x("businfot.txt",x.app);
					x<<destination8<<endl;
					x<<destination9<<endl;
					x<<b4sun<<endl;
					x<<b4time3<<endl;
					x<<r<<endl;
					x.close();
				}
				cout<<endl<<"Your Ticket booked successfully....."<<endl;
			}
		}
		else
		{
			cout<<"No more bookings available......";
		}
	}
	else
	{
		cout<<"No buses available on that day.....";
	}
}
else
{
	cout<<"No buses available.....";
}
	in.close();

	ofstream out("businfo.txt");

	out<<destination<<endl;
	out<<destination1<<endl;

	out<<bmon<<endl;
	out<<busmon<<endl;
	out<<btime1<<endl;

	out<<bwed<<endl;
	out<<buswed<<endl;
	out<<btime2<<endl;

	out<<bfri<<endl;
	out<<busfri<<endl;
	out<<btime3<<endl;

	out<<destination2<<endl;
	out<<destination3<<endl;

	out<<b1sun<<endl;
	out<<bus1sun<<endl;
	out<<b1time1<<endl;

	out<<b1tue<<endl;
	out<<bus1tue<<endl;
	out<<b1time2<<endl;

	out<<b1sat<<endl;
	out<<bus1sat<<endl;
	out<<b1time3<<endl;

	out<<destination4<<endl;
	out<<destination5<<endl;

	out<<b2thus<<endl;
	out<<bus2thus<<endl;
	out<<b2time1<<endl;

	out<<destination6<<endl;
	out<<destination7<<endl;

	out<<b3mon<<endl;
	out<<bus3mon<<endl;
	out<<b3time1<<endl;

	out<<b3sat<<endl;
	out<<bus3sat<<endl;
	out<<b3time2<<endl;

	out<<destination8<<endl;
	out<<destination9<<endl;

	out<<b4wed<<endl;
	out<<bus4wed<<endl;
	out<<b4time1<<endl;

	out<<b4thus<<endl;
	out<<bus4thus<<endl;
	out<<b4time2<<endl;

	out<<b4sun<<endl;
	out<<bus4sun<<endl;
	out<<b4time3<<endl;
	out<<r<<endl;

	out.close();
}
//RESERVATION
void system :: getdata()
{
	cout<<endl;
	cout<<"Enter Name :: ";
	cin>>name;
	cout<<"Enter Last Name :: ";
	cin>>lname;
	cout<<"Enter Age :: ";
	cin>>age;
	cout<<"Enter Gender :: ";
	cin>>gen;
	cout<<endl;
	ofstream out("businfot.txt",out.app);
	out<<name<<endl;
	out<<lname<<endl;
	out<<age<<endl;
	out<<gen<<endl;
	out.close();
}
//details of book tickets
void system :: checkdetls()
{
	//textcolor(LIGHTMAGENTA);
	char d0[50],d1[10],time[10],name1[10],lname1[10];
	int flag=0;
	ifstream in("businfot.txt");
	if(in)
	{
	in>>name;
	in>>lname;
	in>>age;
	in>>gen;
	in>>d0;
	in>>d1;
	in>>bmon;
	in>>time;
	in>>r;
	cout<<"Enter name :: ";
	cin>>name1;
	cout<<"Enter lastname :: ";
	cin>>lname1;
	clrscr();
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Welcome to U TRAVEL NOW~~~~~~~~~~~~~~~~~~~~~~~~~~~~";

	while(in.eof()==0)
	{

		a:
		if(strcmp(name1,name)==0 && strcmp(lname1,lname)==0)
		{
			//clrscr();
			cout<<"------------------PASSENGER_INFORMATION------------------"<<endl;
			cout<<setw(50)<<"Booked on 14/07/2022"<<endl;
			cout<<"Name :: "<<name<<" "<<lname<<endl;
			cout<<"Age :: "<<age<<endl;
			cout<<"Gender :: "<<gen<<endl;
			cout<<"From :: "<<d0<<" to "<<d1<<endl;
			cout<<"Day of journey :: "<<bmon<<endl;
			cout<<"Bus arrival time :: "<<time<<endl;
			cout<<"Your Booking Id is :: "<<r<<endl<<endl;
			cout<<"********************  HAPPY JOURNEY  ********************"<<endl;

			in>>name;
			in>>lname;
			in>>age;
			in>>gen;
			in>>d0;
			in>>d1;
			in>>bmon;
			in>>time;
			in>>r;
			flag=1;
			goto a;
		}
		else
		{
			in>>name;
			in>>lname;
			in>>age;
			in>>gen;
			in>>d0;
			in>>d1;
			in>>bmon;
			in>>time;
			in>>r;
		}
	}
	if(flag==1)
	{
		goto c;
	}
	else
	{
		cout<<"No user found.....";
	}
	c:
	in.close();
	}
	else
	{
		cout<<"No booking available";
	}
}
//delete tickets
int i=0;
int flag=0;
void system :: dilete()
{
	char d[50],d1[50],time[20];
	char p[50],p1[50],day[50];

	char d0[50],d2[10],time1[10],fname[10],sname[10];

	ifstream in("businfot.txt");
	if(in)
	{
	in>>name;
	in>>lname;
	in>>age;
	in>>gen;
	in>>d0;
	in>>d2;
	in>>bmon;
	in>>time1;
	in>>r;
	cout<<"Enter name :: ";
	cin>>fname;
	cout<<"Enter lastname :: ";
	cin>>sname;
	clrscr();
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Welcome to U TRAVEL NOW~~~~~~~~~~~~~~~~~~~~~~~~~~~~";

	while(in.eof()==0)
	{
		a:
		if(strcmp(fname,name)==0 && strcmp(sname,lname)==0)
		{
			cout<<"------------------PASSENGER_INFORMATION------------------"<<endl;
			cout<<setw(50)<<"Booked on 14/07/2022"<<endl;
			cout<<"Name :: "<<name<<" "<<lname<<endl;
			cout<<"Age :: "<<age<<endl;
			cout<<"Gender :: "<<gen<<endl;
			cout<<"From :: "<<d0<<" to "<<d2<<endl;
			cout<<"Day of journey :: "<<bmon<<endl;
			cout<<"Bus arrival time :: "<<time1<<endl;
			cout<<"Your Booking Id is :: "<<r<<endl<<endl;

			in>>name;
			in>>lname;
			in>>age;
			in>>gen;
			in>>d0;
			in>>d2;
			in>>bmon;
			in>>time1;
			in>>r;
			flag=1;
			i++;
			goto a;
		}
		else
		{
			in>>name;
			in>>lname;
			in>>age;
			in>>gen;
			in>>d0;
			in>>d2;
			in>>bmon;
			in>>time1;
			in>>r;
		}
	}
	if(flag==1)
	{
		goto c;
	}
	else
	{
		cout<<"No user found.....";
		goto h;
	}
	c:
	in.close();
}
	if(i>1)
	{
		int t,id;
		char a[20],b[20],day1[20];
		cout<<"Press 1. to delete ticket on Id number...\nPress 2. to delete all above tickets..."<<endl;
		cin>>t;
		switch(t)
		{
			case 1:
			cout<<"Enter Id :: ";
			cin>>id;
			ifstream io("businfot.txt");
			io>>name;
			io>>lname;
			io>>age;
			io>>gen;
			io>>d;
			io>>d1;
			io>>bmon;
			io>>time;
			io>>r;
			while(io.eof()==0)
			{
				if(id==r)
				{
					strcpy(a,d);
					strcpy(b,d1);
					strcpy(day1,bmon);
					ifstream m("businfo.txt");
					m>>destination;
					m>>destination1;

					m>>bmon;
					m>>busmon;
					m>>btime1;

					m>>bwed;
					m>>buswed;
					m>>btime2;

					m>>bfri;
					m>>busfri;
					m>>btime3;

					m>>destination2;
					m>>destination3;

					m>>b1sun;
					m>>bus1sun;
					m>>b1time1;

					m>>b1tue;
					m>>bus1tue;
					m>>b1time2;

					m>>b1sat;
					m>>bus1sat;
					m>>b1time3;

					m>>destination4;
					m>>destination5;

					m>>b2thus;
					m>>bus2thus;
					m>>b2time1;

					m>>destination6;
					m>>destination7;

					m>>b3mon;
					m>>bus3mon;
					m>>b3time1;

					m>>b3sat;
					m>>bus3sat;
					m>>b3time2;

					m>>destination8;
					m>>destination9;

					m>>b4wed;
					m>>bus4wed;
					m>>b4time1;

					m>>b4thus;
					m>>bus4thus;
					m>>b4time2;

					m>>b4sun;
					m>>bus4sun;
					m>>b4time3;
					m>>r;
		if(strcmp(a,destination)==0 && strcmp(b,destination1)==0)
		{
			if(strcmp(day1,bmon)==0)
			{
				busmon++;
			}
			else if(strcmp(day1,bwed)==0)
			{
				buswed++;
			}
			else
			{
				busfri++;
			}
		}
		if(strcmp(a,destination2)==0 && strcmp(b,destination3)==0)
		{
			if(strcmp(day1,b1sun)==0)
			{
				bus1sun++;
			}
			else if(strcmp(day1,b1tue)==0)
			{
				bus1tue++;
			}
			else
			{
				bus1sat++;
			}
		}
		if(strcmp(a,destination4)==0 && strcmp(b,destination5)==0)
		{
			if(strcmp(day1,b2thus)==0)
			{
				bus2thus++;
			}
		}
		if(strcmp(a,destination6)==0 && strcmp(b,destination7)==0)
		{
			if(strcmp(day1,b3mon)==0)
			{
				bus3mon++;
			}
			else
			{
				bus3sat++;
			}
		}
		if(strcmp(a,destination8)==0 && strcmp(b,destination9)==0)
		{
			if(strcmp(day1,b4wed)==0)
			{
				bus4wed++;
			}
			else if(strcmp(day1,b4thus)==0)
			{
				bus4thus++;
			}
			else
			{
				bus4sun++;
			}
		}
		m.close();

	ofstream out("businfo.txt");

	out<<destination<<endl;
	out<<destination1<<endl;

	out<<bmon<<endl;
	out<<busmon<<endl;
	out<<btime1<<endl;

	out<<bwed<<endl;
	out<<buswed<<endl;
	out<<btime2<<endl;

	out<<bfri<<endl;
	out<<busfri<<endl;
	out<<btime3<<endl;

	out<<destination2<<endl;
	out<<destination3<<endl;

	out<<b1sun<<endl;
	out<<bus1sun<<endl;
	out<<b1time1<<endl;

	out<<b1tue<<endl;
	out<<bus1tue<<endl;
	out<<b1time2<<endl;

	out<<b1sat<<endl;
	out<<bus1sat<<endl;
	out<<b1time3<<endl;

	out<<destination4<<endl;
	out<<destination5<<endl;

	out<<b2thus<<endl;
	out<<bus2thus<<endl;
	out<<b2time1<<endl;

	out<<destination6<<endl;
	out<<destination7<<endl;

	out<<b3mon<<endl;
	out<<bus3mon<<endl;
	out<<b3time1<<endl;

	out<<b3sat<<endl;
	out<<bus3sat<<endl;
	out<<b3time2<<endl;

	out<<destination8<<endl;
	out<<destination9<<endl;

	out<<b4wed<<endl;
	out<<bus4wed<<endl;
	out<<b4time1<<endl;

	out<<b4thus<<endl;
	out<<bus4thus<<endl;
	out<<b4time2<<endl;

	out<<b4sun<<endl;
	out<<bus4sun<<endl;
	out<<b4time3<<endl;
	out<<r;
	out.close();
}
	io>>name;
	io>>lname;
	io>>age;
	io>>gen;
	io>>d;
	io>>d1;
	io>>bmon;
	io>>time;
	io>>r;
}
io.close();
			ifstream in("businfot.txt");
			in>>name;
			in>>lname;
			in>>age;
			in>>gen;
			in>>d;
			in>>d1;
			in>>bmon;
			in>>time;
			in>>r;
			while(in.eof()==0)
			{
				if(id!=r)
				{
					ofstream o("temp.txt",o.app);
					o<<name<<endl;
					o<<lname<<endl;
					o<<age<<endl;
					o<<gen<<endl;
					o<<d<<endl;
					o<<d1<<endl;
					o<<bmon<<endl;
					o<<time<<endl;
					o<<r<<endl;
					o.close();
				}
				in>>name;
				in>>lname;
				in>>age;
				in>>gen;
				in>>d;
				in>>d1;
				in>>bmon;
				in>>time;
				in>>r;
			}
			in.close();
			remove("businfot.txt");
			char oldname[]= "temp.txt";
			char newname[]= "businfot.txt";
			rename(oldname,newname);
			if(flag==1 && flag!=0)
			{
				cout<<endl<<"Ticket Cancelled Successfully....."<<endl;
			}
			else
			{
				cout<<"No user found....";
			}
			break;
			case 2:
			ifstream nn("businfot.txt");
			nn>>name;
			nn>>lname;
			nn>>age;
			nn>>gen;
			nn>>d;
			nn>>d1;
			nn>>bmon;
			nn>>time;
			nn>>r;
			while(nn.eof()==0)
			{
				if(strcmp(fname,name)==0 && strcmp(sname,lname)==0)
				{

					strcpy(p,d);
					strcpy(p1,d1);
					strcpy(day,bmon);
	ifstream m("businfo.txt");
	m>>destination;
	m>>destination1;

	m>>bmon;
	m>>busmon;
	m>>btime1;

	m>>bwed;
	m>>buswed;
	m>>btime2;

	m>>bfri;
	m>>busfri;
	m>>btime3;

	m>>destination2;
	m>>destination3;

	m>>b1sun;
	m>>bus1sun;
	m>>b1time1;

	m>>b1tue;
	m>>bus1tue;
	m>>b1time2;

	m>>b1sat;
	m>>bus1sat;
	m>>b1time3;

	m>>destination4;
	m>>destination5;

	m>>b2thus;
	m>>bus2thus;
	m>>b2time1;

	m>>destination6;
	m>>destination7;

	m>>b3mon;
	m>>bus3mon;
	m>>b3time1;

	m>>b3sat;
	m>>bus3sat;
	m>>b3time2;

	m>>destination8;
	m>>destination9;

	m>>b4wed;
	m>>bus4wed;
	m>>b4time1;

	m>>b4thus;
	m>>bus4thus;
	m>>b4time2;

	m>>b4sun;
	m>>bus4sun;
	m>>b4time3;
	m>>r;
	if(strcmp(p,destination)==0 && strcmp(p1,destination1)==0)
	{
		if(strcmp(day,bmon)==0)
		{
			busmon++;
		}
		else if(strcmp(day,bwed)==0)
		{
			buswed++;
		}
		else
		{
			busfri++;
		}
	}
	if(strcmp(p,destination2)==0 && strcmp(p1,destination3)==0)
	{
		if(strcmp(day,b1sun)==0)
		{
			bus1sun++;
		}
		else if(strcmp(day,b1tue)==0)
		{
			bus1tue++;
		}
		else
		{
			bus1sat++;
		}
	}
	if(strcmp(p,destination4)==0 && strcmp(p1,destination5)==0)
	{
		if(strcmp(day,b2thus)==0)
		{
			bus2thus++;
		}
	}
	if(strcmp(p,destination6)==0 && strcmp(p1,destination7)==0)
	{
		if(strcmp(day,b3mon)==0)
		{
			bus3mon++;
		}
		else
		{
			bus3sat++;
		}
	}
	if(strcmp(p,destination8)==0 && strcmp(p1,destination9)==0)
	{
		if(strcmp(day,b4wed)==0)
		{
			bus4wed++;
		}
		else if(strcmp(day,b4thus)==0)
		{
			bus4thus++;
		}
		else
		{
			bus4sun++;
		}
	}
	m.close();

	ofstream out("businfo.txt");

	out<<destination<<endl;
	out<<destination1<<endl;

	out<<bmon<<endl;
	out<<busmon<<endl;
	out<<btime1<<endl;

	out<<bwed<<endl;
	out<<buswed<<endl;
	out<<btime2<<endl;

	out<<bfri<<endl;
	out<<busfri<<endl;
	out<<btime3<<endl;

	out<<destination2<<endl;
	out<<destination3<<endl;

	out<<b1sun<<endl;
	out<<bus1sun<<endl;
	out<<b1time1<<endl;

	out<<b1tue<<endl;
	out<<bus1tue<<endl;
	out<<b1time2<<endl;

	out<<b1sat<<endl;
	out<<bus1sat<<endl;
	out<<b1time3<<endl;

	out<<destination4<<endl;
	out<<destination5<<endl;

	out<<b2thus<<endl;
	out<<bus2thus<<endl;
	out<<b2time1<<endl;

	out<<destination6<<endl;
	out<<destination7<<endl;

	out<<b3mon<<endl;
	out<<bus3mon<<endl;
	out<<b3time1<<endl;

	out<<b3sat<<endl;
	out<<bus3sat<<endl;
	out<<b3time2<<endl;

	out<<destination8<<endl;
	out<<destination9<<endl;

	out<<b4wed<<endl;
	out<<bus4wed<<endl;
	out<<b4time1<<endl;

	out<<b4thus<<endl;
	out<<bus4thus<<endl;
	out<<b4time2<<endl;

	out<<b4sun<<endl;
	out<<bus4sun<<endl;
	out<<b4time3<<endl;
	out<<r;
	out.close();
	}
	nn>>name;
	nn>>lname;
	nn>>age;
	nn>>gen;
	nn>>d;
	nn>>d1;
	nn>>bmon;
	nn>>time;
	nn>>r;
}
nn.close();

	ifstream inn("businfot.txt");
	inn>>name;
	inn>>lname;
	inn>>age;
	inn>>gen;
	inn>>d;
	inn>>d1;
	inn>>bmon;
	inn>>time;
	inn>>r;
	while(inn.eof()==0)
	{
		if(strcmp(fname,name)!=0&&strcmp(sname,lname)!=0||strcmp(fname,name)!=0&&strcmp(sname,lname)==0||strcmp(fname,name)==0&&strcmp(sname,lname)!=0)
		{
			ofstream o("temp.txt",o.app);
			o<<name<<endl;
			o<<lname<<endl;
			o<<age<<endl;
			o<<gen<<endl;
			o<<d<<endl;
			o<<d1<<endl;
			o<<bmon<<endl;
			o<<time<<endl;
			o<<r<<endl;
			o.close();
		}
		inn>>name;
		inn>>lname;
		inn>>age;
		inn>>gen;
		inn>>d;
		inn>>d1;
		inn>>bmon;
		inn>>time;
		inn>>r;
	}
	inn.close();
	remove("businfot.txt");
	remove("businfom.txt");
	char oldname1[]= "temp.txt";
	char newname1[]= "businfot.txt";
	rename(oldname1,newname1);
	if(flag==1 && flag!=0)
	{
		cout<<endl<<"Ticket Cancelled Successfully....."<<endl;
	}
	else
	{
		cout<<"No user found....";
	}
    }

}

else
{
	int flag=0;
	ifstream n("businfot.txt");
	if(n)
	{
	n>>name;
	n>>lname;
	n>>age;
	n>>gen;
	n>>d;
	n>>d1;
	n>>bmon;
	n>>time;
	n>>r;
	while(n.eof()==0)
	{
		if(strcmp(fname,name)==0 && strcmp(sname,lname)==0)
		{
			flag=1;
			strcpy(p,d);
			strcpy(p1,d1);
			strcpy(day,bmon);
			//a.close();

			ifstream m("businfo.txt");
	m>>destination;
	m>>destination1;

	m>>bmon;
	m>>busmon;
	m>>btime1;

	m>>bwed;
	m>>buswed;
	m>>btime2;

	m>>bfri;
	m>>busfri;
	m>>btime3;

	m>>destination2;
	m>>destination3;

	m>>b1sun;
	m>>bus1sun;
	m>>b1time1;

	m>>b1tue;
	m>>bus1tue;
	m>>b1time2;

	m>>b1sat;
	m>>bus1sat;
	m>>b1time3;

	m>>destination4;
	m>>destination5;

	m>>b2thus;
	m>>bus2thus;
	m>>b2time1;

	m>>destination6;
	m>>destination7;

	m>>b3mon;
	m>>bus3mon;
	m>>b3time1;

	m>>b3sat;
	m>>bus3sat;
	m>>b3time2;

	m>>destination8;
	m>>destination9;

	m>>b4wed;
	m>>bus4wed;
	m>>b4time1;

	m>>b4thus;
	m>>bus4thus;
	m>>b4time2;

	m>>b4sun;
	m>>bus4sun;
	m>>b4time3;
	m>>r;
	if(strcmp(p,destination)==0 && strcmp(p1,destination1)==0)
	{
		if(strcmp(day,bmon)==0)
		{
			busmon++;
		}
		else if(strcmp(day,bwed)==0)
		{
			buswed++;
		}
		else
		{
			busfri++;
		}
	}
	if(strcmp(p,destination2)==0 && strcmp(p1,destination3)==0)
	{
		if(strcmp(day,b1sun)==0)
		{
			bus1sun++;
		}
		else if(strcmp(day,b1tue)==0)
		{
			bus1tue++;
		}
		else
		{
			bus1sat++;
		}
	}
	if(strcmp(p,destination4)==0 && strcmp(p1,destination5)==0)
	{
		if(strcmp(day,b2thus)==0)
		{
			bus2thus++;
		}
	}
	if(strcmp(p,destination6)==0 && strcmp(p1,destination7)==0)
	{
		if(strcmp(day,b3mon)==0)
		{
			bus3mon++;
		}
		else
		{
			bus3sat++;
		}
	}
	if(strcmp(p,destination8)==0 && strcmp(p1,destination9)==0)
	{
		if(strcmp(day,b4wed)==0)
		{
			bus4wed++;
		}
		else if(strcmp(day,b4thus)==0)
		{
			bus4thus++;
		}
		else
		{
			bus4sun++;
		}
	}
	m.close();

	ofstream out("businfo.txt");

	out<<destination<<endl;
	out<<destination1<<endl;

	out<<bmon<<endl;
	out<<busmon<<endl;
	out<<btime1<<endl;

	out<<bwed<<endl;
	out<<buswed<<endl;
	out<<btime2<<endl;

	out<<bfri<<endl;
	out<<busfri<<endl;
	out<<btime3<<endl;

	out<<destination2<<endl;
	out<<destination3<<endl;

	out<<b1sun<<endl;
	out<<bus1sun<<endl;
	out<<b1time1<<endl;

	out<<b1tue<<endl;
	out<<bus1tue<<endl;
	out<<b1time2<<endl;

	out<<b1sat<<endl;
	out<<bus1sat<<endl;
	out<<b1time3<<endl;

	out<<destination4<<endl;
	out<<destination5<<endl;

	out<<b2thus<<endl;
	out<<bus2thus<<endl;
	out<<b2time1<<endl;

	out<<destination6<<endl;
	out<<destination7<<endl;

	out<<b3mon<<endl;
	out<<bus3mon<<endl;
	out<<b3time1<<endl;

	out<<b3sat<<endl;
	out<<bus3sat<<endl;
	out<<b3time2<<endl;

	out<<destination8<<endl;
	out<<destination9<<endl;

	out<<b4wed<<endl;
	out<<bus4wed<<endl;
	out<<b4time1<<endl;

	out<<b4thus<<endl;
	out<<bus4thus<<endl;
	out<<b4time2<<endl;

	out<<b4sun<<endl;
	out<<bus4sun<<endl;
	out<<b4time3<<endl;
	out<<r<<endl;
	out.close();
	}
		n>>name;
		n>>lname;
		n>>age;
		n>>gen;
		n>>d;
		n>>d1;
		n>>bmon;
		n>>time;
		n>>r;
	}

	n.close();

	ifstream in("businfot.txt");
	in>>name;
	in>>lname;
	in>>age;
	in>>gen;
	in>>d;
	in>>d1;
	in>>bmon;
	in>>time;
	in>>r;
	while(in.eof()==0)
	{
		if(strcmp(fname,name)!=0&&strcmp(sname,lname)!=0||strcmp(fname,name)!=0&&strcmp(sname,lname)==0||strcmp(fname,name)==0&&strcmp(sname,lname)!=0)
		{
			ofstream o("temp.txt",o.app);
			o<<name<<endl;
			o<<lname<<endl;
			o<<age<<endl;
			o<<gen<<endl;
			o<<d<<endl;
			o<<d1<<endl;
			o<<bmon<<endl;
			o<<time<<endl;
			o<<r<<endl;
			o.close();
		}
		in>>name;
		in>>lname;
		in>>age;
		in>>gen;
		in>>d;
		in>>d1;
		in>>bmon;
		in>>time;
		in>>r;
	}
	in.close();
	remove("businfot.txt");
	remove("businfom.txt");
	char oldname[]= "temp.txt";
	char newname[]= "businfot.txt";
	rename(oldname,newname);
	if(flag==1 && flag!=0)
	{
		cout<<endl<<"Ticket Cancelled Successfully....."<<endl;
	}
	else
	{
		cout<<"No user found....";
	}
}
	else
	{
		cout<<"No booking available";
	}
}
h:
}
//Available buses information
void system :: availablebuses()
{
	ifstream in("businfo.txt");

	in>>destination;
	in>>destination1;

	in>>bmon;
	in>>busmon;
	in>>btime1;

	in>>bwed;
	in>>buswed;
	in>>btime2;

	in>>bfri;
	in>>busfri;
	in>>btime3;

	in>>destination2;
	in>>destination3;

	in>>b1sun;
	in>>bus1sun;
	in>>b1time1;

	in>>b1tue;
	in>>bus1tue;
	in>>b1time2;

	in>>b1sat;
	in>>bus1sat;
	in>>b1time3;

	in>>destination4;
	in>>destination5;

	in>>b2thus;
	in>>bus2thus;
	in>>b2time1;

	in>>destination6;
	in>>destination7;

	in>>b3mon;
	in>>bus3mon;
	in>>b3time1;

	in>>b3sat;
	in>>bus3sat;
	in>>b3time2;

	in>>destination8;
	in>>destination9;

	in>>b4wed;
	in>>bus4wed;
	in>>b4time1;

	in>>b4thus;
	in>>bus4thus;
	in>>b4time2;

	in>>b4sun;
	in>>bus4sun;
	in>>b4time3;
	in>>r;
	cout<<"from :: "<<destination<<" to "<<destination1<<endl;
	cout<<"Day :: "<<bmon<<" Available seats :: "<<busmon<<" "<<"Time :: "<<btime1<<endl;

	cout<<"Day :: "<<bwed<<" Available seats :: "<<buswed<<" "<<"Time :: "<<btime2<<endl;

	cout<<"Day :: "<<bfri<<" Available seats :: "<<busfri<<" "<<"Time :: "<<btime3<<endl<<endl;

	cout<<"from :: "<<destination2<<" to "<<destination3<<endl;

	cout<<"Day :: "<<b1sun<<" Available seats :: "<<bus1sun<<" "<<"Time :: "<<b1time1<<endl;

	cout<<"Day :: "<<b1tue<<" Available seats :: "<<bus1tue<<" "<<"Time :: "<<b1time2<<endl;

	cout<<"Day :: "<<b1sat<<" Available seats :: "<<bus1sat<<" "<<"Time :: "<<b1time3<<endl<<endl;


	cout<<"from :: "<<destination4<<" to "<<destination5<<endl;

	cout<<"Day :: "<<b2thus<<" Available seats :: "<<bus2thus<<" "<<"Time :: "<<b2time1<<endl<<endl;

	cout<<"from :: "<<destination6<<" to "<<destination7<<endl;
	cout<<"Day :: "<<b3mon<<" Available seats :: "<<bus3mon<<" "<<"Time :: "<<b3time1<<endl;

	cout<<"Day :: "<<b3sat<<" Available seats :: "<<bus3sat<<" "<<"Time :: "<<b3time2<<endl<<endl;


	cout<<"from :: "<<destination8<<" to "<<destination9<<endl;
	cout<<"Day :: "<<b4wed<<" Available seats :: "<<bus4wed<<" "<<"Time :: "<<b4time1<<endl;

	cout<<"Day :: "<<b4thus<<" Available seats :: "<<bus4thus<<" "<<"Time :: "<<b4time2<<endl;

	cout<<"Day :: "<<b4sun<<" Available seats :: "<<bus4sun<<" "<<"Time :: "<<b4time3<<endl;

	in>>destination;
	in>>destination1;

	in>>bmon;
	in>>busmon;
	in>>btime1;

	in>>bwed;
	in>>buswed;
	in>>btime2;

	in>>bfri;
	in>>busfri;
	in>>btime3;

	in>>destination2;
	in>>destination3;

	in>>b1sun;
	in>>bus1sun;
	in>>b1time1;

	in>>b1tue;
	in>>bus1tue;
	in>>b1time2;

	in>>b1sat;
	in>>bus1sat;
	in>>b1time3;

	in>>destination4;
	in>>destination5;

	in>>b2thus;
	in>>bus2thus;
	in>>b2time1;

	in>>destination6;
	in>>destination7;

	in>>b3mon;
	in>>bus3mon;
	in>>b3time1;

	in>>b3sat;
	in>>bus3sat;
	in>>b3time2;

	in>>destination8;
	in>>destination9;

	in>>b4wed;
	in>>bus4wed;
	in>>b4time1;

	in>>b4thus;
	in>>bus4thus;
	in>>b4time2;

	in>>b4sun;
	in>>bus4sun;
	in>>b4time3;
	in>>r;
	in.close();
}
// Main function
int main()
{
	//textcolor(BLACK);
	textcolor(LIGHTCYAN);
	int a,b;
	label:

	clrscr();


	system s;

	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Welcome to U TRAVEL NOW~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"	    $ELECT BELOW OPTION CORRECTLY TO CONTINUE FURTHER ! "<<endl<<endl<<endl;

	cout<<"			  1.AVAILABLE BUSES\n			  ~ ~~~~~~~~~~~~~~~\n			  2.RESERVATION SECTION\n			  ~ ~~~~~~~~~~~~~~~~~~~\n			  3.RESERVATION INFORMATION\n			  ~ ~~~~~~~~~~~~~~~~~~~~~~~\n			  4.CANCEL TICKET\n			  ~ ~~~~~~~~~~~~~\n			  5.EXIT FROM SYSTEM\n			  ~ ~~~~~~~~~~~~~~~~\n"<<endl;
	cout<<"			  ";
	cin>>a;

	switch(a)
	{
		case 1:clrscr();
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Welcome to U TRAVEL NOW~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		s.availablebuses();
		cout<<"\nPress 1. for main menu\nPress 0. to exit from system\n";
		cin>>b;
		switch(b)
		{
			case 1:goto label;
			break;
			case 0:break;
		}
		break;
		case 2:clrscr();

		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Welcome to U TRAVEL NOW~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		s.setdata();
		cout<<"\nPress 1. for main menu\nPress 0. to exit from system\n";
		cin>>b;
		switch(b)
		{
			case 1:goto label;
			break;
			case 0:break;
		}
		break;
		case 3:clrscr();
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Welcome to U TRAVEL NOW~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		s.checkdetls();
		cout<<"\nPress 1. for main menu\nPress 0. to exit from system\n";
		cin>>b;
		switch(b)
		{
			case 1:goto label;
			break;
			case 0:break;
		}
		break;
		case 4:clrscr();
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Welcome to U TRAVEL NOW~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		s.dilete();
		cout<<"\nPress 1. for main menu\nPress 0. to exit from system\n";
		cin>>b;
		switch(b)
		{
			case 1:goto label;
			break;
			case 0:break;
		}
		break;
		case 5:break;
		default:cout<<"Please enter valid option and try again....";
		cout<<"\nPress 1. for main menu\nPress 0. to exit from system\n";
		cin>>b;
		switch(b)
		{
			case 1:goto label;
			break;
			case 0:break;
		}
	}
	getch();
	return 0;
}