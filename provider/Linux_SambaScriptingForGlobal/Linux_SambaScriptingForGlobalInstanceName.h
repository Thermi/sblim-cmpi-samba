// =======================================================================
// Linux_SambaScriptingForGlobalInstanceName.h
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
#ifndef Linux_SambaScriptingForGlobalInstanceName_h
#define Linux_SambaScriptingForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"
#include "Linux_SambaScriptingOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaScriptingForGlobalInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaScriptingForGlobalInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaGlobalOptionsInstanceName m_ManagedElement;
    Linux_SambaScriptingOptionsInstanceName m_SettingData;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int ManagedElement:1;
      unsigned int SettingData:1;

    } isSet;
  
    public:
    Linux_SambaScriptingForGlobalInstanceName();
  	
    Linux_SambaScriptingForGlobalInstanceName(const Linux_SambaScriptingForGlobalInstanceName& anInstanceName);
  	   
    Linux_SambaScriptingForGlobalInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaScriptingForGlobalInstanceName();
       
    Linux_SambaScriptingForGlobalInstanceName& operator=(const Linux_SambaScriptingForGlobalInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isManagedElementSet() const;
    void setManagedElement(const Linux_SambaGlobalOptionsInstanceName& aValue);
    const Linux_SambaGlobalOptionsInstanceName& getManagedElement() const;

    unsigned int isSettingDataSet() const;
    void setSettingData(const Linux_SambaScriptingOptionsInstanceName& aValue);
    const Linux_SambaScriptingOptionsInstanceName& getSettingData() const;


  };
  
  //****************************************************************************
  struct Linux_SambaScriptingForGlobalInstanceNameEnumerationElement {
  	Linux_SambaScriptingForGlobalInstanceName* m_elementP;
  	Linux_SambaScriptingForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaScriptingForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaScriptingForGlobalInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaScriptingForGlobalInstanceNameEnumeration {
  
  	private:
    Linux_SambaScriptingForGlobalInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaScriptingForGlobalInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaScriptingForGlobalInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaScriptingForGlobalInstanceNameEnumeration();
  	  
    Linux_SambaScriptingForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaScriptingForGlobalInstanceNameEnumeration(const Linux_SambaScriptingForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaScriptingForGlobalInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaScriptingForGlobalInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaScriptingForGlobalInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaScriptingForGlobalInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

