/*
 
(C) Copyright 2012-2013 Massachusetts Institute of Technology

This file is part of the GSMExtras library.

The GSMExtras library is free software: you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public License as
published by the Free Software Foundation, either version 2.1 of the
License, or (at your option) any later version.

The GSMExtras library is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty
of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GSMExtras library.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef _GSM3CLOCKSERVICE_
#define _GSM3CLOCKSERVICE_

#include <GSM3ShieldV1ModemCore.h>

class GSM3ClockService : public GSM3ShieldV1BaseProvider
{
public:
	void manageResponse(byte from, byte to);
	int checkTime();
	int setTime(int year, int month, int day, int hour, int minute, int second);
	int getYear() { return year; }
	int getMonth() { return month; }
	int getDay() { return day; }
	int getHour() { return hour; }
	int getMinute() { return minute; }
	int getSecond() { return second; }
	
private:
	int year, month, day, hour, minute, second;
	bool parseCCLK();
	int checkTimeContinue();
	int setTimeContinue();
};

#endif