// =======================================================================
// Linux_SambaValidUsersForGlobalManualInstance.h
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
#ifndef Linux_SambaValidUsersForGlobalManualInstance_h
#define Linux_SambaValidUsersForGlobalManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaValidUsersForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaValidUsersForGlobalManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaValidUsersForGlobalManualInstance& anInstance);
    void reset();
       
    Linux_SambaValidUsersForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaValidUsersForGlobalManualInstance();
    Linux_SambaValidUsersForGlobalManualInstance(
      const Linux_SambaValidUsersForGlobalManualInstance& anInstance);
    Linux_SambaValidUsersForGlobalManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaValidUsersForGlobalManualInstance();
       
    Linux_SambaValidUsersForGlobalManualInstance& operator=(
      const Linux_SambaValidUsersForGlobalManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaValidUsersForGlobalInstanceName& anInstanceName);        
    const Linux_SambaValidUsersForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement {

    Linux_SambaValidUsersForGlobalManualInstance* m_elementP;
    Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement* m_nextP;

    Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement();
    ~Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaValidUsersForGlobalManualInstanceEnumeration {

    private:
    Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaValidUsersForGlobalManualInstanceEnumeration();
    Linux_SambaValidUsersForGlobalManualInstanceEnumeration(
      const Linux_SambaValidUsersForGlobalManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaValidUsersForGlobalManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaValidUsersForGlobalManualInstance& getNext();
    int getSize() const;
    const Linux_SambaValidUsersForGlobalManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaValidUsersForGlobalManualInstance& anInstance);

  };

}

#endif
