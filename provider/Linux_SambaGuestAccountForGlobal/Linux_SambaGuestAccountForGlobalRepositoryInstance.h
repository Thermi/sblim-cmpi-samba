// =======================================================================
// Linux_SambaGuestAccountForGlobalRepositoryInstance.h
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
#ifndef Linux_SambaGuestAccountForGlobalRepositoryInstance_h
#define Linux_SambaGuestAccountForGlobalRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGuestAccountForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaGuestAccountForGlobalRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaGuestAccountForGlobalRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaGuestAccountForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGuestAccountForGlobalRepositoryInstance();
    Linux_SambaGuestAccountForGlobalRepositoryInstance(
      const Linux_SambaGuestAccountForGlobalRepositoryInstance& anInstance);
    Linux_SambaGuestAccountForGlobalRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGuestAccountForGlobalRepositoryInstance();
       
    Linux_SambaGuestAccountForGlobalRepositoryInstance& operator=(
      const Linux_SambaGuestAccountForGlobalRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGuestAccountForGlobalInstanceName& anInstanceName);        
    const Linux_SambaGuestAccountForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement {

    Linux_SambaGuestAccountForGlobalRepositoryInstance* m_elementP;
    Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement();
    ~Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration {

    private:
    Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration();
    Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration(
      const Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGuestAccountForGlobalRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaGuestAccountForGlobalRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGuestAccountForGlobalRepositoryInstance& anInstance);

  };

}

#endif
