// =======================================================================
// Linux_SambaUsersForServiceInstanceName.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://www.opensource.org/licenses/eclipse-1.0.php
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
#ifndef Linux_SambaUsersForServiceInstanceName_h
#define Linux_SambaUsersForServiceInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaUserInstanceName.h"
#include "Linux_SambaServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaUsersForServiceInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaUsersForServiceInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaUserInstanceName m_PartComponent;
    Linux_SambaServiceInstanceName m_GroupComponent;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int PartComponent:1;
      unsigned int GroupComponent:1;

    } isSet;
  
    public:
    Linux_SambaUsersForServiceInstanceName();
  	
    Linux_SambaUsersForServiceInstanceName(const Linux_SambaUsersForServiceInstanceName& anInstanceName);
  	   
    Linux_SambaUsersForServiceInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaUsersForServiceInstanceName();
       
    Linux_SambaUsersForServiceInstanceName& operator=(const Linux_SambaUsersForServiceInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isPartComponentSet() const;
    void setPartComponent(const Linux_SambaUserInstanceName& aValue);
    const Linux_SambaUserInstanceName& getPartComponent() const;

    unsigned int isGroupComponentSet() const;
    void setGroupComponent(const Linux_SambaServiceInstanceName& aValue);
    const Linux_SambaServiceInstanceName& getGroupComponent() const;


  };
  
  //****************************************************************************
  struct Linux_SambaUsersForServiceInstanceNameEnumerationElement {
  	Linux_SambaUsersForServiceInstanceName* m_elementP;
  	Linux_SambaUsersForServiceInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaUsersForServiceInstanceNameEnumerationElement();
  	~Linux_SambaUsersForServiceInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaUsersForServiceInstanceNameEnumeration {
  
  	private:
    Linux_SambaUsersForServiceInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaUsersForServiceInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaUsersForServiceInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaUsersForServiceInstanceNameEnumeration();
  	  
    Linux_SambaUsersForServiceInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaUsersForServiceInstanceNameEnumeration(const Linux_SambaUsersForServiceInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaUsersForServiceInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaUsersForServiceInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaUsersForServiceInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaUsersForServiceInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

