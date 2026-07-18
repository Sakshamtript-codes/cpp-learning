/*An energy cooperative charges electricity rates dynamically depending on consumer usage units.
Write a program to compute total charges based on the input consumption units:
• First 100 units: $1.50 per unit
• Next 200 units (101 to 300): $2.50 per unit
• Above 300 units: $4.00 per unit
An additional structural safety surcharge of 15% is appended to the total amount generated.
Find the net bill payable.
Sample — Input: 150 units ⇒ Output: Total Bill = $316.25*/

#include<iostream>
using namespace std;
int main(){
    float units,charges,bill, saftycharges,u1,u2,u3;
    cout<<"Enter the number of units consumed: ";
    cin>>units;

    u1=(units-300)>0 ? (units-300):0;
    u2=(units-(100+u1))>0 ? units-(100+u1):0;
    u3=(units-u2)>0 ? (units-u2):0;
    bill=(u1*4)+(u2*2.5)+(u3*1.5);
    saftycharges=bill*15/100;
    bill=(bill + saftycharges);

    cout<<"Your total payable amount is:$ "<<bill;
}