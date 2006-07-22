// =======================================================================
// Linux_SambaInvalidUsersForGlobalInstanceName.h
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
#ifndef Linux_SambaInvalidUsersForGlobalInstanceName_h
#define Linux_SambaInvalidUsersForGlobalInstanceName_h

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

  class Linux_SambaInvalidUsersForGlobalInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaInvalidUsersForGlobalInstanceName& anInstanceName);
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
    Linux_SambaInvalidUsersForGlobalInstanceName();
  	
    Linux_SambaInvalidUsersForGlobalInstanceName(const Linux_SambaInvalidUsersForGlobalInstanceName& anInstanceName);
  	   
    Linux_SambaInvalidUsersForGlobalInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaInvalidUsersForGlobalInstanceName();
       
    Linux_SambaInvalidUsersForGlobalInstanceName& operator=(const Linux_SambaInvalidUsersForGlobalInstanceName& anInstanceName);
       
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
  struct Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement {
  	Linux_SambaInvalidUsersForGlobalInstanceName* m_elementP;
  	Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement();
  	~Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration {
  
  	private:
    Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration();
  	  
    Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration(const Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaInvalidUsersForGlobalInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaInvalidUsersForGlobalInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaInvalidUsersForGlobalInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

