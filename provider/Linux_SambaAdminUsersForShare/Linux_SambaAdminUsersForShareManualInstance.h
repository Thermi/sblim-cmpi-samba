// =======================================================================
// Linux_SambaAdminUsersForShareManualInstance.h
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
#ifndef Linux_SambaAdminUsersForShareManualInstance_h
#define Linux_SambaAdminUsersForShareManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaAdminUsersForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaAdminUsersForShareManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaAdminUsersForShareManualInstance& anInstance);
    void reset();
       
    Linux_SambaAdminUsersForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaAdminUsersForShareManualInstance();
    Linux_SambaAdminUsersForShareManualInstance(
      const Linux_SambaAdminUsersForShareManualInstance& anInstance);
    Linux_SambaAdminUsersForShareManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaAdminUsersForShareManualInstance();
       
    Linux_SambaAdminUsersForShareManualInstance& operator=(
      const Linux_SambaAdminUsersForShareManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaAdminUsersForShareInstanceName& anInstanceName);        
    const Linux_SambaAdminUsersForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaAdminUsersForShareManualInstanceEnumerationElement {

    Linux_SambaAdminUsersForShareManualInstance* m_elementP;
    Linux_SambaAdminUsersForShareManualInstanceEnumerationElement* m_nextP;

    Linux_SambaAdminUsersForShareManualInstanceEnumerationElement();
    ~Linux_SambaAdminUsersForShareManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaAdminUsersForShareManualInstanceEnumeration {

    private:
    Linux_SambaAdminUsersForShareManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaAdminUsersForShareManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaAdminUsersForShareManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaAdminUsersForShareManualInstanceEnumeration();
    Linux_SambaAdminUsersForShareManualInstanceEnumeration(
      const Linux_SambaAdminUsersForShareManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaAdminUsersForShareManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaAdminUsersForShareManualInstance& getNext();
    int getSize() const;
    const Linux_SambaAdminUsersForShareManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaAdminUsersForShareManualInstance& anInstance);

  };

}

#endif
