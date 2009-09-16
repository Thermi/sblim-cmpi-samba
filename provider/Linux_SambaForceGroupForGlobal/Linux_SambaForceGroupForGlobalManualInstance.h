// =======================================================================
// Linux_SambaForceGroupForGlobalManualInstance.h
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
#ifndef Linux_SambaForceGroupForGlobalManualInstance_h
#define Linux_SambaForceGroupForGlobalManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaForceGroupForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaForceGroupForGlobalManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaForceGroupForGlobalManualInstance& anInstance);
    void reset();
       
    Linux_SambaForceGroupForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaForceGroupForGlobalManualInstance();
    Linux_SambaForceGroupForGlobalManualInstance(
      const Linux_SambaForceGroupForGlobalManualInstance& anInstance);
    Linux_SambaForceGroupForGlobalManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaForceGroupForGlobalManualInstance();
       
    Linux_SambaForceGroupForGlobalManualInstance& operator=(
      const Linux_SambaForceGroupForGlobalManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaForceGroupForGlobalInstanceName& anInstanceName);        
    const Linux_SambaForceGroupForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement {

    Linux_SambaForceGroupForGlobalManualInstance* m_elementP;
    Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement* m_nextP;

    Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement();
    ~Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaForceGroupForGlobalManualInstanceEnumeration {

    private:
    Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaForceGroupForGlobalManualInstanceEnumeration();
    Linux_SambaForceGroupForGlobalManualInstanceEnumeration(
      const Linux_SambaForceGroupForGlobalManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaForceGroupForGlobalManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaForceGroupForGlobalManualInstance& getNext();
    int getSize() const;
    const Linux_SambaForceGroupForGlobalManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaForceGroupForGlobalManualInstance& anInstance);

  };

}

#endif
