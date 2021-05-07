#include <iostream>
#include <cmath>

using namespace std;

int add(int num1, int num2)
{
    return num1 + num2;
}

class Book
{
public:
    string name;
    string author;
    int pages;

    Book(string _name, string _author, int _pages)
    {
        name = _name;
        author = _author;
        pages = _pages;
    }

    bool isBigBook()
    {
        if (pages>200){
            return true;
        }
        return false;
    }
};

int main()
{
    // string characterName = "Johnesh";
    // float _float = 1.2;
    // double cgpa = 9.2111211;
    // bool isMale = true;
    // int age;

    // string name;

    // cout << "enter your name" << endl;
    // getline(cin,name);

    // cout << "your name is "<< name <<endl;

    // cout << "Enter age : " <<endl;
    // cin >> age;

    // cout <<"your age is "<< age <<endl;

    // cout << "Hello World " << characterName << " age is " << age << endl;

    // cout << characterName.length() << endl;
    // cout << characterName[0] << endl;
    // characterName[0]='M';
    // cout << characterName << endl;

    // cout << sqrt(25)<<endl;

    /**
     * ARRAYS
     * */

    // int luckynums[]={23,11,34,111};

    // cout <<luckynums[0] <<endl;

    // char spls[10];
    // spls[0]='y';
    // cout <<spls[0] <<endl;

    /**
     * 
     * FUNCTIONS
     */
    // cout << add(2,31) <<endl;

    /**
     * LOOPS
     */

    // int index=0;

    // while(index++<=5){
    //     cout << index << endl;

    // }

    // do{
    //     cout << index << endl;
    // } while(index<0);

    // for(int i=100;i<=105;i++){
    //     cout << i <<endl;
    // }

    // int luckynums[]={23,11,34,111};

    // for(int i=0;i<4;i++){
    //     cout<<luckynums[i]<<endl;
    // }

    /**
     * 2d arrays and nested loops
     */

    // int numbergrid[3][2] = {
    //                             {1,2},{3,4},{5,6}
    //                         };

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<2;j++){
    //         cout<<numbergrid[i][j]<<endl;
    //     }
    //     cout<<endl;
    // }

    /**
     * POINTERS
     */

    // int age=22;
    // int *pAge=&age;

    // double gpa=1.2;
    // double *gpa=&gpa;
    // string name="Talina";

    // cout<<&age<<endl;
    // cout<<pAge<<endl;

    /**
     * CLASSES and OBJECTS
     */

    Book b1("M C Stan", "Mamda", 20);
    cout << b1.author;
    cout<<b1.isBigBook();
    Book b2("M C Stan", "Mamda-2", 2000);
    cout<<b2.isBigBook();

    return 0;
}
