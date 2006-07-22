// =======================================================================
// Linux_SambaGlobalOptionsRepositoryInstance.h
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
#ifndef Linux_SambaGlobalOptionsRepositoryInstance_h
#define Linux_SambaGlobalOptionsRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalOptionsRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalOptionsRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalOptionsInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGlobalOptionsRepositoryInstance();
    Linux_SambaGlobalOptionsRepositoryInstance(
      const Linux_SambaGlobalOptionsRepositoryInstance& anInstance);
    Linux_SambaGlobalOptionsRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalOptionsRepositoryInstance();
       
    Linux_SambaGlobalOptionsRepositoryInstance& operator=(
      const Linux_SambaGlobalOptionsRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalOptionsInstanceName& anInstanceName);        
    const Linux_SambaGlobalOptionsInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement {

    Linux_SambaGlobalOptionsRepositoryInstance* m_elementP;
    Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement();
    ~Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalOptionsRepositoryInstanceEnumeration {

    private:
    Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalOptionsRepositoryInstanceEnumeration();
    Linux_SambaGlobalOptionsRepositoryInstanceEnumeration(
      const Linux_SambaGlobalOptionsRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalOptionsRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalOptionsRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalOptionsRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalOptionsRepositoryInstance& anInstance);

  };

}

#endif
