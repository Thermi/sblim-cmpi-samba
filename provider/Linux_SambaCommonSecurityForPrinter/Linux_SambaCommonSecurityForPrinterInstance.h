// =======================================================================
// Linux_SambaCommonSecurityForPrinterInstance.h
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
#ifndef Linux_SambaCommonSecurityForPrinterInstance_h
#define Linux_SambaCommonSecurityForPrinterInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaCommonSecurityForPrinterInstance {
       
    private:
    void init();
    void init(const Linux_SambaCommonSecurityForPrinterInstance& anInstance);
    void reset();
       
    Linux_SambaCommonSecurityForPrinterInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaCommonSecurityForPrinterInstance();
    Linux_SambaCommonSecurityForPrinterInstance(
      const Linux_SambaCommonSecurityForPrinterInstance& anInstance);
    Linux_SambaCommonSecurityForPrinterInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaCommonSecurityForPrinterInstance();
       
    Linux_SambaCommonSecurityForPrinterInstance& operator=(
      const Linux_SambaCommonSecurityForPrinterInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaCommonSecurityForPrinterInstanceName& anInstanceName);        
    const Linux_SambaCommonSecurityForPrinterInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaCommonSecurityForPrinterInstanceEnumerationElement {

    Linux_SambaCommonSecurityForPrinterInstance* m_elementP;
    Linux_SambaCommonSecurityForPrinterInstanceEnumerationElement* m_nextP;

    Linux_SambaCommonSecurityForPrinterInstanceEnumerationElement();
    ~Linux_SambaCommonSecurityForPrinterInstanceEnumerationElement();  

  };
  

  class Linux_SambaCommonSecurityForPrinterInstanceEnumeration {

    private:
    Linux_SambaCommonSecurityForPrinterInstanceEnumerationElement* m_firstElementP;
    Linux_SambaCommonSecurityForPrinterInstanceEnumerationElement* m_currentElementP;
    Linux_SambaCommonSecurityForPrinterInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaCommonSecurityForPrinterInstanceEnumeration();
    Linux_SambaCommonSecurityForPrinterInstanceEnumeration(
      const Linux_SambaCommonSecurityForPrinterInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaCommonSecurityForPrinterInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaCommonSecurityForPrinterInstance& getNext();
    int getSize() const;
    const Linux_SambaCommonSecurityForPrinterInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaCommonSecurityForPrinterInstance& anInstance);

  };

}

#endif
