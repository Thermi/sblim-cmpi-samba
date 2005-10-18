/**
 *  Linux_SambaShareSecurityForShareRepositoryExternal.h
 * 
 * (C) Copyright IBM Corp. 2005
 *
 * THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
 * ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
 * CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
 *
 * You can obtain a current copy of the Common Public License from
 * http://www.opensource.org/licenses/cpl1.0.php
 *
 * Author:     Rodrigo Ceron <rceron@br.ibm.com>
 *
 * Contributors:
 *
 */


#ifndef Linux_SambaShareSecurityForShareRepositoryExternal_h
#define Linux_SambaShareSecurityForShareRepositoryExternal_h

#include "Linux_SambaShareSecurityForShareInstanceName.h"
#include "Linux_SambaShareSecurityForShareRepositoryInstance.h"
#include "CmpiBroker.h"

namespace genProvider {

  class Linux_SambaShareSecurityForShareRepositoryExternal {
  	
    public:
    Linux_SambaShareSecurityForShareRepositoryExternal(
     const CmpiBroker& brkr,
     const CmpiContext& ctx);
    virtual ~Linux_SambaShareSecurityForShareRepositoryExternal();
    
    virtual void enumInstanceNames(
     Linux_SambaShareSecurityForShareInstanceNameEnumeration&);
     
    virtual void enumInstances(
     const char* *properties,
     Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration&);
     
    virtual Linux_SambaShareSecurityForShareRepositoryInstance getInstance(
     const char* *properties,
     const Linux_SambaShareSecurityForShareInstanceName&);
     
    virtual void setInstance(
     const char* *properties,
     const Linux_SambaShareSecurityForShareRepositoryInstance&);
     
    virtual void createInstance(
     const Linux_SambaShareSecurityForShareRepositoryInstance&);
     
    virtual void deleteInstance(
     const Linux_SambaShareSecurityForShareInstanceName&);
     
    private:
    CmpiBroker  broker;
    CmpiContext context;
    const static char *nsp;
  };
}
#endif
