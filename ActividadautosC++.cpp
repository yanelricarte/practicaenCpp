#include <iostream>
#include <stdlib.h>
using namespace std;
//api3--- switch
  int main(){
 
int n;
bool r, r1, r2, r3, r4, r5, r6, r7;
   cout<<"Que rodado queres?"<<endl;
  cout<<"----------------------------------"<<endl;
  cout<<"un rodado grande---------------(1)"<<endl;
  cout<<"un rodado para campo-----------(2)"<<endl;
  cout<<"un rodado para ciudad----------(3)"<<endl;
  cout<<"una motocicleta----------------(4)"<<endl;
  cin>> n;
  system("clear");
  switch (n){
  case 1:
  cout<<"tengo una camioneta----"<<endl;
  cout<<"Toyota hilux 32.00usd$"<<endl;
  cout<<"La queres (si=1 no=0)" <<endl;
  cin>>r;
  if (r==true){
      cout<<"felicidades es tuya";
  }else{
   system("clear");
   cout<<"tengo una mas economica"<<endl;
   cout<<"Toyota raptor 20000usd$"<<endl;
   cout<<"La queres (si=1 no=0)" <<endl;
   cin>>r1;
   if (r1 == true) {
        cout<<"es tuya";
       }else{
       cout<<"ingresa tus datos y te llamaremos pronto"<<endl;
       }
   }
break;
case 2:
  cout<<"tengo un cuatriciclo----"<<endl;
  cout<<"Can-am Defender Hd10 Max Xt 36.922 usd$"<<endl;
  cout<<"Lo queres (si=1 no=0)" <<endl;
  cin>>r2;
  if (r2==true){
      cout<<"Felicidades es tuyo";
  }else{
   system("clear");
   cout<<"tengo uno economico"<<endl;
   cout<<"Yamaha Grizzly 350 a 9.500 usd$"<<endl;
   cout<<"Lo queres (si=1 no=0)" <<endl;
   cin>>r3;
   if (r3 == true) {
        cout<<"es tuyo";
       }else{
       cout<<"ingresa tus datos y te llamaremos pronto"<<endl;
       }
   }
break;
case 3:
  cout<<"tengo un auto----"<<endl;
  cout<<"Audi TT 2.0 T Fsi 230cv 51.000 usd$"<<endl;
  cout<<"Lo queres (si=1 no=0)" <<endl;
  cin>>r4;
  if (r4==true){
      cout<<"Felicidades es tuyo";
  }else{
   system("clear");
   cout<<"tengo un rodado mas economico"<<endl;
   cout<<"Audi TT 1.8 T Fsi 35.000 usd$"<<endl;
   cout<<"Lo queres (si=1 no=0)" <<endl;
   cin>>r5;
   if (r5 == true) {
        cout<<"es tuyo";
       }else{
       cout<<"ingresa tus datos y te llamaremos pronto"<<endl;
       }
   }
break;
case 4:
  cout<<"tengo una motocicleta----"<<endl;
  cout<<"Kawasaki Z400 Abs 10.400 usd$"<<endl;
  cout<<"La queres (si=1 no=0)" <<endl;
  cin>>r6;
  if (r6==true){
      cout<<"Felicidades es tuya";
  }else{
   system("clear");
   cout<<"tengo una motocicleta mas economica"<<endl;
   cout<<"Yamaha Mt 03 2018 0km 8.300 usd$"<<endl;
   cout<<"La queres (si=1 no=0)" <<endl;
   cin>>r7;
   if (r7 == true) {
        cout<<"es tuya";
       }else{
       cout<<"ingresa tus datos y te llamo pronto"<<endl;
       }
   }
break;
default:
cout <<"Indica la opcion que mas se ajuste a tus necesidades";
}
}
