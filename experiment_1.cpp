#include <iostream>
#include <string>
#include <map>
using namespace std;
void operators(string alphabet){
    int totaloperators = 6;
    int operatorscount =0;
    char operators[] = {'+','-','/','*','%','='};
    char operatorss[10000];
    for (int i=0; 1<alphabet.length();i++){
            for (int j=0; j<totaloperators; j++ ){
                    if(alphabet [i] == operators [j]){
                            operators[operatorscount]= alphabet[i];
                    operatorscount++;
                    break;
                    }
            }
    }
    if (operatorscount == false){
            cout<<"There is no operators here"<<endl;
    }
    else {

    cout<<"operators are visible"<<endl;

}
}

void check (string alphabet)
{
    bool decimal = false;
    for (int i=0; i<alphabet.length(); i++){

    if (!((alphabet[i] >= 'A' && alphabet[i] <= 'Z') ||(alphabet[i] >= 'a' && alphabet[i] <= 'z') ||(alphabet[i] >= '0' && alphabet[i] <= '9') || alphabet[i] == '_'))
         {
            decimal = true;
    if (!((alphabet[0] >= 'A' && alphabet[0] <= 'Z') ||(alphabet[0] >= 'a' && alphabet[0] <= 'z') || alphabet[0] == '_'))
    break;
    }
    }

if (decimal==false)
{
    cout<<"The number is valid  :) "<<endl;
}
else
{
    cout<<"number is not valid :( "<<endl;
}

}
int main() {
    int arr[10] = {10, 20, 30, 40, 50,60,70,80,90,100};
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    int minimum = arr[0];
    int maximum = arr[0];

    for (int i = 1; i < 10; i++)
    {
        if (arr[i] < minimum)
            minimum = arr[i];

        if (arr[i] > maximum)
            maximum = arr[i];
    }

    cout << "Minimum = " << minimum << endl;
    cout << "Maximum = " << maximum << endl;

    string firstname, lastname, fullname;

    cout << "Enter Your First Name: ";
    cin >> firstname;
    cout << "Enter Your Last Name: ";
    cin >> lastname;

    fullname = firstname + " " + lastname;

    cout << " Full Name = " << fullname << endl;


    double average = (double)sum / 10;
    cout << "Average value = " << average << endl;

    string alphabet;
    cout<<"Put your number:"<<endl;
    cin>>alphabet;
    check(alphabet);

    return 0;
}

