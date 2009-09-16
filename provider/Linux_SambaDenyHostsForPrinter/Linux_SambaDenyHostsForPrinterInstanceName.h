// =======================================================================
// Linux_SambaDenyHostsForPrinterInstanceName.h
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
#ifndef Linux_SambaDenyHostsForPrinterInstanceName_h
#define Linux_SambaDenyHostsForPrinterInstanceName_h

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

  class Linux_SambaDenyHostsForPrinterInstanceName {
       
    private:
    void init();
    void init(const Linux_SambaDenyHostsForPrinterInstanceName& anInstanceName);
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
    Linux_SambaDenyHostsForPrinterInstanceName();
  	
    Linux_SambaDenyHostsForPrinterInstanceName(const Linux_SambaDenyHostsForPrinterInstanceName& anInstanceName);
  	   
    Linux_SambaDenyHostsForPrinterInstanceName(const CmpiObjectPath& path);
  	 
    ~Linux_SambaDenyHostsForPrinterInstanceName();
       
    Linux_SambaDenyHostsForPrinterInstanceName& operator=(const Linux_SambaDenyHostsForPrinterInstanceName& anInstanceName);
       
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
  struct Linux_SambaDenyHostsForPrinterInstanceNameEnumerationElement {
  	Linux_SambaDenyHostsForPrinterInstanceName* m_elementP;
  	Linux_SambaDenyHostsForPrinterInstanceNameEnumerationElement* m_nextP;
  	
  	Linux_SambaDenyHostsForPrinterInstanceNameEnumerationElement();
  	~Linux_SambaDenyHostsForPrinterInstanceNameEnumerationElement();  	
  };
  
  //****************************************************************************
  class Linux_SambaDenyHostsForPrinterInstanceNameEnumeration {
  
  	private:
    Linux_SambaDenyHostsForPrinterInstanceNameEnumerationElement* m_firstElementP;
  	Linux_SambaDenyHostsForPrinterInstanceNameEnumerationElement* m_currentElementP;
  	Linux_SambaDenyHostsForPrinterInstanceNameEnumerationElement* m_endElementP;
  	
  	public:
    Linux_SambaDenyHostsForPrinterInstanceNameEnumeration();
  	  
    Linux_SambaDenyHostsForPrinterInstanceNameEnumeration(const CmpiArray& arr);
  	  
    Linux_SambaDenyHostsForPrinterInstanceNameEnumeration(const Linux_SambaDenyHostsForPrinterInstanceNameEnumeration& anInstanceNameEnumeration);
  	   
    ~Linux_SambaDenyHostsForPrinterInstanceNameEnumeration();
  	  
    void reset();
  	  
    bool hasNext() const;
  	  
    const Linux_SambaDenyHostsForPrinterInstanceName& getNext();
  	  
    int getSize() const;
  	  
    const Linux_SambaDenyHostsForPrinterInstanceName& getElement(int anIndex) const;  	  
  	  
    //no copy of the element is done
    void addElement(const Linux_SambaDenyHostsForPrinterInstanceName& anInstanceName);
  	  
    operator CmpiArray() const;

  };

}
#endif

