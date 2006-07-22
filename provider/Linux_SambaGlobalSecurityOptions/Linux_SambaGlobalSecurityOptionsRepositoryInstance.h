// =======================================================================
// Linux_SambaGlobalSecurityOptionsRepositoryInstance.h
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
#ifndef Linux_SambaGlobalSecurityOptionsRepositoryInstance_h
#define Linux_SambaGlobalSecurityOptionsRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalSecurityOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalSecurityOptionsRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalSecurityOptionsRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalSecurityOptionsInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGlobalSecurityOptionsRepositoryInstance();
    Linux_SambaGlobalSecurityOptionsRepositoryInstance(
      const Linux_SambaGlobalSecurityOptionsRepositoryInstance& anInstance);
    Linux_SambaGlobalSecurityOptionsRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalSecurityOptionsRepositoryInstance();
       
    Linux_SambaGlobalSecurityOptionsRepositoryInstance& operator=(
      const Linux_SambaGlobalSecurityOptionsRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalSecurityOptionsInstanceName& anInstanceName);        
    const Linux_SambaGlobalSecurityOptionsInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumerationElement {

    Linux_SambaGlobalSecurityOptionsRepositoryInstance* m_elementP;
    Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumerationElement();
    ~Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumeration {

    private:
    Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumeration();
    Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumeration(
      const Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalSecurityOptionsRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalSecurityOptionsRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalSecurityOptionsRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalSecurityOptionsRepositoryInstance& anInstance);

  };

}

#endif
