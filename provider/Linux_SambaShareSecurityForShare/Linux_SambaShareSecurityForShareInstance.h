// =======================================================================
// Linux_SambaShareSecurityForShareInstance.h
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
#ifndef Linux_SambaShareSecurityForShareInstance_h
#define Linux_SambaShareSecurityForShareInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareSecurityForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaShareSecurityForShareInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareSecurityForShareInstance& anInstance);
    void reset();
       
    Linux_SambaShareSecurityForShareInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaShareSecurityForShareInstance();
    Linux_SambaShareSecurityForShareInstance(
      const Linux_SambaShareSecurityForShareInstance& anInstance);
    Linux_SambaShareSecurityForShareInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareSecurityForShareInstance();
       
    Linux_SambaShareSecurityForShareInstance& operator=(
      const Linux_SambaShareSecurityForShareInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareSecurityForShareInstanceName& anInstanceName);        
    const Linux_SambaShareSecurityForShareInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaShareSecurityForShareInstanceEnumerationElement {

    Linux_SambaShareSecurityForShareInstance* m_elementP;
    Linux_SambaShareSecurityForShareInstanceEnumerationElement* m_nextP;

    Linux_SambaShareSecurityForShareInstanceEnumerationElement();
    ~Linux_SambaShareSecurityForShareInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareSecurityForShareInstanceEnumeration {

    private:
    Linux_SambaShareSecurityForShareInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareSecurityForShareInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareSecurityForShareInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareSecurityForShareInstanceEnumeration();
    Linux_SambaShareSecurityForShareInstanceEnumeration(
      const Linux_SambaShareSecurityForShareInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareSecurityForShareInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareSecurityForShareInstance& getNext();
    int getSize() const;
    const Linux_SambaShareSecurityForShareInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareSecurityForShareInstance& anInstance);

  };

}

#endif
