// =======================================================================
// Linux_SambaGlobalBrowseForGlobalInstanceName.h
//     created on Fri, 24 Feb 2006 using ECUTE
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
//                Rodrigo Ceron    <rceron@br.ibm.com>
//                Wolfgang Taphorn <taphorn@de.ibm.com>
//
// =======================================================================
//
// 
#ifndef Linux_SambaGlobalBrowseForGlobalInstanceName_h
#define Linux_SambaGlobalBrowseForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaGlobalBrowseOptionsInstanceName.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalBrowseForGlobalInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaGlobalBrowseForGlobalInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaGlobalBrowseOptionsInstanceName m_SettingData;
    Linux_SambaGlobalOptionsInstanceName m_ManagedElement;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int SettingData:1;
      unsigned int ManagedElement:1;

    } isSet;
  
    public:
    Linux_SambaGlobalBrowseForGlobalInstanceName();
  	
    Linux_SambaGlobalBrowseForGlobalInstanceName(const Linux_SambaGlobalBrowseForGlobalInstanceName& anInstanceName);
  	   
    Linux_SambaGlobalBrowseForGlobalInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaGlobalBrowseForGlobalInstanceName();
       
    Linux_SambaGlobalBrowseForGlobalInstanceName& operator=(const Linux_SambaGlobalBrowseForGlobalInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isSettingDataSet() const;
    void setSettingData(const Linux_SambaGlobalBrowseOptionsInstanceName& aValue);
    const Linux_SambaGlobalBrowseOptionsInstanceName& getSettingData() const;

    unsigned int isManagedElementSet() const;
    void setManagedElement(const Linux_SambaGlobalOptionsInstanceName& aValue);
    const Linux_SambaGlobalOptionsInstanceName& getManagedElement() const;


  };
  
  //****************************************************************************
  struct Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement {
  	Linux_SambaGlobalBrowseForGlobalInstanceName* m_elementP;
  	Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration {
  
  	private:
    Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration();
  	  
    Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration(const Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaGlobalBrowseForGlobalInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaGlobalBrowseForGlobalInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaGlobalBrowseForGlobalInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

