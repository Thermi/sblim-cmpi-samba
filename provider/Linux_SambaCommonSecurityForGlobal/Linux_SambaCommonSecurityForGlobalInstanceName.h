// =======================================================================
// Linux_SambaCommonSecurityForGlobalInstanceName.h
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
#ifndef Linux_SambaCommonSecurityForGlobalInstanceName_h
#define Linux_SambaCommonSecurityForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaCommonSecurityOptionsInstanceName.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaCommonSecurityForGlobalInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaCommonSecurityForGlobalInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaCommonSecurityOptionsInstanceName m_SettingData;
    Linux_SambaGlobalOptionsInstanceName m_ManagedElement;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int SettingData:1;
      unsigned int ManagedElement:1;

    } isSet;
  
    public:
    Linux_SambaCommonSecurityForGlobalInstanceName();
  	
    Linux_SambaCommonSecurityForGlobalInstanceName(const Linux_SambaCommonSecurityForGlobalInstanceName& anInstanceName);
  	   
    Linux_SambaCommonSecurityForGlobalInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaCommonSecurityForGlobalInstanceName();
       
    Linux_SambaCommonSecurityForGlobalInstanceName& operator=(const Linux_SambaCommonSecurityForGlobalInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isSettingDataSet() const;
    void setSettingData(const Linux_SambaCommonSecurityOptionsInstanceName& aValue);
    const Linux_SambaCommonSecurityOptionsInstanceName& getSettingData() const;

    unsigned int isManagedElementSet() const;
    void setManagedElement(const Linux_SambaGlobalOptionsInstanceName& aValue);
    const Linux_SambaGlobalOptionsInstanceName& getManagedElement() const;


  };
  
  //****************************************************************************
  struct Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement {
  	Linux_SambaCommonSecurityForGlobalInstanceName* m_elementP;
  	Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration {
  
  	private:
    Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration();
  	  
    Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration(const Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaCommonSecurityForGlobalInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaCommonSecurityForGlobalInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaCommonSecurityForGlobalInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

