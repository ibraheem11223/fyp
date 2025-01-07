// C++ project
#include<iostream>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];int arr6[20];int arr7[20];int arr8[20];int arr9[20];int arr10[20];int arr11[20];
int total=0;

void enter()
{
	int choice;
	cout<<"How many student do you enter: ";
	cin>>choice;
	if(total==0)
	{
	
	total=total+choice;
	for(int i=0;i<choice;i++)
	{
		cout<<"Enter data of student : "<<i+1<<endl<<endl;
		cout<<"Enter name :";
		cin>>arr1[i];
		cout<<"Enter rollno : :";
		cin>>arr2[i];
		cout<<"Enter course : ";
		cin>>arr3[i];
		cout<<"Enter class : ";
		cin>>arr4[i];
		cout<<"Enter contact : ";
		cin>>arr5[i];
		cout<<"Enter English Marks:";
		cin>>arr6[i];
		cout<<"Enter Programming C++ Marks:";
		cin>>arr7[i];
		cout<<"Enter pak Studies Marks:";
		cin>>arr8[i];
		cout<<"Enter Basic Electronics Marks:";
		cin>>arr9[i];
		cout<<"Enter ICT Marks:";
		cin>>arr10[i];
		cout<<"Enter Calculus  Marks:";
		cin>>arr11[i];
		cout<<"-------------------------";
		cout<<endl;
		
	}
}
else{
	for(int i=total;i<total+choice;i++)
	{
		cout<<"Enter data of student : "<<i+1<<endl<<endl;
		cout<<"Enter name :";
		cin>>arr1[i];
		cout<<"Enter rollno : ";
		cin>>arr2[i];
		cout<<"Enter course : ";
		cin>>arr3[i];
		cout<<"Enter class : ";
		cin>>arr4[i];
		cout<<"Enter contact : ";
		cin>>arr5[i];
		cout<<"Enter English Marks";
		cin>>arr6[i];
		cout<<"Enter Programming C++ Marks";
		cin>>arr7[i];
		cout<<"Enter pak Studies Marks";
		cin>>arr8[i];
		cout<<"Enter Basic Electronics Marks";
		cin>>arr9[i];
		cout<<"Enter ICT Marks";
		cin>>arr10[i];
		cout<<"Enter Calculus  Marks";
		cin>>arr11[i];
		
	}
	total=total+choice;
}
}
void show()
{
	if(total==0)
	{
		cout<<"No Data is entered"<<endl;
	}
	else{
	
	for(int i=0;i<total;i++)
	{
		cout<<"Data Of Student "<<i+1<<endl<<endl;
			 cout<<"Name : "<<arr1[i]<<endl;
			 cout<<"Roll No : "<<arr2[i]<<endl;
			 cout<<"Course : "<<arr3[i]<<endl;
			 cout<<"Class :  "<<arr4[i]<<endl;
			 cout<<"Contact :"<<arr5[i]<<endl;
			 cout<<"Enter English Marks:"<<arr6[i]<<endl;
		     cout<<"Enter Programming C++ Marks:"<<arr7[i];
	         cout<<"Enter pak Studies Marks:"<<arr8[i]<<endl;
             cout<<"Enter Basic Electronics Marks:"<<arr9[i]<<endl;
		     cout<<"Enter ICT Marks:"<<arr10[i]<<endl;
		     cout<<"Enter Calculus  Marks:"<<arr11[i]<<endl;
		     cout<<"-----------------------"<<endl;
			
	}
}}
void search()
{
	if(total==0)
	{
		cout<<"!No data is entered!"<<endl;
	}
	else{

	string rollno;
	cout<<"Enter rollno of student whict you want to search=";
	cin>>rollno;
	for(int i=0;i<total;i++)
	{
		if(rollno==arr2[i])
		{
			cout<<"Data Of Student "<<i+1<<endl<<endl;
			cout<<"Name : "<<arr1[i]<<endl;
			cout<<"Roll No : "<<arr2[i]<<endl;
			cout<<"Course : "<<arr3[i]<<endl;
			cout<<"Class :  "<<arr4[i]<<endl;
			cout<<"Contact :"<<arr5[i]<<endl;
			cout<<"Enter English Marks:"<<arr6[i]<<endl;
		     cout<<"Enter Programming C++ Marks:"<<arr7[i];
	         cout<<"Enter pak Studies Marks:"<<arr8[i]<<endl;
             cout<<"Enter Basic Electronics Marks:"<<arr9[i]<<endl;
		     cout<<"Enter ICT Marks:"<<arr10[i]<<endl;
		     cout<<"Enter Calculus  Marks:"<<arr11[i]<<endl;
		     cout<<"-----------------------"<<endl;
		}
	}
}
}
void update()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else{
	string rollno;
	cout<<"Enter rollno of student whict you want to update=";
	cin>>rollno;
	for(int i=0;i<total;i++)
	{
		if(rollno==arr2[i])
		{
			cout<<"previous data"<<endl<<endl;
			cout<<"data of student "<<i+1<<endl<<endl;
			cout<<"name "<<arr1[i]<<endl;
			cout<<"rollno "<<arr2[i]<<endl;
			cout<<"cource "<<arr3[i]<<endl;
			cout<<"class "<<arr4[i]<<endl;
			cout<<"contact"<<arr5[i]<<endl;
			cout<<"Enter English Marks:"<<arr6[i]<<endl;
		    cout<<"Enter Programming C++ Marks:"<<arr7[i];
	        cout<<"Enter pak Studies Marks:"<<arr8[i]<<endl;
            cout<<"Enter Basic Electronics Marks:"<<arr9[i]<<endl;
		    cout<<"Enter ICT Marks:"<<arr10[i]<<endl;
		    cout<<"Enter Calculus  Marks:"<<arr11[i]<<endl;
		    cout<<"-----------------------"<<endl;
			cout<<"Enter new data"<<endl;
			cout<<"Name ";
			cin>>arr1[i];
			cout<<"Roll No ";
			cin>>arr2[i];
			cout<<"Course ";
			cin>>arr3[i];
			cout<<"Class ";
			cin>>arr4[i];
			cout<<"Contact";
			cin>>arr5[i];
			cout<<"Enter English Marks=";
		    cin>>arr6[i];
		    cout<<"Enter Programming C++ Marks=";
		    cin>>arr7[i];
	    	cout<<"Enter pak Studies Marks=";
		    cin>>arr8[i];
		    cout<<"Enter Basic Electronics Marks=";
		    cin>>arr9[i];
		    cout<<"Enter ICT Marks=";
	        cin>>arr10[i];
		    cout<<"Enter Calculus  Marks=";
		    cin>>arr11[i];
		
			
			
			
		}
	}
}
}
void deleterecord()
{
	if(total==0)
	{
		cout<<"No data is entered"<<endl;
	}
	else{
	int a;
	cout<<"press 1 to delete full record"<<endl;
	cout<<"press 2 to delete apecific record"<<endl;
	cin>>a;
	if(a==1)
	{
		total=0;
		cout<<"Record is deleted"<<endl;
		
	}
	else(a==2);
	{
		string rollno;
		cout<<"Enter Roll No which you want to delete="<<endl;
		cin>>rollno;
		for(int i=0;i<total;i++)
		{
			if(rollno==arr2[i])
			{
				for(int j=i;j<total;j++)
				{
					arr1[j]=arr1[j+1];
					arr2[j]=arr2[j+1];
					arr3[j]=arr3[j+1];
					arr4[j]=arr4[j+1];
					arr5[j]=arr5[j+1];
					arr6[j]=arr6[j+1];
					arr7[j]=arr7[j+1];
					arr8[j]=arr7[j+1];
					arr9[j]=arr9[j+1];
					arr10[j]=arr10[j+1];
					arr11[j]=arr11[j+1];
					
				}
				total--;
				cout<<"your required record is deleted .. "<<endl;
			}
		}
	}
}
}
int peravg()
{
		cout<<"\t\t:  PERCENTAGE AND AVERAGE  :"<<endl<<endl;
	
	int choice;
	cout<<"HOW MANY TIMES U WANT TO FIND PERCENTAGE AND AVERAGE : ";
	cin>>choice;
	for(int i=0;i<choice;i++)
	{
		cout<<"Enter English Marks:";
		cin>>arr6[i];
		cout<<"Enter Programming C++ Marks:";
		cin>>arr7[i];
		cout<<"Enter pak Studies Marks:";
		cin>>arr8[i];
		cout<<"Enter Basic Electronics Marks:";
		cin>>arr9[i];
		cout<<"Enter ICT Marks:";
		cin>>arr10[i];
		cout<<"Enter Calculus  Marks:";
		cin>>arr11[i];
		cout<<"-------------------------";
		cout<<endl;
		
		int avg=0;
		avg=(arr6[i]+arr7[i]+arr8[i]+arr9[i]+arr10[i]+arr11[i])/6;
		cout<<endl;
		for(int j=1;j<=60;j++)
		{
			cout<<"* ";
		}
		cout<<"\n\n";
		cout<<"THE AVERAGE OF THE NUMBERS YOU ENTERED IS ::> "<<avg<<"\n\n";
		int per;
		per=((arr6[i]+arr7[i]+arr8[i]+arr9[i]+arr10[i]+arr11[i])*100)/600;
		cout<<endl;
		for(int j=1;j<=60;j++)
		{
			cout<<"* ";
		}
		cout<<"\n\n";
		cout<<"THE PERCENTAGE OF THE NUMBERS YOU ENTERED IS ::> "<<per<<" %\n\n";
		for(int j=1;j<=60;j++)
		{
			cout<<"* ";
		}
	}
	return 0;
}
int main()
{
	cout<<"\t\t\t\t------------------------------------------------------------------"<<endl;
	cout<<"\t\t\t\t*******************RESULT MANAGMENT SYSTEM************************"<<endl;
	cout<<"\t\t\t\t**********************(IET Department)****************************"<<endl;
	cout<<"\t\t\t\t------------------------------------------------------------------"<<endl;
	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	int value;
	string username;
	string  password;
	cout<<"Enter the Username=";
	cin>>username;
	cout<<"Enter the Password=";
	cin>>password;
	if(username=="Admin" && password=="1234")
	{
		cout<<"**Access Granted**";
		
	}
	else
	{
		cout<<"Error! Username Or Password Not Correct";
		return 0;
	}
	cout<<endl<<endl;
		
while(true)
{
	cout<<"Press 1 : \t\t ENTER STUDENT DATA "<<endl;
	cout<<"\t\t\t *******************************"<<endl;
	cout<<"Press 2 : \t\t SHOW STUDENT DATA"<<endl;
	cout<<"\t\t\t *******************************"<<endl;
	cout<<"Press 3 : \t\t SEARCH STUDENT DATA"<<endl;
	cout<<"\t\t\t *******************************"<<endl;
	cout<<"Press 4 : \t\t UPDATE STUDENT DATA "<<endl;
	cout<<"\t\t\t *******************************"<<endl;
	cout<<"Press 5 : \t\t DELETE STUDENT DATA "<<endl;
	cout<<"\t\t\t *******************************"<<endl;
	cout<<"Press 6 : \t\t PERCENTAGE AND AVERAGE "<<endl;
	cout<<"\t\t\t *******************************"<<endl;
	cout<<"Press 7 : \t\t EXIT  "<<endl;
	cin>>value;
	system("cls");
	switch(value)
	{
		case 1:
			enter();
			break;
		case 2:	
			show();
			break;
		case 3:	
			search();
			break;
		case 4:
			update();
			break;
		case 5:
			deleterecord();
		case 6:
			{
			peravg();	
			}
		case 7:
			exit(0);
			break;		
		default:
			cout<<"Invalid input "<<endl;
			break;
				
	}
	
}
}