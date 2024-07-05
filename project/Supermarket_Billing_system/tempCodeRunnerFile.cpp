 
// #include <iostream>
// #include <fstream>
// using namespace std;

// class shopping 
// {
// private:
//     int pcode;
//     float price;
//     float dis;
//     string pname;

// public:
//     void menu();
//     void administration();
//     void buyer();
//     void add();
//     void edit();
//     void rem();
//     void list();
//     void receipt();

// };

// void shopping :: menu()
// {
// m:
//     int choice;
//     string email;
//     string pass;

//     cout<<"\t\t\t_________________________________"<<endl;
    
//     cout<<"                                       "<<endl;
//     cout<<"                                       "<<endl;
//     cout<<"       Supermarket Main Menu           "<<endl;
//     cout<<"                                       "<<endl;
//     cout<<"                                       "<<endl;
//     cout<<"_______________________________________"<<endl;
//     cout<<"     1) Administrator                  "<<endl;
//     cout<<"                                       "<<endl;
//     cout<<"     2) Buyer                          "<<endl;
//     cout<<"                                       "<<endl;
//     cout<<"     3) Exit                           "<<endl;
//     cout<<"                                       "<<endl;
//     cout<<"     Please select an option: ";
//     cin>>choice;

//     switch(choice)
//     {
//     case 1 :
//         {
//             cout<<"   Please login "<<endl;
//             cout<<"   Enter email: ";
//             cin>>email;
//             cout<<"   Enter password: ";
//             cin>>pass;

//             if(email == "saurabhwanjari10@gmail.com" && pass == "12345")
//             {
//                 administration();
//             }
//             else
//             {
//                 cout<<"Invalid email/password";
//             }
//             break;
//         }

//     case 2 :
//         {
//             buyer();
//             break;
//         }
//     case 3 :
//         {
//             exit(0);
//             break;
//         }
//     default :
//         {
//             cout<<"Please select from the given options";
//             break;
//         }
//     }
//     goto m;
// }

// void shopping :: administration()
// {  
// m:
//     int choice;
//     cout<<"      Administrator menu    "<<endl;
//     cout<<"      1) Add the product    "<<endl;
//     cout<<"      2) Modify the product "<<endl;
//     cout<<"      3) Delete the product "<<endl;
//     cout<<"      4) Back to main menu  "<<endl;
//     cout<<"   Please enter your choice: ";
//     cin>>choice;

//     switch (choice)
//     {
//     case 1 :
//         {
//             add();
//             break;
//         }
//     case 2 :
//         {
//             edit();
//             break;
//         }
//     case 3 :
//         {
//             rem();
//             break;
//         }
//     case 4 :
//         {
//             menu();
//             break;
//         }
//     default :
//         {
//             cout<<"Invalid choice";
//             break;
//         }
//     }
//     goto m;
// }

// void shopping :: buyer()
// {
// m:
//     int choice;
//     cout<<"         Buyer                  "<<endl;
//     cout<<"________________________________"<<endl;
//     cout<<"         1) Buy product         "<<endl;
//     cout<<"         2) Go back             "<<endl;
//     cout<<"________________________________"<<endl;
//     cout<<"Enter your choice: ";
//     cin>>choice;    

//     switch (choice)
//     {
//     case 1 :
//         {
//             receipt();
//             break;
//         }
//     case 2 :
//         {
//             menu();
//             break;
//         }
//     default :
//         {
//             cout<<"Invalid choice";
//             break;
//         }
//     }
//     goto m;
// }

// void shopping :: add()
// {
// m:
//     fstream data;
//     int token = 0;
//     float p;
//     float d;
//     string n;

//     cout<<"Add new product"<<endl;
//     cout<<"Product code of the product: ";
//     cin>>pcode;
//     cout<<"Name of product: ";
//     cin>>pname;
//     cout<<"Price of the product: ";
//     cin>>price;
//     cout<<"Discount on the product: ";
//     cin>>dis;

//     data.open("database.txt", ios::in);
//     if(!data)
//     {
//         data.open("database.txt", ios::app | ios::out);
//         data<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
//         data.close();
//     }
//     else
//     {
//         data.close();
//     }

//     cout<<"Record inserted"<<endl;
// }

// void shopping :: edit()
// {
//     fstream data, data1;
//     int pkey;
//     int token = 0;
//     int c;
//     float p;
//     float d ;
//     string n;

//     cout<<"Modify the record"<<endl;
//     cout<<"Enter the product code: ";
//     cin>>pkey;

//     data.open("database.txt", ios::in);
//     if(!data)
//     {
//         cout<<"File does not exist!"<<endl;
//     }
//     else
//     {
//         data1.open ("database1.txt", ios::app | ios::out);
//         while(!data.eof())
//         {
//             data>>pcode>>pname>>price>>dis;
//             if(pkey == pcode)
//             {
//                 cout<<"Enter new product code: ";
//                 cin>>c;
//                 cout<<"Enter name of the product: ";
//                 cin>>n;
//                 cout<<"Enter discount: ";
//                 cin>>d;
//                 data1<<c<<" "<<n<<" "<<price<<" "<<d<<endl;
//                 token++;
//             }
//             else
//             {
//                 data1<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<endl;
//             }
//         }

//         data.close();
//         data1.close();
       
//     }
    
//     remove("database.txt");
//     rename("database1.txt", "database.txt");
