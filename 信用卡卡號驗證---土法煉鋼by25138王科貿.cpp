#include <iostream>
using namespace std;

int main() {
  int num1,num2,num3;
  long int card;
  long int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
  int A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P;
  cout<<"請輸入信用卡卡號:";
  cin>>card;
  a=card%10000000000000000;
  b=card%1000000000000000;
  c=card%100000000000000;
  d=card%10000000000000;
  e=card%1000000000000;
  f=card%100000000000;
  g=card%10000000000;
  h=card%1000000000;
  i=card%100000000;
  j=card%10000000;
  k=card%1000000;
  l=card%100000;
  m=card%10000;
  n=card%1000;
  o=card%100;
  p=card%10;
  
  a=A=(a-b)/1000000000000000;
  b=B=(b-c)/100000000000000;
  c=C=(c-d)/10000000000000;
  d=D=(d-e)/1000000000000;
  e=E=(e-f)/100000000000;
  f=F=(f-g)/10000000000;
  g=G=(g-h)/1000000000;
  h=H=(h-i)/100000000;
  i=I=(i-j)/10000000;
  j=J=(j-k)/1000000;
  k=K=(k-l)/100000;
  l=L=(l-m)/10000;
  m=M=(m-n)/1000;
  n=N=(n-o)/100;
  o=O=(o-p)/10;
  P=p;
  //設定各種土法煉鋼用的值
  
  num2=card/100000000000000;
  num3=card/10000000000;
  //後面辦別時要用的

  a=a*2;
  if (a>9)
  {    a=a-9;  }
  c=c*2;
  if (c>9)
  {    c=c-9;  }
  e=e*2;
  if (e>9)
  {    e=e-9;  }
  g=g*2;
  if (g>9)
  {    g=g-9;  }
  i=i*2;
  if (i>9)
  {    i=i-9;  }
  k=k*2;
  if (k>9)
  {    k=k-9;  }
  m=m*2;
  if (m>9)
  {    m=m-9;  }
  o=o*2;
  if (o>9)
  {    o=o-9;  }  
  num1=a+b+c+d+e+f+g+h+i+j+k+l+m+n+o;
  num1=num1%10;
  //數字加權以及加總

  if(num1==0&&p==0)
  {
    cout<<"輸入的卡號符合卡號規則\n";
  }else if(10-num1==p)
      {
        cout<<"輸入的卡號符合卡號規則\n";
    }else{
      cout<<"輸入的卡號不符合規則\n";
      return 0;
      }
  //判斷卡號是否符合規則

  if(A==4)
  {
    cout<<"使用的卡種為Visa Card\n";
  }else if(num2>50&&num2<56||num3<272100&&num3>222099)
    {
      cout<<"使用的卡種為Master Card";    
    }else{
      cout<<"輸入的卡號並不適用於此程式\n";
      return 0;
    }
  //辨別卡種或者以上皆非
}
