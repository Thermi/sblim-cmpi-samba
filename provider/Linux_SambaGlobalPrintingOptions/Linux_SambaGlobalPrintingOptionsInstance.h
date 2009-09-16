// =======================================================================
// Linux_SambaGlobalPrintingOptionsInstance.h
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
#ifndef Linux_SambaGlobalPrintingOptionsInstance_h
#define Linux_SambaGlobalPrintingOptionsInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalPrintingOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalPrintingOptionsInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalPrintingOptionsInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalPrintingOptionsInstanceName m_instanceName;
    const char* m_Caption;
    const char* m_CupsOptions;
    CMPIBoolean m_DefaultDevMode;
    const char* m_Description;
    const char* m_ElementName;
    CMPIUint64 m_MaxPrintjobs;
    CMPIUint64 m_MaxReportedPrintjobs;
    const char* m_PrintCommand;
    CMPIUint64 m_PrintcapCacheTime;
    const char* m_SystemPrinterName;
    CMPIBoolean m_UseClientDriver;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int Caption:1;
      unsigned int CupsOptions:1;
      unsigned int DefaultDevMode:1;
      unsigned int Description:1;
      unsigned int ElementName:1;
      unsigned int MaxPrintjobs:1;
      unsigned int MaxReportedPrintjobs:1;
      unsigned int PrintCommand:1;
      unsigned int PrintcapCacheTime:1;
      unsigned int SystemPrinterName:1;
      unsigned int UseClientDriver:1;

    } isSet;
    
    public:
    Linux_SambaGlobalPrintingOptionsInstance();
    Linux_SambaGlobalPrintingOptionsInstance(
      const Linux_SambaGlobalPrintingOptionsInstance& anInstance);
    Linux_SambaGlobalPrintingOptionsInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalPrintingOptionsInstance();
       
    Linux_SambaGlobalPrintingOptionsInstance& operator=(
      const Linux_SambaGlobalPrintingOptionsInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalPrintingOptionsInstanceName& anInstanceName);        
    const Linux_SambaGlobalPrintingOptionsInstanceName& getInstanceName() const;

    unsigned int isCaptionSet() const;
    void setCaption(const char* aValue, int aCopyFlag = 1);
    const char* getCaption() const;

    unsigned int isCupsOptionsSet() const;
    void setCupsOptions(const char* aValue, int aCopyFlag = 1);
    const char* getCupsOptions() const;

    unsigned int isDefaultDevModeSet() const;
    void setDefaultDevMode(const CMPIBoolean aValue);
    const CMPIBoolean getDefaultDevMode() const;

    unsigned int isDescriptionSet() const;
    void setDescription(const char* aValue, int aCopyFlag = 1);
    const char* getDescription() const;

    unsigned int isElementNameSet() const;
    void setElementName(const char* aValue, int aCopyFlag = 1);
    const char* getElementName() const;

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
  
  struct Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement {

    Linux_SambaGlobalPrintingOptionsInstance* m_elementP;
    Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement();
    ~Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalPrintingOptionsInstanceEnumeration {

    private:
    Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalPrintingOptionsInstanceEnumeration();
    Linux_SambaGlobalPrintingOptionsInstanceEnumeration(
      const Linux_SambaGlobalPrintingOptionsInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalPrintingOptionsInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalPrintingOptionsInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalPrintingOptionsInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalPrintingOptionsInstance& anInstance);

  };

}

#endif
