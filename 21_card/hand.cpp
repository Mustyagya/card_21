#include "hand.h"
Hand::Hand()
{
	m_Cards.reserve(7);// изменяем количество элементов вектора m_Cards на 7

}
Hand::~Hand()
{
	Clear();
}
void Hand::Add(Card* pCard)
{
	m_Cards.push_back(pCard);
}
void Hand::Clear()
{
	std::vector<Card*>::iterator iter = m_Cards.begin();
	//проходит по вектору. освобождая всю память в куче
	for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter)
	{
		delete* iter;
		*iter = 0;

	}
	m_Cards.clear();

}
int Hand::GetTotal() const
{
	if (m_Cards.empty())//если нету карты в руке, возвращается значение 0
	{
		return 0;
	}
	if (m_Cards[0]->GetValue() == 0)
		//если первая карта имеет значение 0, то она лежит рубашкой в верх
	{
		return 0;

	}
	//11 находит сумму очков всех карт.каждый туз дает 1 очко
	int total = 0;
	std::vector<Card*>::const_iterator iter;
	for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter)
	{



	}
}