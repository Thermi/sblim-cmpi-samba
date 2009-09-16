// =======================================================================
// Linux_SambaPrinterPrintingOptionsManualInstance.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaPrinterPrintingOptionsManualInstance_h
#define Linux_SambaPrinterPrintingOptionsManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterPrintingOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterPrintingOptionsManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterPrintingOptionsManualInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterPrintingOptionsInstanceName m_instanceName;
    const char* m_CupsOptions;
    CMPIBoolean m_DefaultDevMode;
    CMPIUint64 m_MaxPrintjobs;
    CMPIUint64 m_MaxReportedPrintjobs;
    const char* m_PrintCommand;
    CMPIBoolean m_UseClientDriver;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int CupsOptions:1;
      unsigned int DefaultDevMode:1;
      unsigned int MaxPrintjobs:1;
      unsigned int MaxReportedPrintjobs:1;
      unsigned int PrintCommand:1;
      unsigned int UseClientDriver:1;

    } isSet;
    
    public:
    Linux_SambaPrinterPrintingOptionsManualInstance();
    Linux_SambaPrinterPrintingOptionsManualInstance(
      const Linux_SambaPrinterPrintingOptionsManualInstance& anInstance);
    Linux_SambaPrinterPrintingOptionsManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterPrintingOptionsManualInstance();
       
    Linux_SambaPrinterPrintingOptionsManualInstance& operator=(
      const Linux_SambaPrinterPrintingOptionsManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterPrintingOptionsInstanceName& anInstanceName);        
    const Linux_SambaPrinterPrintingOptionsInstanceName& getInstanceName() const;

    unsigned int isCupsOptionsSet() const;
    void setCupsOptions(const char* aValue, int aCopyFlag = 1);
    const char* getCupsOptions() const;

    unsigned int isDefaultDevModeSet() const;
    void setDefaultDevMode(const CMPIBoolean aValue);
    const CMPIBoolean getDefaultDevMode() const;

    unsigned int isMaxPrintjobsSet() const;
    void setMaxPrintjobs(const CMPIUint64 aValue);
    const CMPIUint64 getMaxPrintjobs() const;

    unsigned int isMaxReportedPrintjobsSet() const;
    void setMaxReportedPrintjobs(const CMPIUint64 aValue);
    const CMPIUint64 getMaxReportedPrintjobs() const;

    unsigned int isPrintCommandSet() const;
    void setPrintCommand(const char* aValue, int aCopyFlag = 1);
    const char* getPrintCommand() const;

    unsigned int isUseClientDriverSet() const;
    void setUseClientDriver(const CMPIBoolean aValue);
    const CMPIBoolean getUseClientDriver() const;


  };
  
  struct Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement {

    Linux_SambaPrinterPrintingOptionsManualInstance* m_elementP;
    Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement();
    ~Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration {

    private:
    Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration();
    Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration(
      const Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterPrintingOptionsManualInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterPrintingOptionsManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterPrintingOptionsManualInstance& anInstance);

  };

}

#endif
