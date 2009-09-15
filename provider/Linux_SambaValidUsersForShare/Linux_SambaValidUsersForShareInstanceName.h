// =======================================================================
// Linux_SambaValidUsersForShareInstanceName.h
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
#ifndef Linux_SambaValidUsersForShareInstanceName_h
#define Linux_SambaValidUsersForShareInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaUserInstanceName.h"
#include "Linux_SambaShareOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaValidUsersForShareInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaValidUsersForShareInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaUserInstanceName m_PartComponent;
    Linux_SambaShareOptionsInstanceName m_GroupComponent;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int PartComponent:1;
      unsigned int GroupComponent:1;

    } isSet;
  
    public:
    Linux_SambaValidUsersForShareInstanceName();
  	
    Linux_SambaValidUsersForShareInstanceName(const Linux_SambaValidUsersForShareInstanceName& anInstanceName);
  	   
    Linux_SambaValidUsersForShareInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaValidUsersForShareInstanceName();
       
    Linux_SambaValidUsersForShareInstanceName& operator=(const Linux_SambaValidUsersForShareInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isPartComponentSet() const;
    void setPartComponent(const Linux_SambaUserInstanceName& aValue);
    const Linux_SambaUserInstanceName& getPartComponent() const;

    unsigned int isGroupComponentSet() const;
    void setGroupComponent(const Linux_SambaShareOptionsInstanceName& aValue);
    const Linux_SambaShareOptionsInstanceName& getGroupComponent() const;


  };
  
  //****************************************************************************
  struct Linux_SambaValidUsersForShareInstanceNameEnumerationElement {
  	Linux_SambaValidUsersForShareInstanceName* m_elementP;
  	Linux_SambaValidUsersForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaValidUsersForShareInstanceNameEnumerationElement();
  	~Linux_SambaValidUsersForShareInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaValidUsersForShareInstanceNameEnumeration {
  
  	private:
    Linux_SambaValidUsersForShareInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaValidUsersForShareInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaValidUsersForShareInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaValidUsersForShareInstanceNameEnumeration();
  	  
    Linux_SambaValidUsersForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaValidUsersForShareInstanceNameEnumeration(const Linux_SambaValidUsersForShareInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaValidUsersForShareInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaValidUsersForShareInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaValidUsersForShareInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaValidUsersForShareInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

