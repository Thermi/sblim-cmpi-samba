// =======================================================================
// Linux_SambaAdminUsersForGlobalManualInstance.h
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
#ifndef Linux_SambaAdminUsersForGlobalManualInstance_h
#define Linux_SambaAdminUsersForGlobalManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaAdminUsersForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaAdminUsersForGlobalManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaAdminUsersForGlobalManualInstance& anInstance);
    void reset();
       
    Linux_SambaAdminUsersForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaAdminUsersForGlobalManualInstance();
    Linux_SambaAdminUsersForGlobalManualInstance(
      const Linux_SambaAdminUsersForGlobalManualInstance& anInstance);
    Linux_SambaAdminUsersForGlobalManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaAdminUsersForGlobalManualInstance();
       
    Linux_SambaAdminUsersForGlobalManualInstance& operator=(
      const Linux_SambaAdminUsersForGlobalManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaAdminUsersForGlobalInstanceName& anInstanceName);        
    const Linux_SambaAdminUsersForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement {

    Linux_SambaAdminUsersForGlobalManualInstance* m_elementP;
    Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement* m_nextP;

    Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement();
    ~Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaAdminUsersForGlobalManualInstanceEnumeration {

    private:
    Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaAdminUsersForGlobalManualInstanceEnumeration();
    Linux_SambaAdminUsersForGlobalManualInstanceEnumeration(
      const Linux_SambaAdminUsersForGlobalManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaAdminUsersForGlobalManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaAdminUsersForGlobalManualInstance& getNext();
    int getSize() const;
    const Linux_SambaAdminUsersForGlobalManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaAdminUsersForGlobalManualInstance& anInstance);

  };

}

#endif
