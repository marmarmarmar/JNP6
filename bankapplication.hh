#include "bankaccount.hh"

class BankApplication {

  SavingAccoutPrototype saving_account_proto;
  CurrencyAccoutPrototype currency_account_proto;
  CheckingAccoutPrototype checking_account_proto;

  CurrentlySetPrototype currently_set_prototype;
  friend BankCommision::bankApplication(void);
  BankApplication(void);

  public:
  Bank createBank(void);
  void checkingAccount(void);
  void savingAccount(void);
  void currencyAccount(void);
  void monthlyCharge(float);
  void transferCharge(float);
  void interestRate(float);
};
