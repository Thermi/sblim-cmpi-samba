// =======================================================================
// Linux_SambaShareForServiceInstanceName.h
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
#ifndef Linux_SambaShareForServiceInstanceName_h
#define Linux_SambaShareForServiceInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaShareOptionsInstanceName.h"
#include "Linux_SambaServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaShareForServiceInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaShareForServiceInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaShareOptionsInstanceName m_SettingData;
    Linux_SambaServiceInstanceName m_ManagedElement;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int SettingData:1;
      unsigned int ManagedElement:1;

    } isSet;
  
    public:
    Linux_SambaShareForServiceInstanceName();
  	
    Linux_SambaShareForServiceInstanceName(const Linux_SambaShareForServiceInstanceName& anInstanceName);
  	   
    Linux_SambaShareForServiceInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaShareForServiceInstanceName();
       
    Linux_SambaShareForServiceInstanceName& operator=(const Linux_SambaShareForServiceInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isSettingDataSet() const;
    void setSettingData(const Linux_SambaShareOptionsInstanceName& aValue);
    const Linux_SambaShareOptionsInstanceName& getSettingData() const;

    unsigned int isManagedElementSet() const;
    void setManagedElement(const Linux_SambaServiceInstanceName& aValue);
    const Linux_SambaServiceInstanceName& getManagedElement() const;


  };
  
  //****************************************************************************
  struct Linux_SambaShareForServiceInstanceNameEnumerationElement {
  	Linux_SambaShareForServiceInstanceName* m_elementP;
  	Linux_SambaShareForServiceInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaShareForServiceInstanceNameEnumerationElement();
  	~Linux_SambaShareForServiceInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaShareForServiceInstanceNameEnumeration {
  
  	private:
    Linux_SambaShareForServiceInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaShareForServiceInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaShareForServiceInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaShareForServiceInstanceNameEnumeration();
  	  
    Linux_SambaShareForServiceInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaShareForServiceInstanceNameEnumeration(const Linux_SambaShareForServiceInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaShareForServiceInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaShareForServiceInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaShareForServiceInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaShareForServiceInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

