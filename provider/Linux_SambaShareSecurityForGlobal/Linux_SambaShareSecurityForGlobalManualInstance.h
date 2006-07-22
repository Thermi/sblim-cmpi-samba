// =======================================================================
// Linux_SambaShareSecurityForGlobalManualInstance.h
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
#ifndef Linux_SambaShareSecurityForGlobalManualInstance_h
#define Linux_SambaShareSecurityForGlobalManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareSecurityForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaShareSecurityForGlobalManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareSecurityForGlobalManualInstance& anInstance);
    void reset();
       
    Linux_SambaShareSecurityForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaShareSecurityForGlobalManualInstance();
    Linux_SambaShareSecurityForGlobalManualInstance(
      const Linux_SambaShareSecurityForGlobalManualInstance& anInstance);
    Linux_SambaShareSecurityForGlobalManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareSecurityForGlobalManualInstance();
       
    Linux_SambaShareSecurityForGlobalManualInstance& operator=(
      const Linux_SambaShareSecurityForGlobalManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareSecurityForGlobalInstanceName& anInstanceName);        
    const Linux_SambaShareSecurityForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement {

    Linux_SambaShareSecurityForGlobalManualInstance* m_elementP;
    Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement* m_nextP;

    Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement();
    ~Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareSecurityForGlobalManualInstanceEnumeration {

    private:
    Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareSecurityForGlobalManualInstanceEnumeration();
    Linux_SambaShareSecurityForGlobalManualInstanceEnumeration(
      const Linux_SambaShareSecurityForGlobalManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareSecurityForGlobalManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareSecurityForGlobalManualInstance& getNext();
    int getSize() const;
    const Linux_SambaShareSecurityForGlobalManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareSecurityForGlobalManualInstance& anInstance);

  };

}

#endif
