// =======================================================================
// Linux_SambaCommonSecurityForGlobalManualInstance.h
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
#ifndef Linux_SambaCommonSecurityForGlobalManualInstance_h
#define Linux_SambaCommonSecurityForGlobalManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaCommonSecurityForGlobalManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaCommonSecurityForGlobalManualInstance& anInstance);
    void reset();
       
    Linux_SambaCommonSecurityForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaCommonSecurityForGlobalManualInstance();
    Linux_SambaCommonSecurityForGlobalManualInstance(
      const Linux_SambaCommonSecurityForGlobalManualInstance& anInstance);
    Linux_SambaCommonSecurityForGlobalManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaCommonSecurityForGlobalManualInstance();
       
    Linux_SambaCommonSecurityForGlobalManualInstance& operator=(
      const Linux_SambaCommonSecurityForGlobalManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaCommonSecurityForGlobalInstanceName& anInstanceName);        
    const Linux_SambaCommonSecurityForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement {

    Linux_SambaCommonSecurityForGlobalManualInstance* m_elementP;
    Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement* m_nextP;

    Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement();
    ~Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration {

    private:
    Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration();
    Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration(
      const Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaCommonSecurityForGlobalManualInstance& getNext();
    int getSize() const;
    const Linux_SambaCommonSecurityForGlobalManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaCommonSecurityForGlobalManualInstance& anInstance);

  };

}

#endif
