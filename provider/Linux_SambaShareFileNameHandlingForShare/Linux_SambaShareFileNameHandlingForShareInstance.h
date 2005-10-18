/**
 *  Linux_SambaShareFileNameHandlingForShareInstance.h
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


#ifndef Linux_SambaShareFileNameHandlingForShareInstance_h
#define Linux_SambaShareFileNameHandlingForShareInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareFileNameHandlingForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaShareFileNameHandlingForShareInstance {
  public:
       Linux_SambaShareFileNameHandlingForShareInstance();
  	
       Linux_SambaShareFileNameHandlingForShareInstance
  	    (const Linux_SambaShareFileNameHandlingForShareInstance& original);
  	   
       Linux_SambaShareFileNameHandlingForShareInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareFileNameHandlingForShareInstance();
       
       Linux_SambaShareFileNameHandlingForShareInstance& operator=
  	    (const Linux_SambaShareFileNameHandlingForShareInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareFileNameHandlingForShareInstanceName& val);        
       const Linux_SambaShareFileNameHandlingForShareInstanceName&
        getInstanceName() const;

       unsigned int isIsCurrentSet() const;
       void setIsCurrent(const CMPIUint16 val);
       const CMPIUint16 getIsCurrent() const;

       unsigned int isIsDefaultSet() const;
       void setIsDefault(const CMPIUint16 val);
       const CMPIUint16 getIsDefault() const;
       
  private:
       void init();
       void init(const Linux_SambaShareFileNameHandlingForShareInstance& original);
       void reset();
       
       Linux_SambaShareFileNameHandlingForShareInstanceName m_instanceName;
       CMPIUint16 m_IsCurrent;
       CMPIUint16 m_IsDefault;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int IsCurrent:1;
         unsigned int IsDefault:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement{
  	Linux_SambaShareFileNameHandlingForShareInstance* m_elementP;
  	Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement();
  	~Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareFileNameHandlingForShareInstanceEnumeration {
  	private:
  	  Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareFileNameHandlingForShareInstanceEnumeration();
  	  
  	  Linux_SambaShareFileNameHandlingForShareInstanceEnumeration(
  	   const Linux_SambaShareFileNameHandlingForShareInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareFileNameHandlingForShareInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareFileNameHandlingForShareInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareFileNameHandlingForShareInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareFileNameHandlingForShareInstance& elementP);
  };
}
#endif

