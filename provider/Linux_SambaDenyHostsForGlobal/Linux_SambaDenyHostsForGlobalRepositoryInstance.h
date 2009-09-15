// =======================================================================
// Linux_SambaDenyHostsForGlobalRepositoryInstance.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
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
#ifndef Linux_SambaDenyHostsForGlobalRepositoryInstance_h
#define Linux_SambaDenyHostsForGlobalRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaDenyHostsForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaDenyHostsForGlobalRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaDenyHostsForGlobalRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaDenyHostsForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaDenyHostsForGlobalRepositoryInstance();
    Linux_SambaDenyHostsForGlobalRepositoryInstance(
      const Linux_SambaDenyHostsForGlobalRepositoryInstance& anInstance);
    Linux_SambaDenyHostsForGlobalRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaDenyHostsForGlobalRepositoryInstance();
       
    Linux_SambaDenyHostsForGlobalRepositoryInstance& operator=(
      const Linux_SambaDenyHostsForGlobalRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaDenyHostsForGlobalInstanceName& anInstanceName);        
    const Linux_SambaDenyHostsForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaDenyHostsForGlobalRepositoryInstanceEnumerationElement {

    Linux_SambaDenyHostsForGlobalRepositoryInstance* m_elementP;
    Linux_SambaDenyHostsForGlobalRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaDenyHostsForGlobalRepositoryInstanceEnumerationElement();
    ~Linux_SambaDenyHostsForGlobalRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaDenyHostsForGlobalRepositoryInstanceEnumeration {

    private:
    Linux_SambaDenyHostsForGlobalRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaDenyHostsForGlobalRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaDenyHostsForGlobalRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaDenyHostsForGlobalRepositoryInstanceEnumeration();
    Linux_SambaDenyHostsForGlobalRepositoryInstanceEnumeration(
      const Linux_SambaDenyHostsForGlobalRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaDenyHostsForGlobalRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaDenyHostsForGlobalRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaDenyHostsForGlobalRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaDenyHostsForGlobalRepositoryInstance& anInstance);

  };

}

#endif
