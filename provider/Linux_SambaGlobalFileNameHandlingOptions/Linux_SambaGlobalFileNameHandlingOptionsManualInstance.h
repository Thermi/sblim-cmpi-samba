// =======================================================================
// Linux_SambaGlobalFileNameHandlingOptionsManualInstance.h
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
#ifndef Linux_SambaGlobalFileNameHandlingOptionsManualInstance_h
#define Linux_SambaGlobalFileNameHandlingOptionsManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalFileNameHandlingOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalFileNameHandlingOptionsManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalFileNameHandlingOptionsInstanceName m_instanceName;
    CMPIBoolean m_CaseSensitive;
    CMPIBoolean m_DosFiletimes;
    CMPIBoolean m_HideDotFiles;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int CaseSensitive:1;
      unsigned int DosFiletimes:1;
      unsigned int HideDotFiles:1;

    } isSet;
    
    public:
    Linux_SambaGlobalFileNameHandlingOptionsManualInstance();
    Linux_SambaGlobalFileNameHandlingOptionsManualInstance(
      const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& anInstance);
    Linux_SambaGlobalFileNameHandlingOptionsManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalFileNameHandlingOptionsManualInstance();
       
    Linux_SambaGlobalFileNameHandlingOptionsManualInstance& operator=(
      const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& anInstanceName);        
    const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& getInstanceName() const;

    unsigned int isCaseSensitiveSet() const;
    void setCaseSensitive(const CMPIBoolean aValue);
    const CMPIBoolean getCaseSensitive() const;

    unsigned int isDosFiletimesSet() const;
    void setDosFiletimes(const CMPIBoolean aValue);
    const CMPIBoolean getDosFiletimes() const;

    unsigned int isHideDotFilesSet() const;
    void setHideDotFiles(const CMPIBoolean aValue);
    const CMPIBoolean getHideDotFiles() const;


  };
  
  struct Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement {

    Linux_SambaGlobalFileNameHandlingOptionsManualInstance* m_elementP;
    Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement();
    ~Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration {

    private:
    Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration();
    Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration(
      const Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& anInstance);

  };

}

#endif
