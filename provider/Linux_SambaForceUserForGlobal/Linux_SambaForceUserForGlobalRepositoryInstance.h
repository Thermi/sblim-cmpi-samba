// =======================================================================
// Linux_SambaForceUserForGlobalRepositoryInstance.h
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
#ifndef Linux_SambaForceUserForGlobalRepositoryInstance_h
#define Linux_SambaForceUserForGlobalRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceUserForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaForceUserForGlobalRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaForceUserForGlobalRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaForceUserForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaForceUserForGlobalRepositoryInstance();
    Linux_SambaForceUserForGlobalRepositoryInstance(
      const Linux_SambaForceUserForGlobalRepositoryInstance& anInstance);
    Linux_SambaForceUserForGlobalRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaForceUserForGlobalRepositoryInstance();
       
    Linux_SambaForceUserForGlobalRepositoryInstance& operator=(
      const Linux_SambaForceUserForGlobalRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaForceUserForGlobalInstanceName& anInstanceName);        
    const Linux_SambaForceUserForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement {

    Linux_SambaForceUserForGlobalRepositoryInstance* m_elementP;
    Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement();
    ~Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration {

    private:
    Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration();
    Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration(
      const Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaForceUserForGlobalRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaForceUserForGlobalRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaForceUserForGlobalRepositoryInstance& anInstance);

  };

}

#endif
