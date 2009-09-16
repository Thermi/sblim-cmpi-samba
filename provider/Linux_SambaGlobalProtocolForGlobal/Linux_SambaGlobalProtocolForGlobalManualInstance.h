// =======================================================================
// Linux_SambaGlobalProtocolForGlobalManualInstance.h
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
#ifndef Linux_SambaGlobalProtocolForGlobalManualInstance_h
#define Linux_SambaGlobalProtocolForGlobalManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalProtocolForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalProtocolForGlobalManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalProtocolForGlobalManualInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalProtocolForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGlobalProtocolForGlobalManualInstance();
    Linux_SambaGlobalProtocolForGlobalManualInstance(
      const Linux_SambaGlobalProtocolForGlobalManualInstance& anInstance);
    Linux_SambaGlobalProtocolForGlobalManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalProtocolForGlobalManualInstance();
       
    Linux_SambaGlobalProtocolForGlobalManualInstance& operator=(
      const Linux_SambaGlobalProtocolForGlobalManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalProtocolForGlobalInstanceName& anInstanceName);        
    const Linux_SambaGlobalProtocolForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement {

    Linux_SambaGlobalProtocolForGlobalManualInstance* m_elementP;
    Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement();
    ~Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration {

    private:
    Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration();
    Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration(
      const Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalProtocolForGlobalManualInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalProtocolForGlobalManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalProtocolForGlobalManualInstance& anInstance);

  };

}

#endif
