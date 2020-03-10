#pragma once
#include<iostream>
#include<vector>


class Hand
{
public:
	
	Hand();
	virtual ~Hand();

	void Add(class Card* pCard);
	void Clear();
	int GetTotal()const;
	
protected:
	
	std::vector <Card*>m_Cards;

};

