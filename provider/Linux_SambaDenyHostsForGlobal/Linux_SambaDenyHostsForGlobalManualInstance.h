// =======================================================================
// Linux_SambaDenyHostsForGlobalManualInstance.h
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
#ifndef Linux_SambaDenyHostsForGlobalManualInstance_h
#define Linux_SambaDenyHostsForGlobalManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaDenyHostsForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaDenyHostsForGlobalManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaDenyHostsForGlobalManualInstance& anInstance);
    void reset();
       
    Linux_SambaDenyHostsForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaDenyHostsForGlobalManualInstance();
    Linux_SambaDenyHostsForGlobalManualInstance(
      const Linux_SambaDenyHostsForGlobalManualInstance& anInstance);
    Linux_SambaDenyHostsForGlobalManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaDenyHostsForGlobalManualInstance();
       
    Linux_SambaDenyHostsForGlobalManualInstance& operator=(
      const Linux_SambaDenyHostsForGlobalManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaDenyHostsForGlobalInstanceName& anInstanceName);        
    const Linux_SambaDenyHostsForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaDenyHostsForGlobalManualInstanceEnumerationElement {

    Linux_SambaDenyHostsForGlobalManualInstance* m_elementP;
    Linux_SambaDenyHostsForGlobalManualInstanceEnumerationElement* m_nextP;

    Linux_SambaDenyHostsForGlobalManualInstanceEnumerationElement();
    ~Linux_SambaDenyHostsForGlobalManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaDenyHostsForGlobalManualInstanceEnumeration {

    private:
    Linux_SambaDenyHostsForGlobalManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaDenyHostsForGlobalManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaDenyHostsForGlobalManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaDenyHostsForGlobalManualInstanceEnumeration();
    Linux_SambaDenyHostsForGlobalManualInstanceEnumeration(
      const Linux_SambaDenyHostsForGlobalManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaDenyHostsForGlobalManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaDenyHostsForGlobalManualInstance& getNext();
    int getSize() const;
    const Linux_SambaDenyHostsForGlobalManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaDenyHostsForGlobalManualInstance& anInstance);

  };

}

#endif
