
#ifndef SALLY_H
#define SALLY_H

class Sally
{
public:
	Sally(int a, int b);
	~Sally();

	void print();
	void printShiz();
	void printShiz2() const;
private:
	int regVar;
	const int cnstVar;
};



#endif SALLY_H