#include<iostream>
using namespace std;
main(){
char s[1000];
cin>>s;	
bool IsBreak=false;
for (int i=0; s[i]!='\0'; i++) 
if (s[i]<48 || s[i]>57) {
cout<<"S not number"; 
IsBreak=true; 
break;
}
<<<<<<< HEAD
else cout<<"Hello world "<<s<<" "<<7;
=======
else cout<<"Hello world "<<s<<" "<<5;
>>>>>>> feature/adding_5_number
}
