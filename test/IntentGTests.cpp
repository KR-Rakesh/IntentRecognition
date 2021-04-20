#include<gtest/gtest.h>
#include"../src/IntentRecogniser.h"

/*
Provided some positive and Negative Gtest cases for Intents 
*/

TEST(FirstIntentGtests, sampletest){
string stteststr= "How is the weather like today";
EXPECT_TRUE(bIntentSearch(stteststr));
}

TEST(FirstIntentGtests1, sampletest){
string stteststr= "Will it rain today in Berlin? ";
EXPECT_TRUE(bIntentSearch(stteststr));
}

TEST(FirstIntentGtests2, sampletest){
string stteststr= "Will it snow tomorrow paris?";
EXPECT_TRUE(bIntentSearch(stteststr));
}

TEST(FirstIntentGtests3, sampletest){
string stteststr= "How is the weather like in Frankfurt?";
EXPECT_TRUE(bIntentSearch(stteststr));
}

TEST(FirstIntentGtests4, sampletest){
string stteststr= "Am I free at 13:00 PM tomorrow?";
EXPECT_TRUE(bIntentSearch(stteststr));
}

TEST(FirstIntentGtests5, sampletest){
string stteststr= "Please tell me about the climate today";
EXPECT_TRUE(bIntentSearch(stteststr));
}

TEST(IntentGtests6, sampletest){
string stteststr= "Tell me some facts about Football.";
EXPECT_TRUE(bIntentSearch(stteststr));
}


TEST(IntentGtests7, sampletest){
string stteststr= "Who are you?";
EXPECT_FALSE(bIntentSearch(stteststr));
}


TEST(IntentGtests8, sampletest){
string stteststr= "Give me an answer for 0/0";
EXPECT_FALSE(bIntentSearch(stteststr));
}

TEST(IntentGtests9, sampletest){
string stteststr= "Tell me about my meeting";
EXPECT_TRUE(bIntentSearch(stteststr));
}

TEST(IntentGtests10, sampletest){
string stteststr= "Am i free at 4:30PM today";
EXPECT_TRUE(bIntentSearch(stteststr));
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
