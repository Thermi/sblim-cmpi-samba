// =======================================================================
// Linux_SambaShareOptionsInstance.h
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
#ifndef Linux_SambaShareOptionsInstance_h
#define Linux_SambaShareOptionsInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaShareOptionsInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareOptionsInstance& anInstance);
    void reset();
       
    Linux_SambaShareOptionsInstanceName m_instanceName;
    CMPIBoolean m_Available;
    const char* m_Caption;
    const char* m_Comment;
    const char* m_Description;
    const char* m_ElementName;
    const char* m_Path;
    CMPIBoolean m_Printable;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int Available:1;
      unsigned int Caption:1;
      unsigned int Comment:1;
      unsigned int Description:1;
      unsigned int ElementName:1;
      unsigned int Path:1;
      unsigned int Printable:1;

    } isSet;
    
    public:
    Linux_SambaShareOptionsInstance();
    Linux_SambaShareOptionsInstance(
      const Linux_SambaShareOptionsInstance& anInstance);
    Linux_SambaShareOptionsInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareOptionsInstance();
       
    Linux_SambaShareOptionsInstance& operator=(
      const Linux_SambaShareOptionsInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareOptionsInstanceName& anInstanceName);        
    const Linux_SambaShareOptionsInstanceName& getInstanceName() const;

    unsigned int isAvailableSet() const;
    void setAvailable(const CMPIBoolean aValue);
    const CMPIBoolean getAvailable() const;

    unsigned int isCaptionSet() const;
    void setCaption(const char* aValue, int aCopyFlag = 1);
    const char* getCaption() const;

    unsigned int isCommentSet() const;
    void setComment(const char* aValue, int aCopyFlag = 1);
    const char* getComment() const;

    unsigned int isDescriptionSet() const;
    void setDescription(const char* aValue, int aCopyFlag = 1);
    const char* getDescription() const;

    unsigned int isElementNameSet() const;
    void setElementName(const char* aValue, int aCopyFlag = 1);
    const char* getElementName() const;

    unsigned int isPathSet() const;
    void setPath(const char* aValue, int aCopyFlag = 1);
    const char* getPath() const;

    unsigned int isPrintableSet() const;
    void setPrintable(const CMPIBoolean aValue);
    const CMPIBoolean getPrintable() const;


  };
  
  struct Linux_SambaShareOptionsInstanceEnumerationElement {

    Linux_SambaShareOptionsInstance* m_elementP;
    Linux_SambaShareOptionsInstanceEnumerationElement* m_nextP;

    Linux_SambaShareOptionsInstanceEnumerationElement();
    ~Linux_SambaShareOptionsInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareOptionsInstanceEnumeration {

    private:
    Linux_SambaShareOptionsInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareOptionsInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareOptionsInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareOptionsInstanceEnumeration();
    Linux_SambaShareOptionsInstanceEnumeration(
      const Linux_SambaShareOptionsInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareOptionsInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareOptionsInstance& getNext();
    int getSize() const;
    const Linux_SambaShareOptionsInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareOptionsInstance& anInstance);

  };

}

#endif
