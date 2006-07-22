// =======================================================================
// Linux_SambaShareSecurityForShareInstanceName.h
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
#ifndef Linux_SambaShareSecurityForShareInstanceName_h
#define Linux_SambaShareSecurityForShareInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaShareSecurityOptionsInstanceName.h"
#include "Linux_SambaShareOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaShareSecurityForShareInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaShareSecurityForShareInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaShareSecurityOptionsInstanceName m_SettingData;
    Linux_SambaShareOptionsInstanceName m_ManagedElement;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int SettingData:1;
      unsigned int ManagedElement:1;

    } isSet;
  
    public:
    Linux_SambaShareSecurityForShareInstanceName();
  	
    Linux_SambaShareSecurityForShareInstanceName(const Linux_SambaShareSecurityForShareInstanceName& anInstanceName);
  	   
    Linux_SambaShareSecurityForShareInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaShareSecurityForShareInstanceName();
       
    Linux_SambaShareSecurityForShareInstanceName& operator=(const Linux_SambaShareSecurityForShareInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isSettingDataSet() const;
    void setSettingData(const Linux_SambaShareSecurityOptionsInstanceName& aValue);
    const Linux_SambaShareSecurityOptionsInstanceName& getSettingData() const;

    unsigned int isManagedElementSet() const;
    void setManagedElement(const Linux_SambaShareOptionsInstanceName& aValue);
    const Linux_SambaShareOptionsInstanceName& getManagedElement() const;


  };
  
  //****************************************************************************
  struct Linux_SambaShareSecurityForShareInstanceNameEnumerationElement {
  	Linux_SambaShareSecurityForShareInstanceName* m_elementP;
  	Linux_SambaShareSecurityForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaShareSecurityForShareInstanceNameEnumerationElement();
  	~Linux_SambaShareSecurityForShareInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaShareSecurityForShareInstanceNameEnumeration {
  
  	private:
    Linux_SambaShareSecurityForShareInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaShareSecurityForShareInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaShareSecurityForShareInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaShareSecurityForShareInstanceNameEnumeration();
  	  
    Linux_SambaShareSecurityForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaShareSecurityForShareInstanceNameEnumeration(const Linux_SambaShareSecurityForShareInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaShareSecurityForShareInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaShareSecurityForShareInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaShareSecurityForShareInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaShareSecurityForShareInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

