// =======================================================================
// Linux_SambaSharePrinterBrowseForShareManualInstance.h
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
#ifndef Linux_SambaSharePrinterBrowseForShareManualInstance_h
#define Linux_SambaSharePrinterBrowseForShareManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaSharePrinterBrowseForShareInstanceName.h"


namespace genProvider {

  class Linux_SambaSharePrinterBrowseForShareManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaSharePrinterBrowseForShareManualInstance& anInstance);
    void reset();
       
    Linux_SambaSharePrinterBrowseForShareInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaSharePrinterBrowseForShareManualInstance();
    Linux_SambaSharePrinterBrowseForShareManualInstance(
      const Linux_SambaSharePrinterBrowseForShareManualInstance& anInstance);
    Linux_SambaSharePrinterBrowseForShareManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaSharePrinterBrowseForShareManualInstance();
       
    Linux_SambaSharePrinterBrowseForShareManualInstance& operator=(
      const Linux_SambaSharePrinterBrowseForShareManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaSharePrinterBrowseForShareInstanceName& anInstanceName);        
    const Linux_SambaSharePrinterBrowseForShareInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement {

    Linux_SambaSharePrinterBrowseForShareManualInstance* m_elementP;
    Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement* m_nextP;

    Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement();
    ~Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration {

    private:
    Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration();
    Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration(
      const Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaSharePrinterBrowseForShareManualInstance& getNext();
    int getSize() const;
    const Linux_SambaSharePrinterBrowseForShareManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaSharePrinterBrowseForShareManualInstance& anInstance);

  };

}

#endif
