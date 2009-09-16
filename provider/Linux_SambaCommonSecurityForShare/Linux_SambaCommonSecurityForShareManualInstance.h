// =======================================================================
// Linux_SambaCommonSecurityForShareManualInstance.h
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
#ifndef Linux_SambaCommonSecurityForShareManualInstance_h
#define Linux_SambaCommonSecurityForShareManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaCommonSecurityForShareManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaCommonSecurityForShareManualInstance& anInstance);
    void reset();
       
    Linux_SambaCommonSecurityForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaCommonSecurityForShareManualInstance();
    Linux_SambaCommonSecurityForShareManualInstance(
      const Linux_SambaCommonSecurityForShareManualInstance& anInstance);
    Linux_SambaCommonSecurityForShareManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaCommonSecurityForShareManualInstance();
       
    Linux_SambaCommonSecurityForShareManualInstance& operator=(
      const Linux_SambaCommonSecurityForShareManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaCommonSecurityForShareInstanceName& anInstanceName);        
    const Linux_SambaCommonSecurityForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaCommonSecurityForShareManualInstanceEnumerationElement {

    Linux_SambaCommonSecurityForShareManualInstance* m_elementP;
    Linux_SambaCommonSecurityForShareManualInstanceEnumerationElement* m_nextP;

    Linux_SambaCommonSecurityForShareManualInstanceEnumerationElement();
    ~Linux_SambaCommonSecurityForShareManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaCommonSecurityForShareManualInstanceEnumeration {

    private:
    Linux_SambaCommonSecurityForShareManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaCommonSecurityForShareManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaCommonSecurityForShareManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaCommonSecurityForShareManualInstanceEnumeration();
    Linux_SambaCommonSecurityForShareManualInstanceEnumeration(
      const Linux_SambaCommonSecurityForShareManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaCommonSecurityForShareManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaCommonSecurityForShareManualInstance& getNext();
    int getSize() const;
    const Linux_SambaCommonSecurityForShareManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaCommonSecurityForShareManualInstance& anInstance);

  };

}

#endif
