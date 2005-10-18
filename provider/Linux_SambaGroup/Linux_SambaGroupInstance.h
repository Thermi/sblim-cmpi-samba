/**
 *  Linux_SambaGroupInstance.h
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


#ifndef Linux_SambaGroupInstance_h
#define Linux_SambaGroupInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGroupInstanceName.h"

namespace genProvider {

  class Linux_SambaGroupInstance {
  public:
       Linux_SambaGroupInstance();
  	
       Linux_SambaGroupInstance
  	    (const Linux_SambaGroupInstance& original);
  	   
       Linux_SambaGroupInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGroupInstance();
       
       Linux_SambaGroupInstance& operator=
  	    (const Linux_SambaGroupInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGroupInstanceName& val);        
       const Linux_SambaGroupInstanceName&
        getInstanceName() const;

       unsigned int isCaptionSet() const;
       void setCaption(const char* val, int makeCopy = 1);
       const char* getCaption() const;

       unsigned int isDescriptionSet() const;
       void setDescription(const char* val, int makeCopy = 1);
       const char* getDescription() const;

       unsigned int isElementNameSet() const;
       void setElementName(const char* val, int makeCopy = 1);
       const char* getElementName() const;

       unsigned int isSystemGroupNameSet() const;
       void setSystemGroupName(const char* val, int makeCopy = 1);
       const char* getSystemGroupName() const;
       
  private:
       void init();
       void init(const Linux_SambaGroupInstance& original);
       void reset();
       
       Linux_SambaGroupInstanceName m_instanceName;
       const char* m_Caption;
       const char* m_Description;
       const char* m_ElementName;
       const char* m_SystemGroupName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int Caption:1;
         unsigned int Description:1;
         unsigned int ElementName:1;
         unsigned int SystemGroupName:1;
       } isSet;
  };
  
  
  struct Linux_SambaGroupInstanceEnumerationElement{
  	Linux_SambaGroupInstance* m_elementP;
  	Linux_SambaGroupInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGroupInstanceEnumerationElement();
  	~Linux_SambaGroupInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGroupInstanceEnumeration {
  	private:
  	  Linux_SambaGroupInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGroupInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGroupInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGroupInstanceEnumeration();
  	  
  	  Linux_SambaGroupInstanceEnumeration(
  	   const Linux_SambaGroupInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGroupInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGroupInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGroupInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGroupInstance& elementP);
  };
}
#endif

