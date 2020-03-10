#include "card.h"
Card::Card(rank r, suilt s, bool ifu) : m_Rank(r), m_Suilt(s), m_IsFaceUp(ifu)
{}
int Card::GetValue()const
{
	int Value = 0;//если карта перевернута литцом в вниз то она равна 0
	if (m_IsFaceUp)
	{

		Value = m_Rank;//значение это число, указаное на карте
		if (Value > 10)
		{
			Value = 10;// значение равно 10 то карта перевернятся лицом верх
		}
	}
	return Value;

}
void Card::Flip()
{
	m_IsFaceUp = !(m_IsFaceUp);

}