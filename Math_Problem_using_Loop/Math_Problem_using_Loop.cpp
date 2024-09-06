

#include <iostream>
using namespace std;



int main()
{
    int n, sum = 0; 
    
        cout << "Enter the Value = ";
        cin >> n;
    

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << " The Sum of N Value is " << n << endl;
    cout << " Natural Number is = " << sum << endl;
    return 0;
}
