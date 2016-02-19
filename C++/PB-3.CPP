#include<iostream.h>
#include<conio.h>
#include<math.h>

int main() {

  clrscr();

  int flag=1; // 1-prime 0-composite
  long double n = 600851475143;

  for(long double i=2; i<=n/2; ++i) {
    if(fmod(n,i)==0) {
      cout<<i<<" ";
      // To find if prime factor or not
      for(double j=2; j<=i/2; ++j) {
	       if(fmod(i,j)==0)
	        flag = 0;
      }
      cout<<"flag"<<flag<<" ";
      if(flag==1)
      cout<<" Prime factor - "<<i<<endl;
      flag=1;
    }
  }

  getch();
  return 0;

}
