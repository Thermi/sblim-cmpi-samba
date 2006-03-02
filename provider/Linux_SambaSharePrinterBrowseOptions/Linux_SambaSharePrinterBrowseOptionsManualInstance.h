// =======================================================================
// Linux_SambaSharePrinterBrowseOptionsManualInstance.h
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
#ifndef Linux_SambaSharePrinterBrowseOptionsManualInstance_h
#define Linux_SambaSharePrinterBrowseOptionsManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaSharePrinterBrowseOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaSharePrinterBrowseOptionsManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaSharePrinterBrowseOptionsManualInstance& anInstance);
    void reset();
       
    Linux_SambaSharePrinterBrowseOptionsInstanceName m_instanceName;
    CMPIBoolean m_Browsable;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int Browsable:1;

    } isSet;
    
    public:
    Linux_SambaSharePrinterBrowseOptionsManualInstance();
    Linux_SambaSharePrinterBrowseOptionsManualInstance(
      const Linux_SambaSharePrinterBrowseOptionsManualInstance& anInstance);
    Linux_SambaSharePrinterBrowseOptionsManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaSharePrinterBrowseOptionsManualInstance();
       
    Linux_SambaSharePrinterBrowseOptionsManualInstance& operator=(
      const Linux_SambaSharePrinterBrowseOptionsManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaSharePrinterBrowseOptionsInstanceName& anInstanceName);        
    const Linux_SambaSharePrinterBrowseOptionsInstanceName& getInstanceName() const;

    unsigned int isBrowsableSet() const;
    void setBrowsable(const CMPIBoolean aValue);
    const CMPIBoolean getBrowsable() const;


  };
  
  struct Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement {

    Linux_SambaSharePrinterBrowseOptionsManualInstance* m_elementP;
    Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement* m_nextP;

    Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement();
    ~Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration {

    private:
    Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration();
    Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration(
      const Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaSharePrinterBrowseOptionsManualInstance& getNext();
    int getSize() const;
    const Linux_SambaSharePrinterBrowseOptionsManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaSharePrinterBrowseOptionsManualInstance& anInstance);

  };

}

#endif
