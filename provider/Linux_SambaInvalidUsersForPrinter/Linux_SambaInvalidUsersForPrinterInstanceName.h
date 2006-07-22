// =======================================================================
// Linux_SambaInvalidUsersForPrinterInstanceName.h
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
#ifndef Linux_SambaInvalidUsersForPrinterInstanceName_h
#define Linux_SambaInvalidUsersForPrinterInstanceName_h

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

  class Linux_SambaInvalidUsersForPrinterInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaInvalidUsersForPrinterInstanceName& anInstanceName);
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
    Linux_SambaInvalidUsersForPrinterInstanceName();
  	
    Linux_SambaInvalidUsersForPrinterInstanceName(const Linux_SambaInvalidUsersForPrinterInstanceName& anInstanceName);
  	   
    Linux_SambaInvalidUsersForPrinterInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaInvalidUsersForPrinterInstanceName();
       
    Linux_SambaInvalidUsersForPrinterInstanceName& operator=(const Linux_SambaInvalidUsersForPrinterInstanceName& anInstanceName);
       
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
  struct Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement {
  	Linux_SambaInvalidUsersForPrinterInstanceName* m_elementP;
  	Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement();
  	~Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration {
  
  	private:
    Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration();
  	  
    Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration(const Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaInvalidUsersForPrinterInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaInvalidUsersForPrinterInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaInvalidUsersForPrinterInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

