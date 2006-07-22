// =======================================================================
// Linux_SambaAdminUsersForShareRepositoryInstance.h
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
#ifndef Linux_SambaAdminUsersForShareRepositoryInstance_h
#define Linux_SambaAdminUsersForShareRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaAdminUsersForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaAdminUsersForShareRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaAdminUsersForShareRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaAdminUsersForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaAdminUsersForShareRepositoryInstance();
    Linux_SambaAdminUsersForShareRepositoryInstance(
      const Linux_SambaAdminUsersForShareRepositoryInstance& anInstance);
    Linux_SambaAdminUsersForShareRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaAdminUsersForShareRepositoryInstance();
       
    Linux_SambaAdminUsersForShareRepositoryInstance& operator=(
      const Linux_SambaAdminUsersForShareRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaAdminUsersForShareInstanceName& anInstanceName);        
    const Linux_SambaAdminUsersForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement {

    Linux_SambaAdminUsersForShareRepositoryInstance* m_elementP;
    Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement();
    ~Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration {

    private:
    Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration();
    Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration(
      const Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaAdminUsersForShareRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaAdminUsersForShareRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaAdminUsersForShareRepositoryInstance& anInstance);

  };

}

#endif
