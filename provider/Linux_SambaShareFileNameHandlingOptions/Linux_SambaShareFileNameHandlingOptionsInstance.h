// =======================================================================
// Linux_SambaShareFileNameHandlingOptionsInstance.h
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
#ifndef Linux_SambaShareFileNameHandlingOptionsInstance_h
#define Linux_SambaShareFileNameHandlingOptionsInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareFileNameHandlingOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaShareFileNameHandlingOptionsInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareFileNameHandlingOptionsInstance& anInstance);
    void reset();
       
    Linux_SambaShareFileNameHandlingOptionsInstanceName m_instanceName;
    const char* m_Caption;
    CMPIBoolean m_CaseSensitive;
    const char* m_Description;
    CMPIBoolean m_DosFiletimes;
    const char* m_ElementName;
    CMPIBoolean m_HideDotFiles;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int Caption:1;
      unsigned int CaseSensitive:1;
      unsigned int Description:1;
      unsigned int DosFiletimes:1;
      unsigned int ElementName:1;
      unsigned int HideDotFiles:1;

    } isSet;
    
    public:
    Linux_SambaShareFileNameHandlingOptionsInstance();
    Linux_SambaShareFileNameHandlingOptionsInstance(
      const Linux_SambaShareFileNameHandlingOptionsInstance& anInstance);
    Linux_SambaShareFileNameHandlingOptionsInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareFileNameHandlingOptionsInstance();
       
    Linux_SambaShareFileNameHandlingOptionsInstance& operator=(
      const Linux_SambaShareFileNameHandlingOptionsInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareFileNameHandlingOptionsInstanceName& anInstanceName);        
    const Linux_SambaShareFileNameHandlingOptionsInstanceName& getInstanceName() const;

    unsigned int isCaptionSet() const;
    void setCaption(const char* aValue, int aCopyFlag = 1);
    const char* getCaption() const;

    unsigned int isCaseSensitiveSet() const;
    void setCaseSensitive(const CMPIBoolean aValue);
    const CMPIBoolean getCaseSensitive() const;

    unsigned int isDescriptionSet() const;
    void setDescription(const char* aValue, int aCopyFlag = 1);
    const char* getDescription() const;

    unsigned int isDosFiletimesSet() const;
    void setDosFiletimes(const CMPIBoolean aValue);
    const CMPIBoolean getDosFiletimes() const;

    unsigned int isElementNameSet() const;
    void setElementName(const char* aValue, int aCopyFlag = 1);
    const char* getElementName() const;

    unsigned int isHideDotFilesSet() const;
    void setHideDotFiles(const CMPIBoolean aValue);
    const CMPIBoolean getHideDotFiles() const;


  };
  
  struct Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement {

    Linux_SambaShareFileNameHandlingOptionsInstance* m_elementP;
    Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement* m_nextP;

    Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement();
    ~Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration {

    private:
    Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration();
    Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration(
      const Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareFileNameHandlingOptionsInstance& getNext();
    int getSize() const;
    const Linux_SambaShareFileNameHandlingOptionsInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareFileNameHandlingOptionsInstance& anInstance);

  };

}

#endif
