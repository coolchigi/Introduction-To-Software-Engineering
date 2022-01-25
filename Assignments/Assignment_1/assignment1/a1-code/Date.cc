
#include "Date.h"

Date::Date(){
	setDate(1,1,1901,12,2);
}

Date::Date(int y, int m, int d, int h, int du){
	setDate(y,m,d,h,du);
}


//setters
void Date::setDay(int d){
	int max = getMaxDay();
	if (d>max) d=max;
	if (d<1) d=1;
	day = d;
}

void Date::setMonth(int m){
	if (m > 12) m = 12;
	if (m < 1) m = 1;
	month = m;
}

void Date::setYear(int y){
	if (y < 1901) y = 1901;
	year = y;
}

void Date::setHour(int h){
	if(h > 23) h = 23;
	if(h < 0) h = 0;
	hour = h;
}

void Date::setDuration(int d){
	if(d > maxDuration) d = maxDuration;
	if(d < 1) d = 1;
	duration = d;
}
void Date::setDate(int y, int m, int d, int h, int du){
	setMonth(m);
	setDay(d);
	setYear(y);
	setHour(h);
	setDuration(du);
}

void Date::setDate(Date& d){
	setDate(d.day, d.month, d.year, d.hour, d.duration);
}


//getters
int Date::getDay(){ return day; }
int Date::getMonth(){ return month; }
int Date::getYear(){ return year; }
int Date::getHour(){return hour;}
int Date::getDuration(){return duration; }
const string& Date::getMonthName(){return months[month-1];}


//other

bool Date::lessThan(Date& d){
	if (year == d.year){
		if (month == d.month){
			if(day == d.day){
	      return hour < d.hour;
	    }else{
	      return day < d.day;
	    }
			return day < d.day;
		}else{
			return month  < d.month;
		}
	}else{
		return year < d.year;
	}
}

bool Date::overlaps(Date& d){

//h2 = 18, h1 = 15
//h2 overlaps with h1 when the duration of h1 is at least 3 hours, because 18 <= 15 + 3
//or in terms of variables: the times overlap when h2 <= h1 + h1's duration (assuming h1 < h2)
if (year == d.year && day == d.day && month == d.month)
    {
        if(hour < d.hour && d.hour < hour + duration ||
            d.hour < hour && hour < d.hour + d.duration || d.hour == hour)
            return true;
        else
            return false;
    }
    else
        return false;
}

void Date::print(){
	cout<<getMonthName()<< " "<<getDay()<<", "<<getYear()<<", "<<getHour()<<" Duration: "<< getDuration()<<endl;
}

int Date::getMaxDay(){
	switch(getMonth()){
		case 4:
		case 6:
		case 9:
		case 11: 			return 30;
		case 2:				return 28;
		default:			return 31;
	}
}
