// =======================================================================
// Linux_SambaReadListForPrinterInstance.h
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
#ifndef Linux_SambaReadListForPrinterInstance_h
#define Linux_SambaReadListForPrinterInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaReadListForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaReadListForPrinterInstance {
       
    private:
    void init();
    void init(const Linux_SambaReadListForPrinterInstance& anInstance);
    void reset();
       
    Linux_SambaReadListForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaReadListForPrinterInstance();
    Linux_SambaReadListForPrinterInstance(
      const Linux_SambaReadListForPrinterInstance& anInstance);
    Linux_SambaReadListForPrinterInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaReadListForPrinterInstance();
       
    Linux_SambaReadListForPrinterInstance& operator=(
      const Linux_SambaReadListForPrinterInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaReadListForPrinterInstanceName& anInstanceName);        
    const Linux_SambaReadListForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaReadListForPrinterInstanceEnumerationElement {

    Linux_SambaReadListForPrinterInstance* m_elementP;
    Linux_SambaReadListForPrinterInstanceEnumerationElement* m_nextP;

    Linux_SambaReadListForPrinterInstanceEnumerationElement();
    ~Linux_SambaReadListForPrinterInstanceEnumerationElement();  

  };
  

  class Linux_SambaReadListForPrinterInstanceEnumeration {

    private:
    Linux_SambaReadListForPrinterInstanceEnumerationElement* m_firstElementP;
    Linux_SambaReadListForPrinterInstanceEnumerationElement* m_currentElementP;
    Linux_SambaReadListForPrinterInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaReadListForPrinterInstanceEnumeration();
    Linux_SambaReadListForPrinterInstanceEnumeration(
      const Linux_SambaReadListForPrinterInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaReadListForPrinterInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaReadListForPrinterInstance& getNext();
    int getSize() const;
    const Linux_SambaReadListForPrinterInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaReadListForPrinterInstance& anInstance);

  };

}

#endif
