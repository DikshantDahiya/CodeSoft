# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter two numbers on which you wants to perform the operation: ";
  cin >> num1 >> num2;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2<<endl;
      cout<<"The addition of the two numbers is"<< num1+num2<<endl;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2<<endl;
      cout<<"The subtraction of the two numbers is"<< num1-num2<<endl;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2<<endl;
      cout<<"The multiplication of the two numbers is"<< num1*num2<<endl;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2<<endl;
      cout<<"The division of the two numbers is"<< num1/num2<<endl;
      break;

    default:
     
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}