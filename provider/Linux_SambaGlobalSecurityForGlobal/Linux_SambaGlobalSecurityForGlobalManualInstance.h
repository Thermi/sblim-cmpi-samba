// =======================================================================
// Linux_SambaGlobalSecurityForGlobalManualInstance.h
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
#ifndef Linux_SambaGlobalSecurityForGlobalManualInstance_h
#define Linux_SambaGlobalSecurityForGlobalManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalSecurityForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalSecurityForGlobalManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalSecurityForGlobalManualInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalSecurityForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaGlobalSecurityForGlobalManualInstance();
    Linux_SambaGlobalSecurityForGlobalManualInstance(
      const Linux_SambaGlobalSecurityForGlobalManualInstance& anInstance);
    Linux_SambaGlobalSecurityForGlobalManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalSecurityForGlobalManualInstance();
       
    Linux_SambaGlobalSecurityForGlobalManualInstance& operator=(
      const Linux_SambaGlobalSecurityForGlobalManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalSecurityForGlobalInstanceName& anInstanceName);        
    const Linux_SambaGlobalSecurityForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement {

    Linux_SambaGlobalSecurityForGlobalManualInstance* m_elementP;
    Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement();
    ~Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration {

    private:
    Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration();
    Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration(
      const Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalSecurityForGlobalManualInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalSecurityForGlobalManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalSecurityForGlobalManualInstance& anInstance);

  };

}

#endif
