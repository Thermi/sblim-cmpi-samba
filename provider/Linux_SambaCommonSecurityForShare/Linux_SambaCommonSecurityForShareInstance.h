// =======================================================================
// Linux_SambaCommonSecurityForShareInstance.h
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
#ifndef Linux_SambaCommonSecurityForShareInstance_h
#define Linux_SambaCommonSecurityForShareInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaCommonSecurityForShareInstance {
       
    private:
    void init();
    void init(const Linux_SambaCommonSecurityForShareInstance& anInstance);
    void reset();
       
    Linux_SambaCommonSecurityForShareInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaCommonSecurityForShareInstance();
    Linux_SambaCommonSecurityForShareInstance(
      const Linux_SambaCommonSecurityForShareInstance& anInstance);
    Linux_SambaCommonSecurityForShareInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaCommonSecurityForShareInstance();
       
    Linux_SambaCommonSecurityForShareInstance& operator=(
      const Linux_SambaCommonSecurityForShareInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaCommonSecurityForShareInstanceName& anInstanceName);        
    const Linux_SambaCommonSecurityForShareInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaCommonSecurityForShareInstanceEnumerationElement {

    Linux_SambaCommonSecurityForShareInstance* m_elementP;
    Linux_SambaCommonSecurityForShareInstanceEnumerationElement* m_nextP;

    Linux_SambaCommonSecurityForShareInstanceEnumerationElement();
    ~Linux_SambaCommonSecurityForShareInstanceEnumerationElement();  

  };
  

  class Linux_SambaCommonSecurityForShareInstanceEnumeration {

    private:
    Linux_SambaCommonSecurityForShareInstanceEnumerationElement* m_firstElementP;
    Linux_SambaCommonSecurityForShareInstanceEnumerationElement* m_currentElementP;
    Linux_SambaCommonSecurityForShareInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaCommonSecurityForShareInstanceEnumeration();
    Linux_SambaCommonSecurityForShareInstanceEnumeration(
      const Linux_SambaCommonSecurityForShareInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaCommonSecurityForShareInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaCommonSecurityForShareInstance& getNext();
    int getSize() const;
    const Linux_SambaCommonSecurityForShareInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaCommonSecurityForShareInstance& anInstance);

  };

}

#endif
