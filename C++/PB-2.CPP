#include<iostream.h>
#include<conio.h>
#include<math.h>

int main() {

  clrscr();

  double f1=1, f2=2, f3=3, sum=2;

  while(f3 < 4000000) {
    f3 = f1 + f2;
    cout<<f3<<" ";
    f1 = f2;
    f2 = f3;
    if(fmod(f3,2)==0) // fmod(floating point number, number to divide with) is used to find remainder of floating point numbers
    sum += f3;
  }

  cout<<endl<<"The even sum is "<<sum;

  getch();
  return 0;
}
