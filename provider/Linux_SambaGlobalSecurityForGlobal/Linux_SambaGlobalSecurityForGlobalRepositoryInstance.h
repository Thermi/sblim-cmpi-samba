// =======================================================================
// Linux_SambaGlobalSecurityForGlobalRepositoryInstance.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Common Public License from
// http://oss.software.ibm.com/developerworks/opensource/license-cpl.html
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
#ifndef Linux_SambaGlobalSecurityForGlobalRepositoryInstance_h
#define Linux_SambaGlobalSecurityForGlobalRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalSecurityForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalSecurityForGlobalRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalSecurityForGlobalRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalSecurityForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGlobalSecurityForGlobalRepositoryInstance();
    Linux_SambaGlobalSecurityForGlobalRepositoryInstance(
      const Linux_SambaGlobalSecurityForGlobalRepositoryInstance& anInstance);
    Linux_SambaGlobalSecurityForGlobalRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalSecurityForGlobalRepositoryInstance();
       
    Linux_SambaGlobalSecurityForGlobalRepositoryInstance& operator=(
      const Linux_SambaGlobalSecurityForGlobalRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalSecurityForGlobalInstanceName& anInstanceName);        
    const Linux_SambaGlobalSecurityForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement {

    Linux_SambaGlobalSecurityForGlobalRepositoryInstance* m_elementP;
    Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement();
    ~Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration {

    private:
    Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration();
    Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration(
      const Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalSecurityForGlobalRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalSecurityForGlobalRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalSecurityForGlobalRepositoryInstance& anInstance);

  };

}

#endif
