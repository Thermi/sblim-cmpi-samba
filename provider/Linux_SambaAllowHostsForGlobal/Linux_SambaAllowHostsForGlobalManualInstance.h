// =======================================================================
// Linux_SambaAllowHostsForGlobalManualInstance.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://www.opensource.org/licenses/eclipse-1.0.php
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
#ifndef Linux_SambaAllowHostsForGlobalManualInstance_h
#define Linux_SambaAllowHostsForGlobalManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaAllowHostsForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaAllowHostsForGlobalManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaAllowHostsForGlobalManualInstance& anInstance);
    void reset();
       
    Linux_SambaAllowHostsForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaAllowHostsForGlobalManualInstance();
    Linux_SambaAllowHostsForGlobalManualInstance(
      const Linux_SambaAllowHostsForGlobalManualInstance& anInstance);
    Linux_SambaAllowHostsForGlobalManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaAllowHostsForGlobalManualInstance();
       
    Linux_SambaAllowHostsForGlobalManualInstance& operator=(
      const Linux_SambaAllowHostsForGlobalManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaAllowHostsForGlobalInstanceName& anInstanceName);        
    const Linux_SambaAllowHostsForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaAllowHostsForGlobalManualInstanceEnumerationElement {

    Linux_SambaAllowHostsForGlobalManualInstance* m_elementP;
    Linux_SambaAllowHostsForGlobalManualInstanceEnumerationElement* m_nextP;

    Linux_SambaAllowHostsForGlobalManualInstanceEnumerationElement();
    ~Linux_SambaAllowHostsForGlobalManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaAllowHostsForGlobalManualInstanceEnumeration {

    private:
    Linux_SambaAllowHostsForGlobalManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaAllowHostsForGlobalManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaAllowHostsForGlobalManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaAllowHostsForGlobalManualInstanceEnumeration();
    Linux_SambaAllowHostsForGlobalManualInstanceEnumeration(
      const Linux_SambaAllowHostsForGlobalManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaAllowHostsForGlobalManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaAllowHostsForGlobalManualInstance& getNext();
    int getSize() const;
    const Linux_SambaAllowHostsForGlobalManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaAllowHostsForGlobalManualInstance& anInstance);

  };

}

#endif
