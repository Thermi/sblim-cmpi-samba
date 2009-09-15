// =======================================================================
// Linux_SambaValidUsersForPrinterInstanceName.h
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
#ifndef Linux_SambaValidUsersForPrinterInstanceName_h
#define Linux_SambaValidUsersForPrinterInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaUserInstanceName.h"
#include "Linux_SambaPrinterOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaValidUsersForPrinterInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaValidUsersForPrinterInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaUserInstanceName m_PartComponent;
    Linux_SambaPrinterOptionsInstanceName m_GroupComponent;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int PartComponent:1;
      unsigned int GroupComponent:1;

    } isSet;
  
    public:
    Linux_SambaValidUsersForPrinterInstanceName();
  	
    Linux_SambaValidUsersForPrinterInstanceName(const Linux_SambaValidUsersForPrinterInstanceName& anInstanceName);
  	   
    Linux_SambaValidUsersForPrinterInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaValidUsersForPrinterInstanceName();
       
    Linux_SambaValidUsersForPrinterInstanceName& operator=(const Linux_SambaValidUsersForPrinterInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isPartComponentSet() const;
    void setPartComponent(const Linux_SambaUserInstanceName& aValue);
    const Linux_SambaUserInstanceName& getPartComponent() const;

    unsigned int isGroupComponentSet() const;
    void setGroupComponent(const Linux_SambaPrinterOptionsInstanceName& aValue);
    const Linux_SambaPrinterOptionsInstanceName& getGroupComponent() const;


  };
  
  //****************************************************************************
  struct Linux_SambaValidUsersForPrinterInstanceNameEnumerationElement {
  	Linux_SambaValidUsersForPrinterInstanceName* m_elementP;
  	Linux_SambaValidUsersForPrinterInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaValidUsersForPrinterInstanceNameEnumerationElement();
  	~Linux_SambaValidUsersForPrinterInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaValidUsersForPrinterInstanceNameEnumeration {
  
  	private:
    Linux_SambaValidUsersForPrinterInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaValidUsersForPrinterInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaValidUsersForPrinterInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaValidUsersForPrinterInstanceNameEnumeration();
  	  
    Linux_SambaValidUsersForPrinterInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaValidUsersForPrinterInstanceNameEnumeration(const Linux_SambaValidUsersForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaValidUsersForPrinterInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaValidUsersForPrinterInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaValidUsersForPrinterInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaValidUsersForPrinterInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

