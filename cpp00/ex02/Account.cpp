#include "Account.hpp"
#include <iostream>
#include <time.h>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


Account::Account(void){}

Account::Account( int initial_deposit ) :_amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	std::cout << " index:" << _accountIndex << ";amount:" << _amount <<
	";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	_nbAccounts -= 1;
	_totalAmount -= _amount;
	_totalNbDeposits -= _totalNbDeposits;
	_totalNbWithdrawals -= _totalNbWithdrawals;
	std::cout << " index:" << _accountIndex << ";amount:" << _amount <<
	";closed" << std::endl;
}

int	Account::getNbAccounts()
{
	return _nbAccounts;
}

int	Account::getTotalAmount()
{
	return _totalAmount;
}

int	Account::getNbDeposits()
{
	return _totalNbDeposits;
}


int	Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

int		Account::checkAmount(void) const
{
	return _amount;
}

void	Account::_displayTimestamp(void)
{
	time_t timer;
	tm *time_info;
	char buff[20];

	time(&timer);
	time_info = localtime(&timer);
	strftime(buff, 20, "[%Y%m%d_%H%M%S]", time_info);
	std::cout << buff;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " account:" << _nbAccounts << ";total:"<< _totalAmount <<
	";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex <<
	";amount:" << _amount << ";deposits:" << _nbDeposits <<
	";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" <<
	_amount << ";deposit:" << deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << ";amount:" << _amount << ";nb_deposits:" <<
	_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount 
	<< ";withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return 0;
	}
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:"
	<< _nbWithdrawals << std::endl;
	return 1;
}
