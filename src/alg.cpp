// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
  if (value <= 1)
    return false;
  for (int i = 2; i <= (value/2); i++) {
    if ((value % i) == 0)
      return false;
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
  int Prime_n = 0;
  while (n != 0) {
    Prime_n++;
    if (checkPrime(Prime_n) == true)
      n--;
  }
  return Prime_n;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  value++;
  while (checkPrime(value) != true) {
    value++;
  }
  return value;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  uint64_t sum = 0;
  for (uint64_t i = 2; i < hbound; i++) {
    if (checkPrime(i) == true)
      sum+=i;
  }
  return sum;
}
