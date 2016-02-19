#include<iostream.h>
#include<conio.h>
#include<math.h>

int main() {

  clrscr();

  float sumsqtot = 0, sumtotsq = 0, final, sum;
  int l;

  cout<<"Limit:";
  cin>>l;

  //For sum of squares of numbers
  for(int i=1; i<=l; ++i)
  sumsqtot = sumsqtot + i*i;

  cout<<sumsqtot<<endl;

  //For square of total sum of numbers
  sum = (l*(l+1))/2;
  cout<<sum<<endl;
  sumtotsq = sum*sum;

  cout<<sumtotsq<<endl;

  final = sumtotsq - sumsqtot;

  cout<<"Final Answer:"<<final;

  getch();
  return 0;

}
