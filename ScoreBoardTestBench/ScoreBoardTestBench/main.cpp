#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class ScoreBoard
{
private:
	class Score
	{
	public:
		Score(int score, const char* time)		// Construct score with data
		{
			this->score = score;
			this->time = (char*)malloc(strlen(time) + 1);
			nextScore = NULL;
		}
		Score(FILE* file);						// Construct score from a saved file
		void Serialize(FILE* file);				// Save score to a file
		bool InsertScore(Score* inScore)		// Method for inserting a new score
		{
			if (inScore->score <= score)
			{
				if (nextScore->InsertScore(inScore) == true)		// correct location to insert the score
				{
					inScore->nextScore = nextScore;					// score to be inserted points to nextScore
					nextScore = inScore;							// put the new score in
					return false;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return true;					// true means this is the right position in the list
			}
		}
		Score* Next();							// Find next score in list
		~Score()								// Destructor
		{
			free(time);
		}
		/* Data inside Score*/
	private:
		int score;
		char* time;
		Score* nextScore;
	};
public:
	ScoreBoard();
	~ScoreBoard();
	void AddScore(int score, const char* time);
	void Test()
	{	// new puts objects on the heap
		// new keyword allocates memory for the object Score and returns a pointer to it
		firstScore = new Score(100, "hammertime");	// first score is pointer
		firstScore->InsertScore(new Score(50, "miller time"));
		firstScore->InsertScore(new Score(20, "time to go bed"));
		firstScore->InsertScore(new Score(70, "foo"));
	}
private:
	Score* firstScore;							// First score in the list
};

int main()
{
	ScoreBoard board;
	
}