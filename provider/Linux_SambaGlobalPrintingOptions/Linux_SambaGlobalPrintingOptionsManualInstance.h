// =======================================================================
// Linux_SambaGlobalPrintingOptionsManualInstance.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaGlobalPrintingOptionsManualInstance_h
#define Linux_SambaGlobalPrintingOptionsManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalPrintingOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalPrintingOptionsManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalPrintingOptionsManualInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalPrintingOptionsInstanceName m_instanceName;
    const char* m_CupsOptions;
    CMPIBoolean m_DefaultDevMode;
    CMPIUint64 m_MaxPrintjobs;
    CMPIUint64 m_MaxReportedPrintjobs;
    const char* m_PrintCommand;
    CMPIUint64 m_PrintcapCacheTime;
    const char* m_SystemPrinterName;
    CMPIBoolean m_UseClientDriver;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int CupsOptions:1;
      unsigned int DefaultDevMode:1;
      unsigned int MaxPrintjobs:1;
      unsigned int MaxReportedPrintjobs:1;
      unsigned int PrintCommand:1;
      unsigned int PrintcapCacheTime:1;
      unsigned int SystemPrinterName:1;
      unsigned int UseClientDriver:1;

    } isSet;
    
    public:
    Linux_SambaGlobalPrintingOptionsManualInstance();
    Linux_SambaGlobalPrintingOptionsManualInstance(
      const Linux_SambaGlobalPrintingOptionsManualInstance& anInstance);
    Linux_SambaGlobalPrintingOptionsManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalPrintingOptionsManualInstance();
       
    Linux_SambaGlobalPrintingOptionsManualInstance& operator=(
      const Linux_SambaGlobalPrintingOptionsManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalPrintingOptionsInstanceName& anInstanceName);        
    const Linux_SambaGlobalPrintingOptionsInstanceName& getInstanceName() const;

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

    unsigned int isPrintcapCacheTimeSet() const;
    void setPrintcapCacheTime(const CMPIUint64 aValue);
    const CMPIUint64 getPrintcapCacheTime() const;

    unsigned int isSystemPrinterNameSet() const;
    void setSystemPrinterName(const char* aValue, int aCopyFlag = 1);
    const char* getSystemPrinterName() const;

    unsigned int isUseClientDriverSet() const;
    void setUseClientDriver(const CMPIBoolean aValue);
    const CMPIBoolean getUseClientDriver() const;


  };
  
  struct Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement {

    Linux_SambaGlobalPrintingOptionsManualInstance* m_elementP;
    Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement();
    ~Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration {

    private:
    Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration();
    Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration(
      const Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalPrintingOptionsManualInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalPrintingOptionsManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalPrintingOptionsManualInstance& anInstance);

  };

}

#endif
