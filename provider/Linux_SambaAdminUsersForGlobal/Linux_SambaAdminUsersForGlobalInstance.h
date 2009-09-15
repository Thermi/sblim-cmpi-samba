// =======================================================================
// Linux_SambaAdminUsersForGlobalInstance.h
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
#ifndef Linux_SambaAdminUsersForGlobalInstance_h
#define Linux_SambaAdminUsersForGlobalInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaAdminUsersForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaAdminUsersForGlobalInstance {
       
    private:
    void init();
    void init(const Linux_SambaAdminUsersForGlobalInstance& anInstance);
    void reset();
       
    Linux_SambaAdminUsersForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaAdminUsersForGlobalInstance();
    Linux_SambaAdminUsersForGlobalInstance(
      const Linux_SambaAdminUsersForGlobalInstance& anInstance);
    Linux_SambaAdminUsersForGlobalInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaAdminUsersForGlobalInstance();
       
    Linux_SambaAdminUsersForGlobalInstance& operator=(
      const Linux_SambaAdminUsersForGlobalInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaAdminUsersForGlobalInstanceName& anInstanceName);        
    const Linux_SambaAdminUsersForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaAdminUsersForGlobalInstanceEnumerationElement {

    Linux_SambaAdminUsersForGlobalInstance* m_elementP;
    Linux_SambaAdminUsersForGlobalInstanceEnumerationElement* m_nextP;

    Linux_SambaAdminUsersForGlobalInstanceEnumerationElement();
    ~Linux_SambaAdminUsersForGlobalInstanceEnumerationElement();  

  };
  

  class Linux_SambaAdminUsersForGlobalInstanceEnumeration {

    private:
    Linux_SambaAdminUsersForGlobalInstanceEnumerationElement* m_firstElementP;
    Linux_SambaAdminUsersForGlobalInstanceEnumerationElement* m_currentElementP;
    Linux_SambaAdminUsersForGlobalInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaAdminUsersForGlobalInstanceEnumeration();
    Linux_SambaAdminUsersForGlobalInstanceEnumeration(
      const Linux_SambaAdminUsersForGlobalInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaAdminUsersForGlobalInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaAdminUsersForGlobalInstance& getNext();
    int getSize() const;
    const Linux_SambaAdminUsersForGlobalInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaAdminUsersForGlobalInstance& anInstance);

  };

}

#endif
