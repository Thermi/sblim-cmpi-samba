// =======================================================================
// Linux_SambaShareOptionsManualInstance.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaShareOptionsManualInstance_h
#define Linux_SambaShareOptionsManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaShareOptionsManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareOptionsManualInstance& anInstance);
    void reset();
       
    Linux_SambaShareOptionsInstanceName m_instanceName;
    CMPIBoolean m_Available;
    const char* m_Comment;
    const char* m_Path;
    CMPIBoolean m_Printable;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int Available:1;
      unsigned int Comment:1;
      unsigned int Path:1;
      unsigned int Printable:1;

    } isSet;
    
    public:
    Linux_SambaShareOptionsManualInstance();
    Linux_SambaShareOptionsManualInstance(
      const Linux_SambaShareOptionsManualInstance& anInstance);
    Linux_SambaShareOptionsManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareOptionsManualInstance();
       
    Linux_SambaShareOptionsManualInstance& operator=(
      const Linux_SambaShareOptionsManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareOptionsInstanceName& anInstanceName);        
    const Linux_SambaShareOptionsInstanceName& getInstanceName() const;

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


  };
  
  struct Linux_SambaShareOptionsManualInstanceEnumerationElement {

    Linux_SambaShareOptionsManualInstance* m_elementP;
    Linux_SambaShareOptionsManualInstanceEnumerationElement* m_nextP;

    Linux_SambaShareOptionsManualInstanceEnumerationElement();
    ~Linux_SambaShareOptionsManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareOptionsManualInstanceEnumeration {

    private:
    Linux_SambaShareOptionsManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareOptionsManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareOptionsManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareOptionsManualInstanceEnumeration();
    Linux_SambaShareOptionsManualInstanceEnumeration(
      const Linux_SambaShareOptionsManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareOptionsManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareOptionsManualInstance& getNext();
    int getSize() const;
    const Linux_SambaShareOptionsManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareOptionsManualInstance& anInstance);

  };

}

#endif
