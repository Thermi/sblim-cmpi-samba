// =======================================================================
// Linux_SambaHostRepositoryInstance.h
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
#ifndef Linux_SambaHostRepositoryInstance_h
#define Linux_SambaHostRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaHostInstanceName.h"


namespace genProvider {

  class Linux_SambaHostRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaHostRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaHostInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaHostRepositoryInstance();
    Linux_SambaHostRepositoryInstance(
      const Linux_SambaHostRepositoryInstance& anInstance);
    Linux_SambaHostRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaHostRepositoryInstance();
       
    Linux_SambaHostRepositoryInstance& operator=(
      const Linux_SambaHostRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaHostInstanceName& anInstanceName);        
    const Linux_SambaHostInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaHostRepositoryInstanceEnumerationElement {

    Linux_SambaHostRepositoryInstance* m_elementP;
    Linux_SambaHostRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaHostRepositoryInstanceEnumerationElement();
    ~Linux_SambaHostRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaHostRepositoryInstanceEnumeration {

    private:
    Linux_SambaHostRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaHostRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaHostRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaHostRepositoryInstanceEnumeration();
    Linux_SambaHostRepositoryInstanceEnumeration(
      const Linux_SambaHostRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaHostRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaHostRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaHostRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaHostRepositoryInstance& anInstance);

  };

}

#endif
