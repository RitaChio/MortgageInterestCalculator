//Programmer: Rita Chiorescu
//Lab: lab 2C

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double L, monthlyPayment, annualIntRate, rate, amountPaid;
    double N; //number of payments
    
    cout << "Enter the annual rate as a percentage: ";
    cin >> annualIntRate;
    
    cout << "Enter the number of payments: ";
    cin >> N;
    
    cout << "Enter the amount of the loan: ";
    cin >> L;
    
    annualIntRate /= 100;
    rate = annualIntRate / 12;
    monthlyPayment = (rate * pow((1 + rate), N) / (pow((1 + rate), N) - 1)) * L;
    amountPaid = monthlyPayment * N;

    
    cout << "Loan Amount: " << setw(12) << setprecision(3) << fixed << L << endl;
    cout << "Monthly Interest Rate: " << setw(12) << setprecision(3) << fixed << rate << endl;
    cout << "Number of Payments: " << setw(12) << setprecision(3) << fixed << N << endl;
    cout << "Monthly Payment: " << setw(12) << setprecision(3) << fixed << monthlyPayment << endl;
    cout << "Amount Paid Back: " << setw(12) << setprecision(3) << fixed << amountPaid << endl;
    cout << "Interest Paid: " << setw(12) << setprecision(3) << fixed << (amountPaid - L) << endl;
    
    return 0;
}
