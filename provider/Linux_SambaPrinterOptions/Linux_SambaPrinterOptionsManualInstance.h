// =======================================================================
// Linux_SambaPrinterOptionsManualInstance.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaPrinterOptionsManualInstance_h
#define Linux_SambaPrinterOptionsManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterOptionsManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterOptionsManualInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterOptionsInstanceName m_instanceName;
    CMPIBoolean m_Available;
    const char* m_Comment;
    const char* m_Path;
    CMPIBoolean m_Printable;
    const char* m_SystemPrinterName;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int Available:1;
      unsigned int Comment:1;
      unsigned int Path:1;
      unsigned int Printable:1;
      unsigned int SystemPrinterName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterOptionsManualInstance();
    Linux_SambaPrinterOptionsManualInstance(
      const Linux_SambaPrinterOptionsManualInstance& anInstance);
    Linux_SambaPrinterOptionsManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterOptionsManualInstance();
       
    Linux_SambaPrinterOptionsManualInstance& operator=(
      const Linux_SambaPrinterOptionsManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterOptionsInstanceName& anInstanceName);        
    const Linux_SambaPrinterOptionsInstanceName& getInstanceName() const;

    unsigned int isAvailableSet() const;
    void setAvailable(const CMPIBoolean aValue);
    const CMPIBoolean getAvailable() const;

    unsigned int isCommentSet() const;
    void setComment(const char* aValue, int aCopyFlag = 1);
    const char* getComment() const;

    unsigned int isPathSet() const;
    void setPath(const char* aValue, int aCopyFlag = 1);
    const char* getPath() const;

    unsigned int isPrintableSet() const;
    void setPrintable(const CMPIBoolean aValue);
    const CMPIBoolean getPrintable() const;

    unsigned int isSystemPrinterNameSet() const;
    void setSystemPrinterName(const char* aValue, int aCopyFlag = 1);
    const char* getSystemPrinterName() const;


  };
  
  struct Linux_SambaPrinterOptionsManualInstanceEnumerationElement {

    Linux_SambaPrinterOptionsManualInstance* m_elementP;
    Linux_SambaPrinterOptionsManualInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterOptionsManualInstanceEnumerationElement();
    ~Linux_SambaPrinterOptionsManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterOptionsManualInstanceEnumeration {

    private:
    Linux_SambaPrinterOptionsManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterOptionsManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterOptionsManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterOptionsManualInstanceEnumeration();
    Linux_SambaPrinterOptionsManualInstanceEnumeration(
      const Linux_SambaPrinterOptionsManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterOptionsManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterOptionsManualInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterOptionsManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterOptionsManualInstance& anInstance);

  };

}

#endif
