// =======================================================================
// Linux_SambaInvalidUsersForGlobalRepositoryInstance.h
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
#ifndef Linux_SambaInvalidUsersForGlobalRepositoryInstance_h
#define Linux_SambaInvalidUsersForGlobalRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaInvalidUsersForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaInvalidUsersForGlobalRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaInvalidUsersForGlobalRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaInvalidUsersForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaInvalidUsersForGlobalRepositoryInstance();
    Linux_SambaInvalidUsersForGlobalRepositoryInstance(
      const Linux_SambaInvalidUsersForGlobalRepositoryInstance& anInstance);
    Linux_SambaInvalidUsersForGlobalRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaInvalidUsersForGlobalRepositoryInstance();
       
    Linux_SambaInvalidUsersForGlobalRepositoryInstance& operator=(
      const Linux_SambaInvalidUsersForGlobalRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaInvalidUsersForGlobalInstanceName& anInstanceName);        
    const Linux_SambaInvalidUsersForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement {

    Linux_SambaInvalidUsersForGlobalRepositoryInstance* m_elementP;
    Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement();
    ~Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration {

    private:
    Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration();
    Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration(
      const Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaInvalidUsersForGlobalRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaInvalidUsersForGlobalRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaInvalidUsersForGlobalRepositoryInstance& anInstance);

  };

}

#endif
