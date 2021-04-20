#include <iostream>
#include <regex>
#include <string>
using namespace std;
   
   auto const regex1 = std::regex("weather like (today|tomorrow)|rain (today|tomorrow)|snow (today|tomorrow)|temprature (today|tomorrow)|weather (today|tomorrow)|climate (today|tomorrow)");
   auto const regex2 = std::regex("weather like (in|at)|rain (in|at)|snow (in|at)|temprature (in|at)|weather today (in|at)|climate in|weather (today|tommarrow) (in|at)");
   auto const regex3 = std::regex("free at|appointment|date|time|meeting|busy at|free");
   auto const regex4 = std::regex("facts|fact");
   
   bool bIntentSearch(string strIntent);


    
   

