#include <bits/stdc++.h>
using namespace std;

class Teacher
{
private:
    string t_id,t_name, t_department, designation;
public:
    Teacher() {}
    Teacher(string T_id,string T_name, string T_department, string Designation)
    { // teacher constructor for inputing data
        t_id = T_id; 
        t_name = T_name;
        t_department = T_department;
        designation = Designation;
    }
    void show_T()
    {
        cout<<"Teacher Id: "
             << t_id<<endl;
        cout << "Teacher Name: "
             << t_name<<endl;
        cout << "Teacher Department: "
             << t_department<<endl;
        cout << "Designation: "
             << designation<<endl;
    }
    string str_t_id(){
        return t_id;
    }
    string str_t_department(){
        return t_department;
    }
};
class Student
{
private:
    string id;
    string s_name, s_department, t__name,section;
public:
    Student() {}
    Student(string ID,string S_name, string S_department, string Section, string T__name)
    { // Student Constructor for inputing data
        id = ID;
        s_name = S_name;
        s_department = S_department;
        section= Section;
        t__name = T__name;
    }
    void show_S()
    {   
        cout<<"Student ID: "<<id<<endl;
        cout << "Student Name: "
             << s_name<<endl;
        cout << "Student Department: "
             << s_department<<endl;
        cout << "Section: "
             << section[0]<<endl;
        cout << "Teacher Name: "<<t__name<<endl;

    }
    string str_id(){
        return id;
    }
    string str_t__name(){
        return t__name;
    }
};

int main()
{   system("Color 3C");
    Teacher T[10];
    Student S[20];
    char section[1];
    while (1)
    { //  DashBoard
        cout << "===============Welcome To IIUC=================\n";
        cout << "1.Input Information\n";
        cout << "2.Student info Search by ID/Teachers name:\n";
        cout << "3.Teachers info Search by ID/Department:\n";
        cout << "4.Exit\n";
        int inp = 0;
        cin >> inp;
        if (inp == 1) // Input Information
        {   
            system("cls");
            cout << "What you want to Entry?\n";
            cout << "1.Student\n";
            cout << "2.Teacher\n";
            int inp_t_s;
            cout << "Enter Number: ";
            cin >> inp_t_s;
            system("cls");
            if (inp_t_s == 1) // Student Info Entry
            {
                int n;
                cout << "How many entry you want: \n";
                cin >> n;
                string id, s_name, s_department, t__name,section;
                system("cls");
                for (int i = 0; i < n; i++)
                {
                    cout<<"Student ID: ";
                    fflush(stdin);
                    getline(cin,id);
                    cout << "Student Name: ";
                    fflush(stdin);
                    getline(cin, s_name);
                    cout << "Student Department: ";
                    fflush(stdin);
                    getline(cin, s_department);
                    cout << "Section: ";
                    fflush(stdin);
                    getline(cin,section);
                    cout << "Teachers Name: ";
                    fflush(stdin);
                    getline(cin, t__name);
                    S[i] = Student(id,s_name, s_department, section, t__name);
                }
                system("cls");
            }
            else if(inp_t_s==2) // Teacher Info Entry
            {   
                int n;
                cout << "How many entry you want: \n";
                cin >> n;
                string t_id,t_name, t_department, designation;
                system("cls");
                for (int i = 0; i < n; i++)
                {   
                    cout<<"Teacher ID: ";
                    fflush(stdin);
                    getline(cin,t_id);
                    cout << "Teacher Name: ";
                    fflush(stdin);                    
                    getline(cin, t_name);
                    cout << "Teacher Department: ";
                    fflush(stdin);
                    getline(cin, t_department);
                    cout << "Teachers Designation: ";
                    fflush(stdin);
                    getline(cin, designation);
                    T[i] = Teacher(t_id,t_name, t_department, designation);
                }
                system("cls");
            }
            else {
                continue;
            }
        }
        else if (inp == 2)// Student info Search by ID/Teachers name
        {   
            cout<<"1.Show by Id: \n";
            cout<<"2.Show by Teacher's Name: \n";
            int nn;
            cout<<"Enter number: ";cin>>nn;
            if(nn==1){
                string Id;
                cout<<"ID: ";
                fflush(stdin);
                getline(cin,Id);
                system("cls");
                for(int i=0;i<20;i++){
                    if(Id == S[i].str_id()){
                        S[i].show_S();
                    }
                }
            }
            else if(nn==2){
                string TN ;
                cout<<"Teacher's Name: ";
                fflush(stdin);
                getline(cin,TN);
                system("cls");
                for(int i=0;i<20;i++){
                    if(TN==S[i].str_t__name());
                    S[i].show_S();
                }
            }
            else {
                continue;
            }
        }
        else if (inp == 3)// Teacher info Search by ID/Teachers name
        {   
            cout<<"1.Show by Teacher's Id: \n";
            cout<<"2.Show by Teacher's Department: \n";
            int na;cout<<"Enter number: ";cin>>na;
            system("cls");
            if(na==1){
                string Id;
                cout<<"ID: ";
                fflush(stdin);
                getline(cin,Id);
                system("cls");
                for(int i=0;i<10;i++){
                    if(Id == T[i].str_t_id()){
                        T[i].show_T();
                    }
                }
            }
            else if(na==2){
                string T_D;
                cout<<"Desgination: ";
                fflush(stdin);
                getline(cin,T_D);
                system("cls");
                for(int i=0;i<10;i++){
                    if(T_D == T[i].str_t_department()){
                        T[i].show_T();
                    }
                }
            }
            else{
                continue;
            }
        }
        else if(inp==4){
            break;
        }
        else {
            continue;
        }
    }
}