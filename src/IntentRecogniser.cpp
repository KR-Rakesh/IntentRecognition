#include"IntentRecogniser.h"

/*
Function Name:bIntentSearch
Parameters : String
Return Value: Bool
Description: This Function Uses regex_search() to search the Intent and provide the required output.
*/

bool bIntentSearch(string strIntent){

auto const intent = strIntent;
bool rtval = false;
bool const IntentContainsRegex = std::regex_search(intent, regex1);
bool const IntentContainsRegex1 = std::regex_search(intent, regex2);
bool const IntentContainsRegex2 = std::regex_search(intent, regex3);
bool const IntentContainsRegex3 = std::regex_search(intent, regex4);


   if(IntentContainsRegex==true)
    {
       cout<<"Get Weather"<<endl;
       rtval = true;
    }
    else if(IntentContainsRegex1==true)
    {
       cout<<"Get Weather City"<<endl;
	rtval = true;
    }
    else if(IntentContainsRegex2==true)
    {
       cout<<"Check calendar"<< endl;
	rtval = true;
    }
    else if(IntentContainsRegex3==true)
    {
       cout<<"Get Fact"<< endl;
	rtval = true;
    }
    else{
       cout<<"Please check your question"<<endl;
	rtval = false;
    }

return rtval;

//      cout << boolalpha
 //              << IntentContainsRegex << '\n'
   //            << IntentContainsRegex1<< '\n';
   //          //   << yourTextContainsRegex << '\n'
            //   << theirTextContainsRegex << '\n'
            //   << secondTextContainsRegex<< '\n'
            //   << thirdTextContainsRegex<< '\n';

}
