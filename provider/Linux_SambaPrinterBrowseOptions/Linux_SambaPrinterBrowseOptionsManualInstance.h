// =======================================================================
// Linux_SambaPrinterBrowseOptionsManualInstance.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaPrinterBrowseOptionsManualInstance_h
#define Linux_SambaPrinterBrowseOptionsManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterBrowseOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterBrowseOptionsManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterBrowseOptionsManualInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterBrowseOptionsInstanceName m_instanceName;
    CMPIBoolean m_Browsable;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int Browsable:1;

    } isSet;
    
    public:
    Linux_SambaPrinterBrowseOptionsManualInstance();
    Linux_SambaPrinterBrowseOptionsManualInstance(
      const Linux_SambaPrinterBrowseOptionsManualInstance& anInstance);
    Linux_SambaPrinterBrowseOptionsManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterBrowseOptionsManualInstance();
       
    Linux_SambaPrinterBrowseOptionsManualInstance& operator=(
      const Linux_SambaPrinterBrowseOptionsManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterBrowseOptionsInstanceName& anInstanceName);        
    const Linux_SambaPrinterBrowseOptionsInstanceName& getInstanceName() const;

    unsigned int isBrowsableSet() const;
    void setBrowsable(const CMPIBoolean aValue);
    const CMPIBoolean getBrowsable() const;


  };
  
  struct Linux_SambaPrinterBrowseOptionsManualInstanceEnumerationElement {

    Linux_SambaPrinterBrowseOptionsManualInstance* m_elementP;
    Linux_SambaPrinterBrowseOptionsManualInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterBrowseOptionsManualInstanceEnumerationElement();
    ~Linux_SambaPrinterBrowseOptionsManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterBrowseOptionsManualInstanceEnumeration {

    private:
    Linux_SambaPrinterBrowseOptionsManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterBrowseOptionsManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterBrowseOptionsManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterBrowseOptionsManualInstanceEnumeration();
    Linux_SambaPrinterBrowseOptionsManualInstanceEnumeration(
      const Linux_SambaPrinterBrowseOptionsManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterBrowseOptionsManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterBrowseOptionsManualInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterBrowseOptionsManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterBrowseOptionsManualInstance& anInstance);

  };

}

#endif
