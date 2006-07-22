// =======================================================================
// Linux_SambaValidUsersForGlobalInstanceName.h
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
#ifndef Linux_SambaValidUsersForGlobalInstanceName_h
#define Linux_SambaValidUsersForGlobalInstanceName_h

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

  class Linux_SambaValidUsersForGlobalInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaValidUsersForGlobalInstanceName& anInstanceName);
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
    Linux_SambaValidUsersForGlobalInstanceName();
  	
    Linux_SambaValidUsersForGlobalInstanceName(const Linux_SambaValidUsersForGlobalInstanceName& anInstanceName);
  	   
    Linux_SambaValidUsersForGlobalInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaValidUsersForGlobalInstanceName();
       
    Linux_SambaValidUsersForGlobalInstanceName& operator=(const Linux_SambaValidUsersForGlobalInstanceName& anInstanceName);
       
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
  struct Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement {
  	Linux_SambaValidUsersForGlobalInstanceName* m_elementP;
  	Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaValidUsersForGlobalInstanceNameEnumeration {
  
  	private:
    Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaValidUsersForGlobalInstanceNameEnumeration();
  	  
    Linux_SambaValidUsersForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaValidUsersForGlobalInstanceNameEnumeration(const Linux_SambaValidUsersForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaValidUsersForGlobalInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaValidUsersForGlobalInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaValidUsersForGlobalInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaValidUsersForGlobalInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

