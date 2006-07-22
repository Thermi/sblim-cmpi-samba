// =======================================================================
// Linux_SambaGuestAccountForGlobalManualInstance.h
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
#ifndef Linux_SambaGuestAccountForGlobalManualInstance_h
#define Linux_SambaGuestAccountForGlobalManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGuestAccountForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaGuestAccountForGlobalManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaGuestAccountForGlobalManualInstance& anInstance);
    void reset();
       
    Linux_SambaGuestAccountForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGuestAccountForGlobalManualInstance();
    Linux_SambaGuestAccountForGlobalManualInstance(
      const Linux_SambaGuestAccountForGlobalManualInstance& anInstance);
    Linux_SambaGuestAccountForGlobalManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGuestAccountForGlobalManualInstance();
       
    Linux_SambaGuestAccountForGlobalManualInstance& operator=(
      const Linux_SambaGuestAccountForGlobalManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGuestAccountForGlobalInstanceName& anInstanceName);        
    const Linux_SambaGuestAccountForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement {

    Linux_SambaGuestAccountForGlobalManualInstance* m_elementP;
    Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement* m_nextP;

    Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement();
    ~Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaGuestAccountForGlobalManualInstanceEnumeration {

    private:
    Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGuestAccountForGlobalManualInstanceEnumeration();
    Linux_SambaGuestAccountForGlobalManualInstanceEnumeration(
      const Linux_SambaGuestAccountForGlobalManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGuestAccountForGlobalManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGuestAccountForGlobalManualInstance& getNext();
    int getSize() const;
    const Linux_SambaGuestAccountForGlobalManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGuestAccountForGlobalManualInstance& anInstance);

  };

}

#endif
