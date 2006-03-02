// =======================================================================
// Linux_SambaGlobalProtocolForGlobalInstanceName.h
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
#ifndef Linux_SambaGlobalProtocolForGlobalInstanceName_h
#define Linux_SambaGlobalProtocolForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaGlobalProtocolOptionsInstanceName.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalProtocolForGlobalInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaGlobalProtocolForGlobalInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaGlobalProtocolOptionsInstanceName m_SettingData;
    Linux_SambaGlobalOptionsInstanceName m_ManagedElement;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int SettingData:1;
      unsigned int ManagedElement:1;

    } isSet;
  
    public:
    Linux_SambaGlobalProtocolForGlobalInstanceName();
  	
    Linux_SambaGlobalProtocolForGlobalInstanceName(const Linux_SambaGlobalProtocolForGlobalInstanceName& anInstanceName);
  	   
    Linux_SambaGlobalProtocolForGlobalInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaGlobalProtocolForGlobalInstanceName();
       
    Linux_SambaGlobalProtocolForGlobalInstanceName& operator=(const Linux_SambaGlobalProtocolForGlobalInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isSettingDataSet() const;
    void setSettingData(const Linux_SambaGlobalProtocolOptionsInstanceName& aValue);
    const Linux_SambaGlobalProtocolOptionsInstanceName& getSettingData() const;

    unsigned int isManagedElementSet() const;
    void setManagedElement(const Linux_SambaGlobalOptionsInstanceName& aValue);
    const Linux_SambaGlobalOptionsInstanceName& getManagedElement() const;


  };
  
  //****************************************************************************
  struct Linux_SambaGlobalProtocolForGlobalInstanceNameEnumerationElement {
  	Linux_SambaGlobalProtocolForGlobalInstanceName* m_elementP;
  	Linux_SambaGlobalProtocolForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalProtocolForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaGlobalProtocolForGlobalInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaGlobalProtocolForGlobalInstanceNameEnumeration {
  
  	private:
    Linux_SambaGlobalProtocolForGlobalInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaGlobalProtocolForGlobalInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaGlobalProtocolForGlobalInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaGlobalProtocolForGlobalInstanceNameEnumeration();
  	  
    Linux_SambaGlobalProtocolForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaGlobalProtocolForGlobalInstanceNameEnumeration(const Linux_SambaGlobalProtocolForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaGlobalProtocolForGlobalInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaGlobalProtocolForGlobalInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaGlobalProtocolForGlobalInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaGlobalProtocolForGlobalInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

