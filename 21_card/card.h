#pragma once
#include<iostream>




using namespace std;
class Card
{
public: 
	enum rank {ace=1, two,three,four,five,six,seven,eight,nine,ten,jack,queen,king};//перечисление карт
	enum suilt {clubs,diamonds,hearts,spades};//масти карт
	friend ostream& operator<<(ostream& os,const Card& aCard);
	//перегрузка оператора<<, чтобы можно было отправить обьект типа Card на вывод 
		Card(rank r = ace,suilt s = spades,bool ifu = true);
		//возвращение значения колоды от 1 до 11
		int GetValue()const;
		//переварачиваем карту лежащую лицом в верх
		void Flip();
		//и на оборот лицом в вниз
		friend class Hand;
private:
	rank m_Rank;
	suilt m_Suilt;
	bool m_IsFaceUp;
};

