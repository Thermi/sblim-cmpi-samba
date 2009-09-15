// =======================================================================
// Linux_SambaCommonSecurityForPrinterManualInstance.h
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
#ifndef Linux_SambaCommonSecurityForPrinterManualInstance_h
#define Linux_SambaCommonSecurityForPrinterManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaCommonSecurityForPrinterManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaCommonSecurityForPrinterManualInstance& anInstance);
    void reset();
       
    Linux_SambaCommonSecurityForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaCommonSecurityForPrinterManualInstance();
    Linux_SambaCommonSecurityForPrinterManualInstance(
      const Linux_SambaCommonSecurityForPrinterManualInstance& anInstance);
    Linux_SambaCommonSecurityForPrinterManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaCommonSecurityForPrinterManualInstance();
       
    Linux_SambaCommonSecurityForPrinterManualInstance& operator=(
      const Linux_SambaCommonSecurityForPrinterManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaCommonSecurityForPrinterInstanceName& anInstanceName);        
    const Linux_SambaCommonSecurityForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement {

    Linux_SambaCommonSecurityForPrinterManualInstance* m_elementP;
    Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement* m_nextP;

    Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement();
    ~Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration {

    private:
    Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration();
    Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration(
      const Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaCommonSecurityForPrinterManualInstance& getNext();
    int getSize() const;
    const Linux_SambaCommonSecurityForPrinterManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaCommonSecurityForPrinterManualInstance& anInstance);

  };

}

#endif
