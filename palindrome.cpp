#include <iostream>
using namespace std;
 
int main() {
	 int n, reverse = 0, t;
 
   cin>>n;
 
   t = n;
 
   while (t != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + t%10;
      t = t/10;
   }
 
   if (n == reverse)
      cout<<"palindrome"<<n;
   else
      cout<<"not palindrome"<<n;
 
	// your code goes here
	return 0;
}
