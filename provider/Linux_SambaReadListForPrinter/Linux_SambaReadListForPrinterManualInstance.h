// =======================================================================
// Linux_SambaReadListForPrinterManualInstance.h
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
#ifndef Linux_SambaReadListForPrinterManualInstance_h
#define Linux_SambaReadListForPrinterManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaReadListForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaReadListForPrinterManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaReadListForPrinterManualInstance& anInstance);
    void reset();
       
    Linux_SambaReadListForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaReadListForPrinterManualInstance();
    Linux_SambaReadListForPrinterManualInstance(
      const Linux_SambaReadListForPrinterManualInstance& anInstance);
    Linux_SambaReadListForPrinterManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaReadListForPrinterManualInstance();
       
    Linux_SambaReadListForPrinterManualInstance& operator=(
      const Linux_SambaReadListForPrinterManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaReadListForPrinterInstanceName& anInstanceName);        
    const Linux_SambaReadListForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaReadListForPrinterManualInstanceEnumerationElement {

    Linux_SambaReadListForPrinterManualInstance* m_elementP;
    Linux_SambaReadListForPrinterManualInstanceEnumerationElement* m_nextP;

    Linux_SambaReadListForPrinterManualInstanceEnumerationElement();
    ~Linux_SambaReadListForPrinterManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaReadListForPrinterManualInstanceEnumeration {

    private:
    Linux_SambaReadListForPrinterManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaReadListForPrinterManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaReadListForPrinterManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaReadListForPrinterManualInstanceEnumeration();
    Linux_SambaReadListForPrinterManualInstanceEnumeration(
      const Linux_SambaReadListForPrinterManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaReadListForPrinterManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaReadListForPrinterManualInstance& getNext();
    int getSize() const;
    const Linux_SambaReadListForPrinterManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaReadListForPrinterManualInstance& anInstance);

  };

}

#endif
