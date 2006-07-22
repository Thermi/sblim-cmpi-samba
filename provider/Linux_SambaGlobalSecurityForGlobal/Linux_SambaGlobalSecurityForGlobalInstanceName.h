// =======================================================================
// Linux_SambaGlobalSecurityForGlobalInstanceName.h
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
#ifndef Linux_SambaGlobalSecurityForGlobalInstanceName_h
#define Linux_SambaGlobalSecurityForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaGlobalSecurityOptionsInstanceName.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalSecurityForGlobalInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaGlobalSecurityForGlobalInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaGlobalSecurityOptionsInstanceName m_SettingData;
    Linux_SambaGlobalOptionsInstanceName m_ManagedElement;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int SettingData:1;
      unsigned int ManagedElement:1;

    } isSet;
  
    public:
    Linux_SambaGlobalSecurityForGlobalInstanceName();
  	
    Linux_SambaGlobalSecurityForGlobalInstanceName(const Linux_SambaGlobalSecurityForGlobalInstanceName& anInstanceName);
  	   
    Linux_SambaGlobalSecurityForGlobalInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaGlobalSecurityForGlobalInstanceName();
       
    Linux_SambaGlobalSecurityForGlobalInstanceName& operator=(const Linux_SambaGlobalSecurityForGlobalInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isSettingDataSet() const;
    void setSettingData(const Linux_SambaGlobalSecurityOptionsInstanceName& aValue);
    const Linux_SambaGlobalSecurityOptionsInstanceName& getSettingData() const;

    unsigned int isManagedElementSet() const;
    void setManagedElement(const Linux_SambaGlobalOptionsInstanceName& aValue);
    const Linux_SambaGlobalOptionsInstanceName& getManagedElement() const;


  };
  
  //****************************************************************************
  struct Linux_SambaGlobalSecurityForGlobalInstanceNameEnumerationElement {
  	Linux_SambaGlobalSecurityForGlobalInstanceName* m_elementP;
  	Linux_SambaGlobalSecurityForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalSecurityForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaGlobalSecurityForGlobalInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration {
  
  	private:
    Linux_SambaGlobalSecurityForGlobalInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaGlobalSecurityForGlobalInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaGlobalSecurityForGlobalInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration();
  	  
    Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration(const Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaGlobalSecurityForGlobalInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaGlobalSecurityForGlobalInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaGlobalSecurityForGlobalInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

