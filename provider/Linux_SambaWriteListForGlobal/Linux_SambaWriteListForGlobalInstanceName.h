// =======================================================================
// Linux_SambaWriteListForGlobalInstanceName.h
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
#ifndef Linux_SambaWriteListForGlobalInstanceName_h
#define Linux_SambaWriteListForGlobalInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaUserInstanceName.h"
#include "Linux_SambaGlobalOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaWriteListForGlobalInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaWriteListForGlobalInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaUserInstanceName m_PartComponent;
    Linux_SambaGlobalOptionsInstanceName m_GroupComponent;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int PartComponent:1;
      unsigned int GroupComponent:1;

    } isSet;
  
    public:
    Linux_SambaWriteListForGlobalInstanceName();
  	
    Linux_SambaWriteListForGlobalInstanceName(const Linux_SambaWriteListForGlobalInstanceName& anInstanceName);
  	   
    Linux_SambaWriteListForGlobalInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaWriteListForGlobalInstanceName();
       
    Linux_SambaWriteListForGlobalInstanceName& operator=(const Linux_SambaWriteListForGlobalInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isPartComponentSet() const;
    void setPartComponent(const Linux_SambaUserInstanceName& aValue);
    const Linux_SambaUserInstanceName& getPartComponent() const;

    unsigned int isGroupComponentSet() const;
    void setGroupComponent(const Linux_SambaGlobalOptionsInstanceName& aValue);
    const Linux_SambaGlobalOptionsInstanceName& getGroupComponent() const;


  };
  
  //****************************************************************************
  struct Linux_SambaWriteListForGlobalInstanceNameEnumerationElement {
  	Linux_SambaWriteListForGlobalInstanceName* m_elementP;
  	Linux_SambaWriteListForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaWriteListForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaWriteListForGlobalInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaWriteListForGlobalInstanceNameEnumeration {
  
  	private:
    Linux_SambaWriteListForGlobalInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaWriteListForGlobalInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaWriteListForGlobalInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaWriteListForGlobalInstanceNameEnumeration();
  	  
    Linux_SambaWriteListForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaWriteListForGlobalInstanceNameEnumeration(const Linux_SambaWriteListForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaWriteListForGlobalInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaWriteListForGlobalInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaWriteListForGlobalInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaWriteListForGlobalInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

