// #include <iostream>
using namespace std;



int main()

{
    cout << "CALCULATOR BY LEA" << endl
        << "------------------" << endl;

    int firstNumber, secondNumber, sumOfTwoNumbers, diffOfTwoNumbers, prodOfTwoNumbers, quotOfTwoNumbers, modOfTwoNumbers ;
    // int powOfFirstNumber;

    

    cout << "Enter first number: ";

    cin >> firstNumber;

    

    cout << "Enter second number: ";

    cin >> secondNumber;



    // sum of two numbers is stored in variable sumOfTwoNumbers

    sumOfTwoNumbers = firstNumber + secondNumber;
    diffOfTwoNumbers = firstNumber - secondNumber;
    prodOfTwoNumbers = firstNumber * secondNumber;
    quotOfTwoNumbers = firstNumber / secondNumber;
    modOfTwoNumbers = firstNumber % secondNumber;


    // Prints sum 

    cout << endl << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;     
    cout << endl << firstNumber << " - " <<  secondNumber << " = " << diffOfTwoNumbers;   
    cout << endl << firstNumber << " * " <<  secondNumber << " = " << prodOfTwoNumbers;   
    cout << endl << firstNumber << " / " <<  secondNumber << " = " << quotOfTwoNumbers;  
    cout << endl << firstNumber << " % " <<  secondNumber << " = " << quotOfTwoNumbers;  
    // cout << endl << pow(firstNumber, 3); 

    return 0;

}

 //New extreme very amazing feature

    int n, s, i, j;

    cout << "\n\nEnter number of rows: ";

    cin >> n;

    for(i = 1; i <= n; i++)

    {

    //for loop for displaying space

    for(s = i; s < n; s++)

    {

    cout << " ";

    }

    //for loop to display star equal to row number

    for(j = 1; j <= (2 * i - 1); j++)

    {

    cout << "*";

    }

    // ending line after each row

    cout << "\n";

    }

    

    cout << "Source: This is from Stackoverflow.";