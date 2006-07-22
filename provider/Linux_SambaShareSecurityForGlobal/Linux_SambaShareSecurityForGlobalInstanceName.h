// =======================================================================
// Linux_SambaShareSecurityForGlobalInstanceName.h
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
#ifndef Linux_SambaShareSecurityForGlobalInstanceName_h
#define Linux_SambaShareSecurityForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaShareSecurityOptionsInstanceName.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaShareSecurityForGlobalInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaShareSecurityForGlobalInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaShareSecurityOptionsInstanceName m_SettingData;
    Linux_SambaGlobalOptionsInstanceName m_ManagedElement;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int SettingData:1;
      unsigned int ManagedElement:1;

    } isSet;
  
    public:
    Linux_SambaShareSecurityForGlobalInstanceName();
  	
    Linux_SambaShareSecurityForGlobalInstanceName(const Linux_SambaShareSecurityForGlobalInstanceName& anInstanceName);
  	   
    Linux_SambaShareSecurityForGlobalInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaShareSecurityForGlobalInstanceName();
       
    Linux_SambaShareSecurityForGlobalInstanceName& operator=(const Linux_SambaShareSecurityForGlobalInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isSettingDataSet() const;
    void setSettingData(const Linux_SambaShareSecurityOptionsInstanceName& aValue);
    const Linux_SambaShareSecurityOptionsInstanceName& getSettingData() const;

    unsigned int isManagedElementSet() const;
    void setManagedElement(const Linux_SambaGlobalOptionsInstanceName& aValue);
    const Linux_SambaGlobalOptionsInstanceName& getManagedElement() const;


  };
  
  //****************************************************************************
  struct Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement {
  	Linux_SambaShareSecurityForGlobalInstanceName* m_elementP;
  	Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaShareSecurityForGlobalInstanceNameEnumeration {
  
  	private:
    Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaShareSecurityForGlobalInstanceNameEnumeration();
  	  
    Linux_SambaShareSecurityForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaShareSecurityForGlobalInstanceNameEnumeration(const Linux_SambaShareSecurityForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaShareSecurityForGlobalInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaShareSecurityForGlobalInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaShareSecurityForGlobalInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaShareSecurityForGlobalInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

