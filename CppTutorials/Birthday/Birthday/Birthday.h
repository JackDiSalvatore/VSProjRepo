#pragma once

#ifndef BIRTHDAY_H
#define BIRTHDAY_H

class Birthday
{
public:
	Birthday(int m, int d, int y);

	int printDate();
private:
	int day;
	int month;
	int year;
};

#endif

