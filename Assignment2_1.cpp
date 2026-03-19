#include <iostream>
using namespace std;
string companyName="My CDAC Class";//
class employee
{
    private:
        int empId;
        string name;
        double salary;

    public:
        static int totalEmployees;

     employee(int id, string n, double s)
     {
        empId=id;
        name=n;
        salary=s;
        totalEmployees++;
     }

    void display()
    {
        cout<<"compnay name:"<<companyName<<endl;
        cout<<"Employee id:"<<empId<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"salary:"<<salary<<endl;
    }
    static void  showTotalEmployees()
    {
        cout<<"total emloyees created:"<<totalEmployees<<endl;
    }
};

int employee::totalEmployees;

int main()
{
    employee e1(1,"abc",25000);
    employee e2(2,"abd",35000);
    employee e3(3,"abf",45000);
    employee e4(4,"abg",55000);
    employee e5(5,"abh",65000);
    e1.display();
    e2.display();
    e3.display();
    e4.display();
    e5.display();

    employee::showTotalEmployees();
    return 0;
}






