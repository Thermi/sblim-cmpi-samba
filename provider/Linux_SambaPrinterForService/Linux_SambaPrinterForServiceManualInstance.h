// =======================================================================
// Linux_SambaPrinterForServiceManualInstance.h
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
#ifndef Linux_SambaPrinterForServiceManualInstance_h
#define Linux_SambaPrinterForServiceManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterForServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterForServiceManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterForServiceManualInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterForServiceInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterForServiceManualInstance();
    Linux_SambaPrinterForServiceManualInstance(
      const Linux_SambaPrinterForServiceManualInstance& anInstance);
    Linux_SambaPrinterForServiceManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterForServiceManualInstance();
       
    Linux_SambaPrinterForServiceManualInstance& operator=(
      const Linux_SambaPrinterForServiceManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterForServiceInstanceName& anInstanceName);        
    const Linux_SambaPrinterForServiceInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaPrinterForServiceManualInstanceEnumerationElement {

    Linux_SambaPrinterForServiceManualInstance* m_elementP;
    Linux_SambaPrinterForServiceManualInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterForServiceManualInstanceEnumerationElement();
    ~Linux_SambaPrinterForServiceManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterForServiceManualInstanceEnumeration {

    private:
    Linux_SambaPrinterForServiceManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterForServiceManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterForServiceManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterForServiceManualInstanceEnumeration();
    Linux_SambaPrinterForServiceManualInstanceEnumeration(
      const Linux_SambaPrinterForServiceManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterForServiceManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterForServiceManualInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterForServiceManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterForServiceManualInstance& anInstance);

  };

}

#endif
