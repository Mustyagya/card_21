#include "hand.h"
Hand::Hand()
{
	m_Cards.reserve(7);// �������� ���������� ��������� ������� m_Cards �� 7

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
	//�������� �� �������. ���������� ��� ������ � ����
	for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter)
	{
		delete* iter;
		*iter = 0;

	}
	m_Cards.clear();

}
int Hand::GetTotal() const
{
	if (m_Cards.empty())//���� ���� ����� � ����, ������������ �������� 0
	{
		return 0;
	}
	if (m_Cards[0]->GetValue() == 0)
		//���� ������ ����� ����� �������� 0, �� ��� ����� �������� � ����
	{
		return 0;

	}
	//11 ������� ����� ����� ���� ����.������ ��� ���� 1 ����
	int total = 0;
	std::vector<Card*>::const_iterator iter;
	for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter)
	{



	}
}