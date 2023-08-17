//How to find its a prime number
/* #include <iostream>
#include <cmath>

using namespace std;
int main()
{
int n;
cout<<"Enter the number: ";
cin>>n;
bool flag=0;
for (int i=2; i<sqrt (n); i++)
{
    if (n%i==0)
    {
        cout<<"Non-prime"<<endl;
        flag = 1;
    }
}
if (flag==0)
{
    cout<<"Prime"<<endl;
}
}
*/


#include<iostream>
#include<math.h>
#include <cmath>
using namespace std;


/*//Reverse a number
{
    int main()
    {
    int n;
    cout << "Enter the number: ";
    cin>> n;
    int reverse=0;
    while(n>0)
    {
        int lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;
    }
    cout<<" "<<reverse<<endl;
    return 0;

}


{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int original_number=n;
    int sum=0;

    while(n>0)
    {
        int lastdigit=n%10;
        sum+= pow(lastdigit,3);
        n=n/10;

    }
    cout<<"The value of sum is: "<<sum<<endl;
    if (sum==original_number)
    {
        cout<<"Armstrong number";
    }

    else{
        cout<<"Not an armstrong number";
    }

    return 0;

}*/


//Print all the prima numbers between two given numbers

/*bool isprime(int num){
    for(int i=2; i<= sqrt(num); i++)
    {
        if (num%i==0){
        return false;
    }
    }
 
    return true;
}

int main()

{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    for (int i=a; i<=b; i++)
    {
        if (isprime(i)){
            cout<<i<<endl;
        }

    }

return 0;
} */

//Fibonacci series printing
/*void fib(int num){
    int t1 =0;
    int t2=1;
    int nextTerm;

    for (int i=0;i<=num; i++){
        
        cout<<t1<<endl;
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;

    }
    return;
}
int main()
{
    int n;
    cout<<"Enter the number of terms of you want : "<<endl;
    cin>>n;
    fib(n);
    

}*/
// factorial of a given number and then the binary coefficient of 
//the given number

int fact(int n){
    int factorial=1;
    for(int i=1; i<=n; i++)
    {
        factorial*=i;
    }
    return factorial;
}

int main()
{
    int n,r;
    cin>>n>>r;
    //binary coeff= n!/(n-r)!*(r)!
    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;

    return 0;
}