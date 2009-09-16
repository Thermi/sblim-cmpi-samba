// =======================================================================
// CmpiErrorFormater.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://www.opensource.org/licenses/eclipse-1.0.php
//
// Author:        generated
//
// Contributors:
//                Wolfgang Taphorn   <taphorn@de.ibm.com>
//                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
//                Ashoka S Rao       <ashoka.rao@in.ibm.com>
//                Rodrigo Ceron      <rceron@br.ibm.com>
//
// =======================================================================
#ifndef CmpiErrorFormater_h
#define CmpiErrorFormater_h

#include "CmpiStatus.h"

namespace genProvider {

  class CmpiErrorFormater{
  
    public:
    const static int NOT_IMPLEMENTED = 0;
    const static int NOT_SET = 1;
    const static int METHOD_NOT_FOUND = 2;
    
    static CmpiStatus getErrorException(
      const int anErrorCode,
      const char* aParm1P=0,
      const char* aParm2P=0,
      const char* aParm3P=0);
  
  };
  
}

#endif


