#include <iostream>
#include <string>

using namespace std;

int main(){

    //Extracting from string
    string name{"Harsh"};
    string my_name {"Harsh"};
    cout << name[2] << endl;

    //finding length of two string
    int len  = name.length();
    cout << len << endl;

    //comparing two string
    int k = name.compare(my_name);
    if(k==0){
        cout << "Both String Are Equal" << endl;
    }else{
        cout << "Both String Are Not Equal" << endl;
    }

    // resizing the string
    name.resize(2); 
    cout << name << endl;

    //replacing one part of string from other
    string str1 ="This is C language" ; 
    string str2= "java language";  
    cout <<"Before replacement, String is "<<str1<<'\n';  
    str1.replace(8,1,str2,0,4);   
    cout<<"After  replacement,String is "<<str1<<'\n';  

    //appending one string in other
    string str3 = "Mango is my favourite " ;
    string str4 ="fruit";  
    cout<<"Before appending, string value is :" <<str3<<'\n';  
    str3.append(str4,0,5);  
    cout<<"After appending, string value is :" <<str3<<'\n';  


    //finding position of one string in other
    string str= "java is the best programming language";  
    cout <<  str<<'\n';  
    cout <<"Position of the programming word is :";  
    cout<< str.find("programming") <<endl;

    //inserting one string in other string
    string str5= "javat tutorial";
    cout<<"String contains :" <<str5<<'\n';
    cout<<"After insertion, String value is :"<<str5.insert(5,"point");


    return 0; 


}