#include "card.h"
Card::Card(rank r, suilt s, bool ifu) : m_Rank(r), m_Suilt(s), m_IsFaceUp(ifu)
{}
int Card::GetValue()const
{
	int Value = 0;//���� ����� ����������� ������ � ���� �� ��� ����� 0
	if (m_IsFaceUp)
	{

		Value = m_Rank;//�������� ��� �����, �������� �� �����
		if (Value > 10)
		{
			Value = 10;// �������� ����� 10 �� ����� ������������ ����� ����
		}
	}
	return Value;

}
void Card::Flip()
{
	m_IsFaceUp = !(m_IsFaceUp);

}