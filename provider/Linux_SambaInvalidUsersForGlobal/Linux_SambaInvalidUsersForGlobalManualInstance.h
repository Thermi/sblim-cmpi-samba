// =======================================================================
// Linux_SambaInvalidUsersForGlobalManualInstance.h
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
#ifndef Linux_SambaInvalidUsersForGlobalManualInstance_h
#define Linux_SambaInvalidUsersForGlobalManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaInvalidUsersForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaInvalidUsersForGlobalManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaInvalidUsersForGlobalManualInstance& anInstance);
    void reset();
       
    Linux_SambaInvalidUsersForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaInvalidUsersForGlobalManualInstance();
    Linux_SambaInvalidUsersForGlobalManualInstance(
      const Linux_SambaInvalidUsersForGlobalManualInstance& anInstance);
    Linux_SambaInvalidUsersForGlobalManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaInvalidUsersForGlobalManualInstance();
       
    Linux_SambaInvalidUsersForGlobalManualInstance& operator=(
      const Linux_SambaInvalidUsersForGlobalManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaInvalidUsersForGlobalInstanceName& anInstanceName);        
    const Linux_SambaInvalidUsersForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaInvalidUsersForGlobalManualInstanceEnumerationElement {

    Linux_SambaInvalidUsersForGlobalManualInstance* m_elementP;
    Linux_SambaInvalidUsersForGlobalManualInstanceEnumerationElement* m_nextP;

    Linux_SambaInvalidUsersForGlobalManualInstanceEnumerationElement();
    ~Linux_SambaInvalidUsersForGlobalManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaInvalidUsersForGlobalManualInstanceEnumeration {

    private:
    Linux_SambaInvalidUsersForGlobalManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaInvalidUsersForGlobalManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaInvalidUsersForGlobalManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaInvalidUsersForGlobalManualInstanceEnumeration();
    Linux_SambaInvalidUsersForGlobalManualInstanceEnumeration(
      const Linux_SambaInvalidUsersForGlobalManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaInvalidUsersForGlobalManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaInvalidUsersForGlobalManualInstance& getNext();
    int getSize() const;
    const Linux_SambaInvalidUsersForGlobalManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaInvalidUsersForGlobalManualInstance& anInstance);

  };

}

#endif
