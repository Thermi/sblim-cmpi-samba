// =======================================================================
// Linux_SambaAllowHostsForPrinterInstanceName.h
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
#ifndef Linux_SambaAllowHostsForPrinterInstanceName_h
#define Linux_SambaAllowHostsForPrinterInstanceName_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"
#include "ArrayConverter.h"
#include "CmpiErrorFormater.h"
#include "Linux_SambaHostInstanceName.h"
#include "Linux_SambaPrinterOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaAllowHostsForPrinterInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaAllowHostsForPrinterInstanceName& anInstanceName);
    void reset();
       
    const char* m_CIMClassNameP;
    const char* m_nameSpaceP;
    
    Linux_SambaHostInstanceName m_PartComponent;
    Linux_SambaPrinterOptionsInstanceName m_GroupComponent;
       
    struct isSetType{
      unsigned int m_nameSpaceP:1;
      unsigned int PartComponent:1;
      unsigned int GroupComponent:1;

    } isSet;
  
    public:
    Linux_SambaAllowHostsForPrinterInstanceName();
  	
    Linux_SambaAllowHostsForPrinterInstanceName(const Linux_SambaAllowHostsForPrinterInstanceName& anInstanceName);
  	   
    Linux_SambaAllowHostsForPrinterInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaAllowHostsForPrinterInstanceName();
       
    Linux_SambaAllowHostsForPrinterInstanceName& operator=(const Linux_SambaAllowHostsForPrinterInstanceName& anInstanceName);
       
    CmpiObjectPath getObjectPath() const;
       
    void fillKeys(CmpiInstance& cmpiInstance) const;
       
    unsigned int isNameSpaceSet() const;
    void setNamespace(const char* aNameSpaceP, int aCopyFlag = 1);
    const char* getNamespace() const;
    
    unsigned int isPartComponentSet() const;
    void setPartComponent(const Linux_SambaHostInstanceName& aValue);
    const Linux_SambaHostInstanceName& getPartComponent() const;

    unsigned int isGroupComponentSet() const;
    void setGroupComponent(const Linux_SambaPrinterOptionsInstanceName& aValue);
    const Linux_SambaPrinterOptionsInstanceName& getGroupComponent() const;


  };
  
  //****************************************************************************
  struct Linux_SambaAllowHostsForPrinterInstanceNameEnumerationElement {
  	Linux_SambaAllowHostsForPrinterInstanceName* m_elementP;
  	Linux_SambaAllowHostsForPrinterInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaAllowHostsForPrinterInstanceNameEnumerationElement();
  	~Linux_SambaAllowHostsForPrinterInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaAllowHostsForPrinterInstanceNameEnumeration {
  
  	private:
    Linux_SambaAllowHostsForPrinterInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaAllowHostsForPrinterInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaAllowHostsForPrinterInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaAllowHostsForPrinterInstanceNameEnumeration();
  	  
    Linux_SambaAllowHostsForPrinterInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaAllowHostsForPrinterInstanceNameEnumeration(const Linux_SambaAllowHostsForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaAllowHostsForPrinterInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaAllowHostsForPrinterInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaAllowHostsForPrinterInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaAllowHostsForPrinterInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

