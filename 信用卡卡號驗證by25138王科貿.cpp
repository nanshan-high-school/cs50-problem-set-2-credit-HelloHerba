#include <iostream>
using namespace std;
int main() 
{
  char card[16];
  cout <<"請輸入你的信用卡卡號:";
  cin >> card;
  cout << "你的信用卡卡號為:"<<card<<"\n";
  int num1,num2,num3;
  int a=card[0]-48,b=card[1]-48,c=card[2]-48,d=card[3]-48;
  int e=card[4]-48,f=card[5]-48,g=card[6]-48,h=card[7]-48;
  int i=card[8]-48,j=card[9]-48,k=card[10]-48,l=card[11]-48;
  int m=card[12]-48,n=card[13]-48,o=card[14]-48,p=card[15]-48;
  
  
  long int A=card[0]-48,B=card[1]-48,C=card[2]-48,D=card[3]-48;
  long int E=card[4]-48,F=card[5]-48;
  //可能會好看一點(?
  
  
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
  //將奇數位上的數字乘以2,若大於2則減9(數字加權)
  

  num1=a+b+c+d+e+f+g+h+i+j+k+l+m+n+o;
  num1=num1%10;
  
  //將各個位置上的加權數相加後,總和除以10
  
  if(num1==0)
  {
    cout<<"信用卡卡號符合規則\n";
  }else if(p==10-num1)
      {
        cout<<"信用卡卡號符合規則\n";    
      }else
        {
          cout<<"信用卡卡號不符合規則\n"; 
          return 0;
        }
  
  //判斷是否符合卡號規則
  
  
  if(A==4)
  {
    cout<<"使用的信用卡為Visa Card\n";
    return 0;
  }else 
  A=100000*A;
  B=10000*B;
  C=1000*C;
  D=100*D;
  E=10*E;
  num3=A+B+C+D+E+F;
  
  if(num3<272100&&num3>222099)
  {
    cout<<"使用的信用卡為Master Card\n";
    return 0;
  }else 
 
  A=A/10000;
  B=B/10000;
  num2=A+B;
  
  if(num2>50&&num2<56)
  {
    
    cout<<"使用的信用卡為Master Card\n";
    return 0;
  } else{  cout<<"你使用的卡不符合程式適用範圍內\n";  }
  //辨別是MasterCard還是VisaCard或著以上皆非

}
