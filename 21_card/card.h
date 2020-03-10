#pragma once
#include<iostream>




using namespace std;
class Card
{
public: 
	enum rank {ace=1, two,three,four,five,six,seven,eight,nine,ten,jack,queen,king};//������������ ����
	enum suilt {clubs,diamonds,hearts,spades};//����� ����
	friend ostream& operator<<(ostream& os,const Card& aCard);
	//���������� ���������<<, ����� ����� ���� ��������� ������ ���� Card �� ����� 
		Card(rank r = ace,suilt s = spades,bool ifu = true);
		//����������� �������� ������ �� 1 �� 11
		int GetValue()const;
		//�������������� ����� ������� ����� � ����
		void Flip();
		//� �� ������ ����� � ����
		friend class Hand;
private:
	rank m_Rank;
	suilt m_Suilt;
	bool m_IsFaceUp;
};

