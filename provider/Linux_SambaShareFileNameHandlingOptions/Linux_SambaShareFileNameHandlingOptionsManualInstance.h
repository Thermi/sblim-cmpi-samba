// =======================================================================
// Linux_SambaShareFileNameHandlingOptionsManualInstance.h
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
#ifndef Linux_SambaShareFileNameHandlingOptionsManualInstance_h
#define Linux_SambaShareFileNameHandlingOptionsManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareFileNameHandlingOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaShareFileNameHandlingOptionsManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareFileNameHandlingOptionsManualInstance& anInstance);
    void reset();
       
    Linux_SambaShareFileNameHandlingOptionsInstanceName m_instanceName;
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
    Linux_SambaShareFileNameHandlingOptionsManualInstance();
    Linux_SambaShareFileNameHandlingOptionsManualInstance(
      const Linux_SambaShareFileNameHandlingOptionsManualInstance& anInstance);
    Linux_SambaShareFileNameHandlingOptionsManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareFileNameHandlingOptionsManualInstance();
       
    Linux_SambaShareFileNameHandlingOptionsManualInstance& operator=(
      const Linux_SambaShareFileNameHandlingOptionsManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareFileNameHandlingOptionsInstanceName& anInstanceName);        
    const Linux_SambaShareFileNameHandlingOptionsInstanceName& getInstanceName() const;

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
  
  struct Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement {

    Linux_SambaShareFileNameHandlingOptionsManualInstance* m_elementP;
    Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement* m_nextP;

    Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement();
    ~Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration {

    private:
    Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration();
    Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration(
      const Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareFileNameHandlingOptionsManualInstance& getNext();
    int getSize() const;
    const Linux_SambaShareFileNameHandlingOptionsManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareFileNameHandlingOptionsManualInstance& anInstance);

  };

}

#endif
