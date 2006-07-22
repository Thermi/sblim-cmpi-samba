// =======================================================================
// Linux_SambaGlobalFileNameHandlingForGlobalInstanceName.h
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
#ifndef Linux_SambaGlobalFileNameHandlingForGlobalInstanceName_h
#define Linux_SambaGlobalFileNameHandlingForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"
#include "Linux_SambaGlobalFileNameHandlingOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalFileNameHandlingForGlobalInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaGlobalOptionsInstanceName m_ManagedElement;
    Linux_SambaGlobalFileNameHandlingOptionsInstanceName m_SettingData;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int ManagedElement:1;
      unsigned int SettingData:1;

    } isSet;
  
    public:
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceName();
  	
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceName(const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& anInstanceName);
  	   
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaGlobalFileNameHandlingForGlobalInstanceName();
       
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& operator=(const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isManagedElementSet() const;
    void setManagedElement(const Linux_SambaGlobalOptionsInstanceName& aValue);
    const Linux_SambaGlobalOptionsInstanceName& getManagedElement() const;

    unsigned int isSettingDataSet() const;
    void setSettingData(const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& aValue);
    const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& getSettingData() const;


  };
  
  //****************************************************************************
  struct Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement {
  	Linux_SambaGlobalFileNameHandlingForGlobalInstanceName* m_elementP;
  	Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration {
  
  	private:
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration();
  	  
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration(const Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

