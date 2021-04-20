#include <stdio.h>
#include <iostream>
#include"IntentRecogniser.h"
int main()
{
string strInput;
do{
cout<<"------------------------------"<<endl;
cout<<"Dear user How can i help you? "<<endl;
   cout<<"------------------------------"<<endl<<endl;
   cout<<"Please Enter your Question"<<endl<<endl;
   cout<<"------------------------------"<<endl<<endl;
   getline(cin,strInput);
   cout<<"Your question is  "<<"--"<<strInput<<"--"<<endl<<endl;    
   bIntentSearch(strInput);
   cout<<endl<<"Please press Enter to Continue or 'Q' to quit"<<endl<<endl;
}while( getchar() != 'Q');

return 0;
}
