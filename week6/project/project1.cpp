#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int total_student = 1000; // total size
    int index = 5;

    // data structures
    string nameArray[total_student]={"Ahsan","Hassan","Hussain","Alishba","Arooj"};
    int ageArray[total_student]={22,17,14,20,24};
    float matricArray[total_student]={1050,1027,990,1017,1000};
    float interArray[total_student]={1040,1035,1000,1028,1080};
    float ecatArray[total_student]={315,310,290,306,300};
    string pref1Array[total_student]={"CS","CE","EE","CS","EE"};
    string pref2Array[total_student]={"CE","CS","CS","EE","CS"};
    string pref3Array[total_student]={"EE","CE","EE","CE","CS"};
    float aggregateArray[total_student];
  //CRUD,creat,read,update,delete
    while (true)
    {
        // main header of ums
        system("cls");
        cout << "---------------------------------------------------" << endl;
        cout << "-------University Admission Managment System-------" << endl;
        cout << "---------------------------------------------------" << endl;

        cout << "User Menu" << endl;
        cout << "1.Admin" << endl;
        cout << "2.Student" << endl;
        cout << "3.exist" << endl;
        int useroption;
        cin >> useroption;
        cout << "you choose:" << useroption << endl;

        if (useroption == 1)
        {
            // write Admin code here
            for (int i = 0; i < 3; i++)
            {
                system("cls");
                cout << " Admin Menu : Login attempt:" << i + 1 << endl;
                cout << "Enter your username:";
                string username;
                cin >> username;
                cout << "Enter your password:";
                string password;
                cin >> password;
                if (username == "Admin" && password == "123")
                {
                    cout << "Login successfully" << endl;

                    while (true)
                    {   system("cls");
                        cout << "1.Show all students:" << endl;
                        cout << "2.search student:" << endl;
                        cout << "3.Update students record:" << endl;
                        cout << "4.Generate Merit List:" << endl;
                        cout<<"5.Delete record by name:"<<endl;
                        cout << "6.loged out" << endl;
                        cout << "Admin choose option:" << endl;
                        int adminoption;
                        cin >> adminoption;
                        if (adminoption == 1)
                        {
                         cout<<"Name\tAge\tMatric\tFSC\tEcat\tpref1\tpref2\tpref3"<<endl;
                         for(int i=0;i<index;i++){
                            if(nameArray[i]!=""){
                           cout<<nameArray[i]<<"\t"<<ageArray[i]<<"\t"<<matricArray[i]<<"\t"<<interArray[i]
                            <<"\t"<<ecatArray[i]<<"\t"<<pref1Array[i]<<"\t"<<pref2Array[i]<<"\t"<<pref3Array[i]<<endl;
                            }
                        }
                        }
                        else if (adminoption == 2)
                        {
                            // search student by name 
                            cout<<"Enter name that you want to serach:";
                            string name;
                            cin>>name;
                            bool found=false;
                           int foundindex=-1;
                           for(int i=0;i<index;i++)
                           {
                            if(nameArray[i]==name)
                            {
                            foundindex=i;
                            found=true;
                            }
                           }
                           if(found =false)
                           {
                          cout<<"Record not found against name:"<<name<<endl;
                           }
                          else
                          {
                         cout<<"Name\tAge\tMatric\tFSC\tEcat\tpref1\tpref2\tpref3"<<endl;
                         cout<<nameArray[foundindex]<<"\t"<<ageArray[foundindex]<<"\t"<<matricArray[foundindex]<<"\t"<<interArray[foundindex]
                         <<"\t"<<ecatArray[foundindex]<<"\t"<<pref1Array[foundindex]<<"\t"<<pref2Array[foundindex]<<"\t"<<pref3Array[foundindex]<<endl;
                          }
                        }
                        else if (adminoption == 3)
                        {
                            // update student record
                            cout<<"Enter the name that's record you want to update";
                             string name;
                            cin>>name;
                            bool found=false;
                           int foundindex=-1;
                           for(int i=0;i<index;i++)
                           {
                            if(nameArray[i]==name)
                            {
                            foundindex=i;
                            found=true;
                            }
                           }
                           if(found =true)
                           {
                            cout<<"----old record----"<<endl;
                            cout<<"Name\tAge\tMatric\tFSC\tEcat\tpref1\tpref2\tpref3"<<endl;
                         cout<<nameArray[foundindex]<<"\t"<<ageArray[foundindex]<<"\t"<<matricArray[foundindex]<<"\t"<<interArray[foundindex]
                         <<"\t"<<ecatArray[foundindex]<<"\t"<<pref1Array[foundindex]<<"\t"<<pref2Array[foundindex]<<"\t"<<pref3Array[foundindex]<<endl;
                            cout<<"Enter new record for update:"<<endl;
                            cout<<"Enter your name:";
                        
            string name;
            cin >> name;

            cout << "Enter your age:";
            int age;
            cin >> age;

            cout << "Enter your matric mark:";
            float matric;
            cin >> matric;

            cout << "Enter your FSC marks:";
            float FSC;
            cin >> FSC;

            cout << "Enter your ecat marks:";
            float ecat;
            cin >> ecat;

            cout << "Enter CS,CE.EE as your prefrences" << endl;
            cout << "Enter your 1st prefrence:";
            string pref1;
            cin >> pref1;

            cout << "Enter your 2nd prefrence:";
            string pref2;
            cin >> pref2;

            cout << "Enter your 3rd prefrence:";
            string pref3;
            cin >> pref3;

            nameArray[foundindex] = name;
            ageArray[foundindex] = age;
            matricArray[foundindex] = matric;
            interArray[foundindex] = FSC;
            ecatArray[foundindex] = ecat;
            pref1Array[foundindex] = pref1;
            pref2Array[foundindex] = pref2;
            pref3Array[foundindex] = pref3;
                           }
                        }
                        else if (adminoption == 4)
                        {
                            // generate merit list
                            for(int i=0;i<index;i++)
                            {
                            
                        float aggregate=(matricArray[i]/1100*100*0.3)+(interArray[i]/1200*100*0.4)+(ecatArray[i]/400*100*0.3);
                        aggregateArray[i]=aggregate;
                        }
                    

                            //display all data with aggregate
                         cout<<"Name\tAge\tAggregate"<<endl;
                         for(int i=0;i<index;i++){
                            if(nameArray[i]!=""){
                           cout<<nameArray[i]<<"\t"<<ageArray[i]<<"\t"<<aggregateArray[i]<<endl;
                        }
                        }
                          //code to display sorted data
                          for(int i=0;i<index;i++){
                            for(int j=i;j<index;j++){
                               if (aggregateArray[i]<aggregateArray[j]){
                                //swaoing of name
                                string tempname=nameArray[i];
                                nameArray[i]=nameArray[j];
                                nameArray[j]=tempname;
                                //swaping of age
                                int tempage=ageArray[i];
                                ageArray[i]=ageArray[j];
                                ageArray[j]=tempage;
                                //swaping of matric
                                float tempmatric=matricArray[i];
                                matricArray[i]=matricArray[j];
                                matricArray[j]=tempmatric;
                                //swaping of inter
                                  float tempinter=interArray[i];
                                  interArray[i]=interArray[j];
                                  interArray[j]=tempinter;
                                //swaping of ecat
                                float tempecat=ecatArray[i];
                                ecatArray[i]=ecatArray[j];
                                ecatArray[j]=tempecat;
                                //swaping of p1
                                string tempP1=pref1Array[i];
                                pref1Array[i]=pref1Array[j];
                                pref1Array[j]=tempP1;
                                //swaping ofp2
                                string tempP2=pref2Array[i];
                                pref2Array[i]=pref2Array[j];
                                pref2Array[j]=tempP2;
                                //swaping of p3
                                string tempP3=pref3Array[i];
                                pref3Array[i]=pref3Array[j];
                                pref3Array[j]=tempP3;
                                //swaping of aggregate
                                float tempAG=aggregateArray[i];
                                aggregateArray[i]=aggregateArray[j];
                                aggregateArray[j]=tempAG;
                               }
                            }
                        }
                           cout<<"Name/tAge/tAggregate"<<endl;
                           for(int i=0;i<index;i++){
                            if (nameArray[i]!="")
                            {
                                cout<<nameArray[i]<<"\t"<<ageArray[i]<<"\t"<<aggregateArray[i]<<"%"<<endl;
                            }
                           }
                                // admit students in their disciplines 
                              cout<<"-----Admission Result-----"<<endl;
                              cout<<"Name\tAggerate\t\tAdmitted To"<<endl;
                              int cs_seats=2,ce_seats=2,ee_seats=2,me_seats=2;
                              for(int i=0;i<index;i++) 
                              {
                                if(nameArray[i]!="")
                                {
                                    string pref[3]={pref1Array[i],pref2Array[i],pref3Array[i]};
                                    bool admitted=false;
                                for(int p=0;p<3;p++)
                            {
                                if(admitted==false)
                                {
                                    if (pref[p]=="CS" && cs_seats>0)
                                    {
                                        cout<<nameArray[i]<<"\t"<<aggregateArray[i]<<"%\t\t"<<"CS"<<endl;
                                        cs_seats--;
                                        admitted=true;
                                        ce_seats--;
                                        admitted=true;
                                    }
                                    else if (pref[p]=="EE" && ee_seats>0)
                                    {
                                        cout<<nameArray[i]<<"\t"<<aggregateArray[i]<<"%\t\t"<<"ME"<<endl;
                                        ee_seats--;
                                        admitted=true;
                                    }
                                    else if (pref[p]=="ME" && me_seats>0)
                                    {
                                        cout<<nameArray[i]<<"\t"<<aggregateArray[i]<<"%\t\t"<<"ME"<<endl;
                                        me_seats--;
                                        admitted=true;
                                    }
                                }
                            }
                            if(admitted==false)
                            {cout<<nameArray[i]<<"\t"<<aggregateArray[i]<<"%\t\tNot Admitted(no seats available)"<<endl;
                            }
                            }
                            }
                            cout<<"-----Remaining Seats-----"<<endl;
                            cout<<"CS: "<<cs_seats<<"|CE: "<<ce_seats<< "|EE: "<<ee_seats<<" |Me: "<<me_seats<<endl;
                        }
                        else if(adminoption==5){
                        //delete record
                         cout<<"Enter name that you want to delete:";
                            string name;
                            cin>>name;
                            bool found=false;
                           int foundindex=-1;
                           for(int i=0;i<index;i++)
                           {
                            if(nameArray[i]==name)
                            {
                            foundindex=i;
                            found=true;
                            }
                           }
                        if(found=true){
                          nameArray[foundindex] = "";
                         ageArray[foundindex] = 0;
                         matricArray[foundindex] = 0;
                         interArray[foundindex] = 0;
                         ecatArray[foundindex] = 0;
                         pref1Array[foundindex] = "";
                         pref2Array[foundindex] = "";
                         pref3Array[foundindex] = "";
                         cout<<"Record of "<<name<<" deleted"<<endl;
                        }
                        else
                        {
                        cout<<"Record not found"<<endl;
                        }
                           
                        }
                        else if (adminoption == 6)
                        {
                            break;
                        }
                        else
                        {
                            cout << "you entered wrong option" << endl;
                        }
                        cout<<"press any key to continue";
                        getch();
                    }
                    cout<<"press any key to continue"<<endl;
                    getch();
                    break;
                }
                else
                {
                    cout << "Username or password is invalid" << endl;
                }
                cout << "press any key to continue..";
                getch();
            }
        }
        else if (useroption == 2)
        {
            // write student code here
            system("cls");
            cout << "Welcome to UMS Stundent Menu" << endl;
            cout << "Enter your name:";
            string name;
            cin >> name;

            cout << "Enter your age:";
            int age;
            cin >> age;

            cout << "Enter your matric mark:";
            float matric;
            cin >> matric;

            cout << "Enter your FSC marks:";
            float FSC;
            cin >> FSC;

            cout << "Enter your ecat marks:";
            float ecat;
            cin >> ecat;

            cout << "Enter CS,CE.EE as your prefrences" << endl;
            cout << "Enter your 1st prefrence:";
            string pref1;
            cin >> pref1;

            cout << "Enter your 2nd prefrence:";
            string pref2;
            cin >> pref2;

            cout << "Enter your 3rd prefrence:";
            string pref3;
            cin >> pref3;

            nameArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric;
            interArray[index] = FSC;
            ecatArray[index] = ecat;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;
            index = index + 1;
            cout << "Your record has been saved sucessfully" << endl;

            cout << "press any key to continue..";
            getch();
        }
        else if (useroption == 3)
        {
            break;
        }
        else
        {
            cout << "You Entered wrong option" << endl;
        }
    } // end of our main while loop
    cout << endl
         << "Thanks for using this software";
}
