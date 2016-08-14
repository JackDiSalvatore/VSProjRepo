#pragma once

#ifndef SALLY_H
#define SALLY_H


class Sally
{
public:
	Sally();
	Sally(int);
	Sally operator+ (Sally);	// overloaded + operator, takes a Sally	
								// returns a Sally

	int num;

private:

};

#endif // !SALLY_H

