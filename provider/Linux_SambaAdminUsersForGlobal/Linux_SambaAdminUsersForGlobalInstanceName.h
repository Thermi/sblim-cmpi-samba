// =======================================================================
// Linux_SambaAdminUsersForGlobalInstanceName.h
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
#ifndef Linux_SambaAdminUsersForGlobalInstanceName_h
#define Linux_SambaAdminUsersForGlobalInstanceName_h

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

  class Linux_SambaAdminUsersForGlobalInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaAdminUsersForGlobalInstanceName& anInstanceName);
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
    Linux_SambaAdminUsersForGlobalInstanceName();
  	
    Linux_SambaAdminUsersForGlobalInstanceName(const Linux_SambaAdminUsersForGlobalInstanceName& anInstanceName);
  	   
    Linux_SambaAdminUsersForGlobalInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaAdminUsersForGlobalInstanceName();
       
    Linux_SambaAdminUsersForGlobalInstanceName& operator=(const Linux_SambaAdminUsersForGlobalInstanceName& anInstanceName);
       
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
  struct Linux_SambaAdminUsersForGlobalInstanceNameEnumerationElement {
  	Linux_SambaAdminUsersForGlobalInstanceName* m_elementP;
  	Linux_SambaAdminUsersForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaAdminUsersForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaAdminUsersForGlobalInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaAdminUsersForGlobalInstanceNameEnumeration {
  
  	private:
    Linux_SambaAdminUsersForGlobalInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaAdminUsersForGlobalInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaAdminUsersForGlobalInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaAdminUsersForGlobalInstanceNameEnumeration();
  	  
    Linux_SambaAdminUsersForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaAdminUsersForGlobalInstanceNameEnumeration(const Linux_SambaAdminUsersForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaAdminUsersForGlobalInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaAdminUsersForGlobalInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaAdminUsersForGlobalInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaAdminUsersForGlobalInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

