/* $Id: CoinUtility.hpp 2083 2019-01-06 19:38:09Z unxusr $ */
// Copyright (C) 2004, International Business Machines
// Corporation and others.  All Rights Reserved.
// This code is licensed under the terms of the Eclipse Public License (EPL).

#ifndef CoinUtility_h_
#define CoinUtility_h_

#include "CoinSort.hpp"

template < typename S, typename T >
CoinPair< S, T > CoinMakePair(const S &s, const T &t)
{
  return CoinPair< S, T >(s, t);
}

template < typename S, typename T, typename U >
CoinTriple< S, T, U > CoinMakeTriple(const S &s, const T &t, const U &u)
{
  return CoinTriple< S, T, U >(s, t, u);
}

#endif

/* vi: softtabstop=2 shiftwidth=2 expandtab tabstop=2
*/
