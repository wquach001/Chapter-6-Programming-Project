// Chapter 6 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int getScore();
bool isLower(int value1, int value2);
bool isHigher(int value1, int value2);
int calcAverage(int total, int minScore, int maxScore);

int main()
{
	const int totScores = 5; // Total number of scores
	int minScore = 0;
	int maxScore = 0;
	int score = 0;
	int average = 0;
	int total = 0;
	for (int i = 0; i < totScores; i++) // Loop to get 5 scores
	{
		score = getScore();
		total += score;

		if (isLower(score, minScore))
			minScore = score;
		if (isHigher(score, maxScore))
			maxScore = score;
	}
	average = calcAverage(total, minScore, maxScore);
	cout << "The average score is: " << average << endl;
	return 0;
}
int getScore()
{
	int score;
	cout << "Enter your score: ";
	cin >> score;
	if (score < 0 || score > 10) // Assuming scores are between 0 and 10
	{
		cout << "Invalid score. Please enter a score between 0 and 10." << endl;
		cin >> score; // Re-prompt for valid score
	}
	return score; // Return the valid score
}
bool isLower(int value1, int value2)
{
	return value1 < value2;
}
bool isHigher(int value1, int value2)
{
	return value1 > value2;
}
int calcAverage(int total, int minScore, int maxScore)
{
	return (total - minScore - maxScore) / 3; // Assuming 5 scores, excluding min and max
}
