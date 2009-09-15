// =======================================================================
// Linux_SambaShareBrowseForShareInstance.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaShareBrowseForShareInstance_h
#define Linux_SambaShareBrowseForShareInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareBrowseForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaShareBrowseForShareInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareBrowseForShareInstance& anInstance);
    void reset();
       
    Linux_SambaShareBrowseForShareInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaShareBrowseForShareInstance();
    Linux_SambaShareBrowseForShareInstance(
      const Linux_SambaShareBrowseForShareInstance& anInstance);
    Linux_SambaShareBrowseForShareInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareBrowseForShareInstance();
       
    Linux_SambaShareBrowseForShareInstance& operator=(
      const Linux_SambaShareBrowseForShareInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareBrowseForShareInstanceName& anInstanceName);        
    const Linux_SambaShareBrowseForShareInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaShareBrowseForShareInstanceEnumerationElement {

    Linux_SambaShareBrowseForShareInstance* m_elementP;
    Linux_SambaShareBrowseForShareInstanceEnumerationElement* m_nextP;

    Linux_SambaShareBrowseForShareInstanceEnumerationElement();
    ~Linux_SambaShareBrowseForShareInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareBrowseForShareInstanceEnumeration {

    private:
    Linux_SambaShareBrowseForShareInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareBrowseForShareInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareBrowseForShareInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareBrowseForShareInstanceEnumeration();
    Linux_SambaShareBrowseForShareInstanceEnumeration(
      const Linux_SambaShareBrowseForShareInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareBrowseForShareInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareBrowseForShareInstance& getNext();
    int getSize() const;
    const Linux_SambaShareBrowseForShareInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareBrowseForShareInstance& anInstance);

  };

}

#endif
