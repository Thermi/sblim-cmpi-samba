// =======================================================================
// Linux_SambaWriteListForPrinterInstance.h
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
#ifndef Linux_SambaWriteListForPrinterInstance_h
#define Linux_SambaWriteListForPrinterInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaWriteListForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaWriteListForPrinterInstance {
       
    private:
    void init();
    void init(const Linux_SambaWriteListForPrinterInstance& anInstance);
    void reset();
       
    Linux_SambaWriteListForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaWriteListForPrinterInstance();
    Linux_SambaWriteListForPrinterInstance(
      const Linux_SambaWriteListForPrinterInstance& anInstance);
    Linux_SambaWriteListForPrinterInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaWriteListForPrinterInstance();
       
    Linux_SambaWriteListForPrinterInstance& operator=(
      const Linux_SambaWriteListForPrinterInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaWriteListForPrinterInstanceName& anInstanceName);        
    const Linux_SambaWriteListForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaWriteListForPrinterInstanceEnumerationElement {

    Linux_SambaWriteListForPrinterInstance* m_elementP;
    Linux_SambaWriteListForPrinterInstanceEnumerationElement* m_nextP;

    Linux_SambaWriteListForPrinterInstanceEnumerationElement();
    ~Linux_SambaWriteListForPrinterInstanceEnumerationElement();  

  };
  

  class Linux_SambaWriteListForPrinterInstanceEnumeration {

    private:
    Linux_SambaWriteListForPrinterInstanceEnumerationElement* m_firstElementP;
    Linux_SambaWriteListForPrinterInstanceEnumerationElement* m_currentElementP;
    Linux_SambaWriteListForPrinterInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaWriteListForPrinterInstanceEnumeration();
    Linux_SambaWriteListForPrinterInstanceEnumeration(
      const Linux_SambaWriteListForPrinterInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaWriteListForPrinterInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaWriteListForPrinterInstance& getNext();
    int getSize() const;
    const Linux_SambaWriteListForPrinterInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaWriteListForPrinterInstance& anInstance);

  };

}

#endif
