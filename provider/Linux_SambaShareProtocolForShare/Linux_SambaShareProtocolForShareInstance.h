// =======================================================================
// Linux_SambaShareProtocolForShareInstance.h
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
#ifndef Linux_SambaShareProtocolForShareInstance_h
#define Linux_SambaShareProtocolForShareInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareProtocolForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaShareProtocolForShareInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareProtocolForShareInstance& anInstance);
    void reset();
       
    Linux_SambaShareProtocolForShareInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaShareProtocolForShareInstance();
    Linux_SambaShareProtocolForShareInstance(
      const Linux_SambaShareProtocolForShareInstance& anInstance);
    Linux_SambaShareProtocolForShareInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareProtocolForShareInstance();
       
    Linux_SambaShareProtocolForShareInstance& operator=(
      const Linux_SambaShareProtocolForShareInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareProtocolForShareInstanceName& anInstanceName);        
    const Linux_SambaShareProtocolForShareInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaShareProtocolForShareInstanceEnumerationElement {

    Linux_SambaShareProtocolForShareInstance* m_elementP;
    Linux_SambaShareProtocolForShareInstanceEnumerationElement* m_nextP;

    Linux_SambaShareProtocolForShareInstanceEnumerationElement();
    ~Linux_SambaShareProtocolForShareInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareProtocolForShareInstanceEnumeration {

    private:
    Linux_SambaShareProtocolForShareInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareProtocolForShareInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareProtocolForShareInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareProtocolForShareInstanceEnumeration();
    Linux_SambaShareProtocolForShareInstanceEnumeration(
      const Linux_SambaShareProtocolForShareInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareProtocolForShareInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareProtocolForShareInstance& getNext();
    int getSize() const;
    const Linux_SambaShareProtocolForShareInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareProtocolForShareInstance& anInstance);

  };

}

#endif
