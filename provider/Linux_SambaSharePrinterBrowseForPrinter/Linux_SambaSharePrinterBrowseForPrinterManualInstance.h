// =======================================================================
// Linux_SambaSharePrinterBrowseForPrinterManualInstance.h
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
#ifndef Linux_SambaSharePrinterBrowseForPrinterManualInstance_h
#define Linux_SambaSharePrinterBrowseForPrinterManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaSharePrinterBrowseForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaSharePrinterBrowseForPrinterManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaSharePrinterBrowseForPrinterManualInstance& anInstance);
    void reset();
       
    Linux_SambaSharePrinterBrowseForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaSharePrinterBrowseForPrinterManualInstance();
    Linux_SambaSharePrinterBrowseForPrinterManualInstance(
      const Linux_SambaSharePrinterBrowseForPrinterManualInstance& anInstance);
    Linux_SambaSharePrinterBrowseForPrinterManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaSharePrinterBrowseForPrinterManualInstance();
       
    Linux_SambaSharePrinterBrowseForPrinterManualInstance& operator=(
      const Linux_SambaSharePrinterBrowseForPrinterManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaSharePrinterBrowseForPrinterInstanceName& anInstanceName);        
    const Linux_SambaSharePrinterBrowseForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement {

    Linux_SambaSharePrinterBrowseForPrinterManualInstance* m_elementP;
    Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement* m_nextP;

    Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement();
    ~Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration {

    private:
    Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration();
    Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration(
      const Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaSharePrinterBrowseForPrinterManualInstance& getNext();
    int getSize() const;
    const Linux_SambaSharePrinterBrowseForPrinterManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaSharePrinterBrowseForPrinterManualInstance& anInstance);

  };

}

#endif
