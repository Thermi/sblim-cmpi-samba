// =======================================================================
// Linux_SambaWriteListForGlobalRepositoryInstance.h
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
#ifndef Linux_SambaWriteListForGlobalRepositoryInstance_h
#define Linux_SambaWriteListForGlobalRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaWriteListForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaWriteListForGlobalRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaWriteListForGlobalRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaWriteListForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaWriteListForGlobalRepositoryInstance();
    Linux_SambaWriteListForGlobalRepositoryInstance(
      const Linux_SambaWriteListForGlobalRepositoryInstance& anInstance);
    Linux_SambaWriteListForGlobalRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaWriteListForGlobalRepositoryInstance();
       
    Linux_SambaWriteListForGlobalRepositoryInstance& operator=(
      const Linux_SambaWriteListForGlobalRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaWriteListForGlobalInstanceName& anInstanceName);        
    const Linux_SambaWriteListForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaWriteListForGlobalRepositoryInstanceEnumerationElement {

    Linux_SambaWriteListForGlobalRepositoryInstance* m_elementP;
    Linux_SambaWriteListForGlobalRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaWriteListForGlobalRepositoryInstanceEnumerationElement();
    ~Linux_SambaWriteListForGlobalRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaWriteListForGlobalRepositoryInstanceEnumeration {

    private:
    Linux_SambaWriteListForGlobalRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaWriteListForGlobalRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaWriteListForGlobalRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaWriteListForGlobalRepositoryInstanceEnumeration();
    Linux_SambaWriteListForGlobalRepositoryInstanceEnumeration(
      const Linux_SambaWriteListForGlobalRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaWriteListForGlobalRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaWriteListForGlobalRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaWriteListForGlobalRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaWriteListForGlobalRepositoryInstance& anInstance);

  };

}

#endif
