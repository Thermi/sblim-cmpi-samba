// =======================================================================
// Linux_SambaPrinterAdminForPrinterInstanceName.h
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
#ifndef Linux_SambaPrinterAdminForPrinterInstanceName_h
#define Linux_SambaPrinterAdminForPrinterInstanceName_h

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

  class Linux_SambaPrinterAdminForPrinterInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaPrinterAdminForPrinterInstanceName& anInstanceName);
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
    Linux_SambaPrinterAdminForPrinterInstanceName();
  	
    Linux_SambaPrinterAdminForPrinterInstanceName(const Linux_SambaPrinterAdminForPrinterInstanceName& anInstanceName);
  	   
    Linux_SambaPrinterAdminForPrinterInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaPrinterAdminForPrinterInstanceName();
       
    Linux_SambaPrinterAdminForPrinterInstanceName& operator=(const Linux_SambaPrinterAdminForPrinterInstanceName& anInstanceName);
       
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
  struct Linux_SambaPrinterAdminForPrinterInstanceNameEnumerationElement {
  	Linux_SambaPrinterAdminForPrinterInstanceName* m_elementP;
  	Linux_SambaPrinterAdminForPrinterInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterAdminForPrinterInstanceNameEnumerationElement();
  	~Linux_SambaPrinterAdminForPrinterInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration {
  
  	private:
    Linux_SambaPrinterAdminForPrinterInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaPrinterAdminForPrinterInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaPrinterAdminForPrinterInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration();
  	  
    Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration(const Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaPrinterAdminForPrinterInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaPrinterAdminForPrinterInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaPrinterAdminForPrinterInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

