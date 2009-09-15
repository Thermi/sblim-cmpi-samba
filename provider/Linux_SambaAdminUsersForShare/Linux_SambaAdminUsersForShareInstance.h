// =======================================================================
// Linux_SambaAdminUsersForShareInstance.h
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
#ifndef Linux_SambaAdminUsersForShareInstance_h
#define Linux_SambaAdminUsersForShareInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaAdminUsersForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaAdminUsersForShareInstance {
       
    private:
    void init();
    void init(const Linux_SambaAdminUsersForShareInstance& anInstance);
    void reset();
       
    Linux_SambaAdminUsersForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaAdminUsersForShareInstance();
    Linux_SambaAdminUsersForShareInstance(
      const Linux_SambaAdminUsersForShareInstance& anInstance);
    Linux_SambaAdminUsersForShareInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaAdminUsersForShareInstance();
       
    Linux_SambaAdminUsersForShareInstance& operator=(
      const Linux_SambaAdminUsersForShareInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaAdminUsersForShareInstanceName& anInstanceName);        
    const Linux_SambaAdminUsersForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaAdminUsersForShareInstanceEnumerationElement {

    Linux_SambaAdminUsersForShareInstance* m_elementP;
    Linux_SambaAdminUsersForShareInstanceEnumerationElement* m_nextP;

    Linux_SambaAdminUsersForShareInstanceEnumerationElement();
    ~Linux_SambaAdminUsersForShareInstanceEnumerationElement();  

  };
  

  class Linux_SambaAdminUsersForShareInstanceEnumeration {

    private:
    Linux_SambaAdminUsersForShareInstanceEnumerationElement* m_firstElementP;
    Linux_SambaAdminUsersForShareInstanceEnumerationElement* m_currentElementP;
    Linux_SambaAdminUsersForShareInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaAdminUsersForShareInstanceEnumeration();
    Linux_SambaAdminUsersForShareInstanceEnumeration(
      const Linux_SambaAdminUsersForShareInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaAdminUsersForShareInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaAdminUsersForShareInstance& getNext();
    int getSize() const;
    const Linux_SambaAdminUsersForShareInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaAdminUsersForShareInstance& anInstance);

  };

}

#endif
