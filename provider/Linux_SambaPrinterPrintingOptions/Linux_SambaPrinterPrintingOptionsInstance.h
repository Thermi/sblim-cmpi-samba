// =======================================================================
// Linux_SambaPrinterPrintingOptionsInstance.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaPrinterPrintingOptionsInstance_h
#define Linux_SambaPrinterPrintingOptionsInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterPrintingOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterPrintingOptionsInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterPrintingOptionsInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterPrintingOptionsInstanceName m_instanceName;
    const char* m_Caption;
    const char* m_CupsOptions;
    CMPIBoolean m_DefaultDevMode;
    const char* m_Description;
    const char* m_ElementName;
    CMPIUint64 m_MaxPrintjobs;
    CMPIUint64 m_MaxReportedPrintjobs;
    const char* m_PrintCommand;
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
      unsigned int UseClientDriver:1;

    } isSet;
    
    public:
    Linux_SambaPrinterPrintingOptionsInstance();
    Linux_SambaPrinterPrintingOptionsInstance(
      const Linux_SambaPrinterPrintingOptionsInstance& anInstance);
    Linux_SambaPrinterPrintingOptionsInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterPrintingOptionsInstance();
       
    Linux_SambaPrinterPrintingOptionsInstance& operator=(
      const Linux_SambaPrinterPrintingOptionsInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterPrintingOptionsInstanceName& anInstanceName);        
    const Linux_SambaPrinterPrintingOptionsInstanceName& getInstanceName() const;

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

    unsigned int isUseClientDriverSet() const;
    void setUseClientDriver(const CMPIBoolean aValue);
    const CMPIBoolean getUseClientDriver() const;


  };
  
  struct Linux_SambaPrinterPrintingOptionsInstanceEnumerationElement {

    Linux_SambaPrinterPrintingOptionsInstance* m_elementP;
    Linux_SambaPrinterPrintingOptionsInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterPrintingOptionsInstanceEnumerationElement();
    ~Linux_SambaPrinterPrintingOptionsInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterPrintingOptionsInstanceEnumeration {

    private:
    Linux_SambaPrinterPrintingOptionsInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterPrintingOptionsInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterPrintingOptionsInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterPrintingOptionsInstanceEnumeration();
    Linux_SambaPrinterPrintingOptionsInstanceEnumeration(
      const Linux_SambaPrinterPrintingOptionsInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterPrintingOptionsInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterPrintingOptionsInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterPrintingOptionsInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterPrintingOptionsInstance& anInstance);

  };

}

#endif
