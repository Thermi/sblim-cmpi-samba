// =======================================================================
// Linux_SambaWriteListForPrinterManualInstance.h
//     created on Fri, 24 Feb 2006 using ECUTE
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
//                Rodrigo Ceron    <rceron@br.ibm.com>
//                Wolfgang Taphorn <taphorn@de.ibm.com>
//
// =======================================================================
//
// 
#ifndef Linux_SambaWriteListForPrinterManualInstance_h
#define Linux_SambaWriteListForPrinterManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaWriteListForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaWriteListForPrinterManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaWriteListForPrinterManualInstance& anInstance);
    void reset();
       
    Linux_SambaWriteListForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaWriteListForPrinterManualInstance();
    Linux_SambaWriteListForPrinterManualInstance(
      const Linux_SambaWriteListForPrinterManualInstance& anInstance);
    Linux_SambaWriteListForPrinterManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaWriteListForPrinterManualInstance();
       
    Linux_SambaWriteListForPrinterManualInstance& operator=(
      const Linux_SambaWriteListForPrinterManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaWriteListForPrinterInstanceName& anInstanceName);        
    const Linux_SambaWriteListForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaWriteListForPrinterManualInstanceEnumerationElement {

    Linux_SambaWriteListForPrinterManualInstance* m_elementP;
    Linux_SambaWriteListForPrinterManualInstanceEnumerationElement* m_nextP;

    Linux_SambaWriteListForPrinterManualInstanceEnumerationElement();
    ~Linux_SambaWriteListForPrinterManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaWriteListForPrinterManualInstanceEnumeration {

    private:
    Linux_SambaWriteListForPrinterManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaWriteListForPrinterManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaWriteListForPrinterManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaWriteListForPrinterManualInstanceEnumeration();
    Linux_SambaWriteListForPrinterManualInstanceEnumeration(
      const Linux_SambaWriteListForPrinterManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaWriteListForPrinterManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaWriteListForPrinterManualInstance& getNext();
    int getSize() const;
    const Linux_SambaWriteListForPrinterManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaWriteListForPrinterManualInstance& anInstance);

  };

}

#endif
