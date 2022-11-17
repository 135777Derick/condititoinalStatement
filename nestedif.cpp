   #include <iostream>
   #include <string>
   using namespace std;
   int main() {
       // declare name
    int age;
    string name, interest;
    // capture name
    cout<< "Please enter the childs name\n";
    getline(cin, name);
    //capture age
    cout<< "please enter the age\n";
    cin>>age;
    // check condition
    if (age >=4&&age <=10){
        cout<< "Please enter the childs interest\n";
        cin>>interest;
        if(interest =="soccer"){
            cout<<name + "Assign to soccer play group\n";
            }
            else if(interest == "art"){
                cout<<name + "Assign to Art play group\n";
            }
            else{
                cout<<"Assign to other groups";
            }
        }
    else{
        cout<<"Declined! Invalid age";
    }

    return 0;
}
