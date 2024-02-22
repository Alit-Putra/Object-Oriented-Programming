#include <iostream>
#include <conio.h>
using namespace std;

/*Math formula to find aritmethic series is [Sn = (n/2)* (2*a+(n-1)*b] 
with n = total member of the series, a = first member of series, b = differences between series members*/

float aritmethicSeries(float a, float b, float n){
    float sumOfSeries = (n/2) * (2*a + (n-1) * b);
    cout<<"The sum of this aritmethic series = "<<sumOfSeries;
    return sumOfSeries;
}

int main(){
    float a, b, n;
    cout<<"First member of series = ";
    cin>>a;
    cout<<"Differences between members = ";
    cin>>b;
    cout<<"Now, input the total of member of this series = ";
    cin>>n;
    aritmethicSeries(a, b, n);
    getch();
    return 0;
}