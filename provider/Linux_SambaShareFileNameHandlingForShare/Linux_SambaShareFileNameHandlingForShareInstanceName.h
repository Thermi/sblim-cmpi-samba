// =======================================================================
// Linux_SambaShareFileNameHandlingForShareInstanceName.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaShareFileNameHandlingForShareInstanceName_h
#define Linux_SambaShareFileNameHandlingForShareInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaShareFileNameHandlingOptionsInstanceName.h"
#include "Linux_SambaShareOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaShareFileNameHandlingForShareInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaShareFileNameHandlingForShareInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaShareFileNameHandlingOptionsInstanceName m_SettingData;
    Linux_SambaShareOptionsInstanceName m_ManagedElement;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int SettingData:1;
      unsigned int ManagedElement:1;

    } isSet;
  
    public:
    Linux_SambaShareFileNameHandlingForShareInstanceName();
  	
    Linux_SambaShareFileNameHandlingForShareInstanceName(const Linux_SambaShareFileNameHandlingForShareInstanceName& anInstanceName);
  	   
    Linux_SambaShareFileNameHandlingForShareInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaShareFileNameHandlingForShareInstanceName();
       
    Linux_SambaShareFileNameHandlingForShareInstanceName& operator=(const Linux_SambaShareFileNameHandlingForShareInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isSettingDataSet() const;
    void setSettingData(const Linux_SambaShareFileNameHandlingOptionsInstanceName& aValue);
    const Linux_SambaShareFileNameHandlingOptionsInstanceName& getSettingData() const;

    unsigned int isManagedElementSet() const;
    void setManagedElement(const Linux_SambaShareOptionsInstanceName& aValue);
    const Linux_SambaShareOptionsInstanceName& getManagedElement() const;


  };
  
  //****************************************************************************
  struct Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement {
  	Linux_SambaShareFileNameHandlingForShareInstanceName* m_elementP;
  	Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement();
  	~Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration {
  
  	private:
    Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration();
  	  
    Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration(const Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaShareFileNameHandlingForShareInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaShareFileNameHandlingForShareInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaShareFileNameHandlingForShareInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

