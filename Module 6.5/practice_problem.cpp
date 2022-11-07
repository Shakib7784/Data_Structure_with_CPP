#include<bits/stdc++.h>
using namespace std;
class Student
{

// declare name ,section,roll, marks, password
    public:
    string name;
    char section;
    int roll;
    protected:
        int english_marks;
    private:
        string password;
    public:
        // set marks ,password and get marks that means make protected and private to public
        void set_marks(int marks)
        {
            english_marks=marks;
        }
        int get_marks()
        {
            return english_marks;
        }
        void set_password(string pass)
        {
            password=pass;
        }
        // take input of name, section, and rolll
        void getdata()
        {
            cout<<"Name:"<<endl;
            cin>>name;
            cout<<"section :"<<endl;
            cin>>section;
            cout<<"roll: "<<endl;
            cin>>roll;
        }
        // show output of name, section, and rolll
        void showdata()
        {
            cout<<"Name is: "<<name<<endl;
            cout<<"section is: "<<section<<endl;
            cout<<"roll is: "<<roll<<endl;
        }
        // update marks function
    public:
        int marks_for_update;
        string password_check;
        void UpdateMarks(string pass, int marks)
        {
            password_check=pass;
            marks_for_update= marks;

        }
};
int main()
{
   cout<<"enter array size"<<endl;
   int N;
    cin>>N;
    // declare array with size
   Student st[N];
   // m for taking input of marks and p for password which will go as parameter of set_marks and set_password function
    int m;
    string pas;
    int update_marks;
    string check_p;

    // this loop is for taking input by object for multiple students
    for(int i=0;i<N;i++)
    {
          cout<<"information of student "<<i+1<<endl;
        // calling get data function through st object
        st[i].getdata();
        cout<<"enter english marks and password "<<endl;
        cin>>m>>pas;

        // passing m and p as parameter
        st[i].set_marks(m);
        st[i].set_password(pas);


    }
    // this loop is for checking password and update marks
    for(int i=0;i<N;i++)
    {

         cout<<endl<<"check pass and update marks of student "<<i+1<<endl;
        cout<<"enter password for checking"<<endl;
        cin>>check_p;
        st[i].UpdateMarks(check_p,m);

    }
    // this loop is for showing output
    for(int i=0;i<N;i++)
    {

        cout<<"information of student: "<<i+1<<endl;
        st[i].showdata();
         if(check_p!=pas)
        {
            cout<<"Sorry, password is not matching for student"<<i+1<<endl;
        }
        else
        {
           cout<<"Marks is : "<<st[i].get_marks();
        }


    }
}
