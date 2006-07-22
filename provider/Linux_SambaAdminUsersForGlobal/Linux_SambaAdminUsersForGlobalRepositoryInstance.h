// =======================================================================
// Linux_SambaAdminUsersForGlobalRepositoryInstance.h
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
#ifndef Linux_SambaAdminUsersForGlobalRepositoryInstance_h
#define Linux_SambaAdminUsersForGlobalRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaAdminUsersForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaAdminUsersForGlobalRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaAdminUsersForGlobalRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaAdminUsersForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaAdminUsersForGlobalRepositoryInstance();
    Linux_SambaAdminUsersForGlobalRepositoryInstance(
      const Linux_SambaAdminUsersForGlobalRepositoryInstance& anInstance);
    Linux_SambaAdminUsersForGlobalRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaAdminUsersForGlobalRepositoryInstance();
       
    Linux_SambaAdminUsersForGlobalRepositoryInstance& operator=(
      const Linux_SambaAdminUsersForGlobalRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaAdminUsersForGlobalInstanceName& anInstanceName);        
    const Linux_SambaAdminUsersForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement {

    Linux_SambaAdminUsersForGlobalRepositoryInstance* m_elementP;
    Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement();
    ~Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration {

    private:
    Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration();
    Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration(
      const Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaAdminUsersForGlobalRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaAdminUsersForGlobalRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaAdminUsersForGlobalRepositoryInstance& anInstance);

  };

}

#endif
