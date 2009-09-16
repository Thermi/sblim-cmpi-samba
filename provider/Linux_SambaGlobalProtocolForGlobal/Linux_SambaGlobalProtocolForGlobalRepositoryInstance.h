// =======================================================================
// Linux_SambaGlobalProtocolForGlobalRepositoryInstance.h
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
#ifndef Linux_SambaGlobalProtocolForGlobalRepositoryInstance_h
#define Linux_SambaGlobalProtocolForGlobalRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalProtocolForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalProtocolForGlobalRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalProtocolForGlobalRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalProtocolForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGlobalProtocolForGlobalRepositoryInstance();
    Linux_SambaGlobalProtocolForGlobalRepositoryInstance(
      const Linux_SambaGlobalProtocolForGlobalRepositoryInstance& anInstance);
    Linux_SambaGlobalProtocolForGlobalRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalProtocolForGlobalRepositoryInstance();
       
    Linux_SambaGlobalProtocolForGlobalRepositoryInstance& operator=(
      const Linux_SambaGlobalProtocolForGlobalRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalProtocolForGlobalInstanceName& anInstanceName);        
    const Linux_SambaGlobalProtocolForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumerationElement {

    Linux_SambaGlobalProtocolForGlobalRepositoryInstance* m_elementP;
    Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumerationElement();
    ~Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumeration {

    private:
    Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumeration();
    Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumeration(
      const Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalProtocolForGlobalRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalProtocolForGlobalRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalProtocolForGlobalRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalProtocolForGlobalRepositoryInstance& anInstance);

  };

}

#endif
