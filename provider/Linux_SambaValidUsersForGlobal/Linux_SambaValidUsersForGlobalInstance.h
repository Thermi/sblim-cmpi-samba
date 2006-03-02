// =======================================================================
// Linux_SambaValidUsersForGlobalInstance.h
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
#ifndef Linux_SambaValidUsersForGlobalInstance_h
#define Linux_SambaValidUsersForGlobalInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaValidUsersForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaValidUsersForGlobalInstance {
       
    private:
    void init();
    void init(const Linux_SambaValidUsersForGlobalInstance& anInstance);
    void reset();
       
    Linux_SambaValidUsersForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaValidUsersForGlobalInstance();
    Linux_SambaValidUsersForGlobalInstance(
      const Linux_SambaValidUsersForGlobalInstance& anInstance);
    Linux_SambaValidUsersForGlobalInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaValidUsersForGlobalInstance();
       
    Linux_SambaValidUsersForGlobalInstance& operator=(
      const Linux_SambaValidUsersForGlobalInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaValidUsersForGlobalInstanceName& anInstanceName);        
    const Linux_SambaValidUsersForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaValidUsersForGlobalInstanceEnumerationElement {

    Linux_SambaValidUsersForGlobalInstance* m_elementP;
    Linux_SambaValidUsersForGlobalInstanceEnumerationElement* m_nextP;

    Linux_SambaValidUsersForGlobalInstanceEnumerationElement();
    ~Linux_SambaValidUsersForGlobalInstanceEnumerationElement();  

  };
  

  class Linux_SambaValidUsersForGlobalInstanceEnumeration {

    private:
    Linux_SambaValidUsersForGlobalInstanceEnumerationElement* m_firstElementP;
    Linux_SambaValidUsersForGlobalInstanceEnumerationElement* m_currentElementP;
    Linux_SambaValidUsersForGlobalInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaValidUsersForGlobalInstanceEnumeration();
    Linux_SambaValidUsersForGlobalInstanceEnumeration(
      const Linux_SambaValidUsersForGlobalInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaValidUsersForGlobalInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaValidUsersForGlobalInstance& getNext();
    int getSize() const;
    const Linux_SambaValidUsersForGlobalInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaValidUsersForGlobalInstance& anInstance);

  };

}

#endif
