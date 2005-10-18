/**
 *  Linux_SambaShareSecurityOptionsInstance.h
 * 
 * (C) Copyright IBM Corp. 2005
 *
 * THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
 * ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
 * CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
 *
 * You can obtain a current copy of the Common Public License from
 * http://www.opensource.org/licenses/cpl1.0.php
 *
 * Author:     Rodrigo Ceron <rceron@br.ibm.com>
 *
 * Contributors:
 *
 */


#ifndef Linux_SambaShareSecurityOptionsInstance_h
#define Linux_SambaShareSecurityOptionsInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareSecurityOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaShareSecurityOptionsInstance {
  public:
       Linux_SambaShareSecurityOptionsInstance();
  	
       Linux_SambaShareSecurityOptionsInstance
  	    (const Linux_SambaShareSecurityOptionsInstance& original);
  	   
       Linux_SambaShareSecurityOptionsInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareSecurityOptionsInstance();
       
       Linux_SambaShareSecurityOptionsInstance& operator=
  	    (const Linux_SambaShareSecurityOptionsInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareSecurityOptionsInstanceName& val);        
       const Linux_SambaShareSecurityOptionsInstanceName&
        getInstanceName() const;

       unsigned int isCaptionSet() const;
       void setCaption(const char* val, int makeCopy = 1);
       const char* getCaption() const;

       unsigned int isCreateMaskSet() const;
       void setCreateMask(const CMPIUint16 val);
       const CMPIUint16 getCreateMask() const;

       unsigned int isDescriptionSet() const;
       void setDescription(const char* val, int makeCopy = 1);
       const char* getDescription() const;

       unsigned int isDirectoryMaskSet() const;
       void setDirectoryMask(const CMPIUint16 val);
       const CMPIUint16 getDirectoryMask() const;

       unsigned int isDirectorySecurityMaskSet() const;
       void setDirectorySecurityMask(const CMPIUint16 val);
       const CMPIUint16 getDirectorySecurityMask() const;

       unsigned int isElementNameSet() const;
       void setElementName(const char* val, int makeCopy = 1);
       const char* getElementName() const;
       
  private:
       void init();
       void init(const Linux_SambaShareSecurityOptionsInstance& original);
       void reset();
       
       Linux_SambaShareSecurityOptionsInstanceName m_instanceName;
       const char* m_Caption;
       CMPIUint16 m_CreateMask;
       const char* m_Description;
       CMPIUint16 m_DirectoryMask;
       CMPIUint16 m_DirectorySecurityMask;
       const char* m_ElementName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int Caption:1;
         unsigned int CreateMask:1;
         unsigned int Description:1;
         unsigned int DirectoryMask:1;
         unsigned int DirectorySecurityMask:1;
         unsigned int ElementName:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareSecurityOptionsInstanceEnumerationElement{
  	Linux_SambaShareSecurityOptionsInstance* m_elementP;
  	Linux_SambaShareSecurityOptionsInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareSecurityOptionsInstanceEnumerationElement();
  	~Linux_SambaShareSecurityOptionsInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareSecurityOptionsInstanceEnumeration {
  	private:
  	  Linux_SambaShareSecurityOptionsInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareSecurityOptionsInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareSecurityOptionsInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareSecurityOptionsInstanceEnumeration();
  	  
  	  Linux_SambaShareSecurityOptionsInstanceEnumeration(
  	   const Linux_SambaShareSecurityOptionsInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareSecurityOptionsInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareSecurityOptionsInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareSecurityOptionsInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareSecurityOptionsInstance& elementP);
  };
}
#endif

