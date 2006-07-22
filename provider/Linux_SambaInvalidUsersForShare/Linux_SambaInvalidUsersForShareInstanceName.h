// =======================================================================
// Linux_SambaInvalidUsersForShareInstanceName.h
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
#ifndef Linux_SambaInvalidUsersForShareInstanceName_h
#define Linux_SambaInvalidUsersForShareInstanceName_h

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

  class Linux_SambaInvalidUsersForShareInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaInvalidUsersForShareInstanceName& anInstanceName);
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
    Linux_SambaInvalidUsersForShareInstanceName();
  	
    Linux_SambaInvalidUsersForShareInstanceName(const Linux_SambaInvalidUsersForShareInstanceName& anInstanceName);
  	   
    Linux_SambaInvalidUsersForShareInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaInvalidUsersForShareInstanceName();
       
    Linux_SambaInvalidUsersForShareInstanceName& operator=(const Linux_SambaInvalidUsersForShareInstanceName& anInstanceName);
       
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
  struct Linux_SambaInvalidUsersForShareInstanceNameEnumerationElement {
  	Linux_SambaInvalidUsersForShareInstanceName* m_elementP;
  	Linux_SambaInvalidUsersForShareInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaInvalidUsersForShareInstanceNameEnumerationElement();
  	~Linux_SambaInvalidUsersForShareInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaInvalidUsersForShareInstanceNameEnumeration {
  
  	private:
    Linux_SambaInvalidUsersForShareInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaInvalidUsersForShareInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaInvalidUsersForShareInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaInvalidUsersForShareInstanceNameEnumeration();
  	  
    Linux_SambaInvalidUsersForShareInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaInvalidUsersForShareInstanceNameEnumeration(const Linux_SambaInvalidUsersForShareInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaInvalidUsersForShareInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaInvalidUsersForShareInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaInvalidUsersForShareInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaInvalidUsersForShareInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

