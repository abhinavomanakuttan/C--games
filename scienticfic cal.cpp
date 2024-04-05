#include <iostream>
#include <math.h>
using namespace std;
  void Addition();
  void Subtraction();
  void Multiplication();
  void Division();
  void Power();
  void Factorial();
  void square();
  void cube();

  void squareroot();


int main()
{
    cout<<"Welcome to the scientific Calculator , developed by.....!!\n";
    cout<<"****Press 0 to quit the programing****\n ";
    cout<<"Enter 1 for Addition \n" ;
    cout<<"Enter 2 for Subtraction \n ";
    cout<<"Enter 3 for Multiplication \n ";
    cout<<"Enter 4 for Division\n ";
    cout<<"Enter 5 for Power \n";
    cout<<"Enter 6 for Factorial \n";
    cout<<"Enter 7 for square \n";
    cout<<"Enter 8 for cube\n ";


    while(1){
    int choice;
    cout<<"Enter you choice: ";
    cin>>choice;

    switch(choice){
        case 1:
        Addition();
        break;

        case 2:
        Subtraction();
        break;

        case 3:
        Multiplication();
        break;

        case 4:
        Division();
        break;

         case 5:
        Power();
        break;

        case 6:
        Factorial();
        break;

        case 7:
        square();
        break;

        case 8:
           cube();
        break;


         case 10:
          squareroot;
        break;



        case 0:

        exit(0);
        default:
        cout<<"****Wrong choice ,  Enter a valid choice****";
        break;


    }
}
    return 0;
}
void Addition(){
    cout<<"Enter the number (Addition):\n ";
    float a,b;
    cin>>a>>b;
    cout<<"Sum of "<<a<<" and "<<b<<"="<<a+b<<"\n";
}
void Subtraction(){
    cout<<"Enter the number (Subtraction):\n ";
    float a,b;
    cin>>a>>b;
    cout<<"Subtraction of "<<a<<" and "<<b<<"="<<a-b<<"\n";
}

void Multiplication(){
    cout<<"Enter the number (Multiplication):\n ";
    float a,b;
    cin>>a>>b;
    cout<<"Multiplication of "<<a<<" and "<<b<<"="<<a*b<<"\n";
}
void Division(){
    cout<<"Enter the number (Division):\n ";
    float a,b;
    cin>>a>>b;
    cout<<"Division of "<<a<<" and "<<b<<"="<<a/b<<"\n";
}
void Factorial(){

    // 5!=5*4*3*2*1

    int n,fact=1;
    cout<<"Enter the number (Factorial):\n ";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact<<"\n";
}

void Power(){

    int x, y, Power;

   cout << "Enter the base value: ";
   cin >> x;

   cout << "Enter the exponent value: ";
   cin >> y;
   Power=pow(x,y);

   cout<<"power ="<<Power<<"\n\n";


}
void square(){
    cout<<"Enter the number (square)";
    double b;
    cin>>b;
    double power = b*b;
    cout<<"The square of "<<b<<" is "<<power<<"\n\n";

}
void cube(){
    cout<<"Enter the number (cube)";
    double b;
    cin>>b;
    cout<<"Cube of"<<b<<" ="<<b*b*b<<"\n\n";
}

void squareroot(){
    cout<<"Enter the number (squareroot) ";
    double n;
    cin>>n;
    double squareroot=sqrt(n);
    cout<<"The squareroot of "<<n<<squareroot<<"\n";
}

