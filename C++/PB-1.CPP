#include<iostream.h>
#include<conio.h>

int main() {

  clrscr();

  float num, sum=0;

  cout<<"Give the limit:";
  cin>>num;

  for(int i=1; i<num; ++i) {

    if( i%3==0 || i%5==0) {
      sum = sum + i;
      cout<<i<<endl;
    }
  }

  cout<<"The sum is "<<sum;

  getch();
  return 0;

}
