#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Arithmetic operators: "<<endl;
    cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<num1+num2<<endl;
    cout<<"The difference of "<<num1<<" and "<<num2<<" is "<<num1-num2<<endl;
    cout<<"The mul of "<<num1<<" and "<<num2<<" is "<<num1*num2<<endl;
    cout<<"The div of "<<num1<<" and "<<num2<<" is "<<num1/(int)num2<<endl;         // Type casting is used to convert num2 to an integer before performing the division operation. This ensures that the division is performed as integer division, which discards any fractional part and returns only the whole number result.(Look at data type of num1 and num2)
    cout<<"The mod of "<<num1<<" and "<<num2<<" is "<<(num1%num2)<<endl;           // If we want to perform floating-point division, we can cast either num1 or num2 to a floating-point type (e.g., float or double) before the division operation. For example: cout<<"The div of "<<num1<<" and "<<num2<<" is "<<(float)num1/num2<<endl; This will give you a floating-point result that includes any decimal places.(Remember that data type, we also want's to change it to double or float if we want to perform floating-point division)

    cout<<"Relational operators: "<<endl;
    cout<<" "<<num1<<" > "<<num2<<" is "<<(num1>num2)<<endl;
    cout<<" "<<num1<<" < "<<num2<<" is "<<(num1<num2)<<endl;
    cout<<" "<<num1<<" == "<<num2<<" is "<<(num1==num2)<<endl;               // The equality operator (==) is used to compare two values for equality. It returns true if the values are equal and false otherwise. In this case, it checks if num1 is equal to num2 and outputs the result.
    cout<<" "<<num1<<" != "<<num2<<" is "<<(num1!=num2)<<endl;               // Just = is an assignment operator, it assigns the value on the right to the variable on the left. For example, num1 = num2; assigns the value of num2 to num1. 
    cout<<" "<<num1<<" >= "<<num2<<" is "<<(num1>=num2)<<endl;
    cout<<" "<<num1<<" <= "<<num2<<" is "<<(num1<=num2)<<endl;

    cout<<"Logical operators: "<<endl;
    cout<<" "<<num1<<" > 0 && "<<num2<<" > 0 is "<<((num1>0) && (num2>0))<<endl;
    cout<<" "<<num1<<" > 0 || "<<num2<<" > 0 is "<<((num1>0) || (num2>0))<<endl; 
    cout<<"!("<<num1<<" > 0) is "<<!(num1>0)<<endl;                                   // Negation Operator is used to reverse the logical state of its operand. If the operand is true, it returns false; if the operand is false, it returns true. In this case, it checks if num1 is greater than 0 and negates the result.
    
    cout<<"Unary operators: "<<endl;
    cout<<"The Post increment of "<<num1<<" is "<<++num1<<endl;                    // The pre increment operator increments the value of num1 before it is used in the expression, 
    cout<<"The Pre Increment of "<<num2<<" is "<<num2++<<endl;                      //while the post increment operator increments the value of num1 after it is used in the expression.
    cout<<"The Post decrement of "<<num1<<" is "<<--num1<<endl;
    cout<<"The Pre decrement of "<<num2<<" is "<<num2--<<endl;

    return 0;
}