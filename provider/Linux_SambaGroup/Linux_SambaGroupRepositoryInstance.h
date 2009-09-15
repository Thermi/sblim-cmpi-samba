// =======================================================================
// Linux_SambaGroupRepositoryInstance.h
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
#ifndef Linux_SambaGroupRepositoryInstance_h
#define Linux_SambaGroupRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGroupInstanceName.h"


namespace genProvider {

  class Linux_SambaGroupRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaGroupRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaGroupInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGroupRepositoryInstance();
    Linux_SambaGroupRepositoryInstance(
      const Linux_SambaGroupRepositoryInstance& anInstance);
    Linux_SambaGroupRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGroupRepositoryInstance();
       
    Linux_SambaGroupRepositoryInstance& operator=(
      const Linux_SambaGroupRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGroupInstanceName& anInstanceName);        
    const Linux_SambaGroupInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGroupRepositoryInstanceEnumerationElement {

    Linux_SambaGroupRepositoryInstance* m_elementP;
    Linux_SambaGroupRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaGroupRepositoryInstanceEnumerationElement();
    ~Linux_SambaGroupRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaGroupRepositoryInstanceEnumeration {

    private:
    Linux_SambaGroupRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGroupRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGroupRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGroupRepositoryInstanceEnumeration();
    Linux_SambaGroupRepositoryInstanceEnumeration(
      const Linux_SambaGroupRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGroupRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGroupRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaGroupRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGroupRepositoryInstance& anInstance);

  };

}

#endif
