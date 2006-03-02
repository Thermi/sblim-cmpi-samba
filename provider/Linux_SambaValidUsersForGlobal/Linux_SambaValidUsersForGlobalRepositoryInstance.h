// =======================================================================
// Linux_SambaValidUsersForGlobalRepositoryInstance.h
//     created on Fri, 24 Feb 2006 using ECUTE
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
//                Rodrigo Ceron    <rceron@br.ibm.com>
//                Wolfgang Taphorn <taphorn@de.ibm.com>
//
// =======================================================================
//
// 
#ifndef Linux_SambaValidUsersForGlobalRepositoryInstance_h
#define Linux_SambaValidUsersForGlobalRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaValidUsersForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaValidUsersForGlobalRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaValidUsersForGlobalRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaValidUsersForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaValidUsersForGlobalRepositoryInstance();
    Linux_SambaValidUsersForGlobalRepositoryInstance(
      const Linux_SambaValidUsersForGlobalRepositoryInstance& anInstance);
    Linux_SambaValidUsersForGlobalRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaValidUsersForGlobalRepositoryInstance();
       
    Linux_SambaValidUsersForGlobalRepositoryInstance& operator=(
      const Linux_SambaValidUsersForGlobalRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaValidUsersForGlobalInstanceName& anInstanceName);        
    const Linux_SambaValidUsersForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaValidUsersForGlobalRepositoryInstanceEnumerationElement {

    Linux_SambaValidUsersForGlobalRepositoryInstance* m_elementP;
    Linux_SambaValidUsersForGlobalRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaValidUsersForGlobalRepositoryInstanceEnumerationElement();
    ~Linux_SambaValidUsersForGlobalRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaValidUsersForGlobalRepositoryInstanceEnumeration {

    private:
    Linux_SambaValidUsersForGlobalRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaValidUsersForGlobalRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaValidUsersForGlobalRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaValidUsersForGlobalRepositoryInstanceEnumeration();
    Linux_SambaValidUsersForGlobalRepositoryInstanceEnumeration(
      const Linux_SambaValidUsersForGlobalRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaValidUsersForGlobalRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaValidUsersForGlobalRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaValidUsersForGlobalRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaValidUsersForGlobalRepositoryInstance& anInstance);

  };

}

#endif
