// =======================================================================
// Linux_SambaGroupForUserRepositoryInstance.h
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
#ifndef Linux_SambaGroupForUserRepositoryInstance_h
#define Linux_SambaGroupForUserRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGroupForUserInstanceName.h"


namespace genProvider {

  class Linux_SambaGroupForUserRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaGroupForUserRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaGroupForUserInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGroupForUserRepositoryInstance();
    Linux_SambaGroupForUserRepositoryInstance(
      const Linux_SambaGroupForUserRepositoryInstance& anInstance);
    Linux_SambaGroupForUserRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGroupForUserRepositoryInstance();
       
    Linux_SambaGroupForUserRepositoryInstance& operator=(
      const Linux_SambaGroupForUserRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGroupForUserInstanceName& anInstanceName);        
    const Linux_SambaGroupForUserInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGroupForUserRepositoryInstanceEnumerationElement {

    Linux_SambaGroupForUserRepositoryInstance* m_elementP;
    Linux_SambaGroupForUserRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaGroupForUserRepositoryInstanceEnumerationElement();
    ~Linux_SambaGroupForUserRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaGroupForUserRepositoryInstanceEnumeration {

    private:
    Linux_SambaGroupForUserRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGroupForUserRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGroupForUserRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGroupForUserRepositoryInstanceEnumeration();
    Linux_SambaGroupForUserRepositoryInstanceEnumeration(
      const Linux_SambaGroupForUserRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGroupForUserRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGroupForUserRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaGroupForUserRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGroupForUserRepositoryInstance& anInstance);

  };

}

#endif
