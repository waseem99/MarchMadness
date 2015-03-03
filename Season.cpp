#include "Season.h"

multimap<char,string> Season::mSeasonList {};

Season::Season(){

}

Season::Season(multimap<char,string> mSList){
	Season::mSeasonList=mSList;
}

Season:: ~Season(){

}

string Season::GetSeasonsTenure(char cSeasonLabel){
	return Season::mSeasonList.find(cSeasonLabel)->second;
}

char Season::GetcSeasonLable(string sTenure){
	int key = 0;
	for (auto &i : Season::mSeasonList) {
		if (i.second == sTenure) {
			key = i.first;
			break; 
		}
	}
	return key;
}

void Season::AddpSeason(pair <char, string> s){
	Season::mSeasonList.insert(s);
}

