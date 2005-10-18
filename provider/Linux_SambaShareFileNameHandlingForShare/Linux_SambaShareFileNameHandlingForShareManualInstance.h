/**
 *  Linux_SambaShareFileNameHandlingForShareManualInstance.h
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


#ifndef Linux_SambaShareFileNameHandlingForShareManualInstance_h
#define Linux_SambaShareFileNameHandlingForShareManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareFileNameHandlingForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaShareFileNameHandlingForShareManualInstance {
  public:
       Linux_SambaShareFileNameHandlingForShareManualInstance();
  	
       Linux_SambaShareFileNameHandlingForShareManualInstance
  	    (const Linux_SambaShareFileNameHandlingForShareManualInstance& original);
  	   
       Linux_SambaShareFileNameHandlingForShareManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaShareFileNameHandlingForShareManualInstance();
       
       Linux_SambaShareFileNameHandlingForShareManualInstance& operator=
  	    (const Linux_SambaShareFileNameHandlingForShareManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaShareFileNameHandlingForShareInstanceName& val);        
       const Linux_SambaShareFileNameHandlingForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaShareFileNameHandlingForShareManualInstance& original);
       void reset();
       
       Linux_SambaShareFileNameHandlingForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement{
  	Linux_SambaShareFileNameHandlingForShareManualInstance* m_elementP;
  	Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement();
  	~Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration {
  	private:
  	  Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration();
  	  
  	  Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration(
  	   const Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaShareFileNameHandlingForShareManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaShareFileNameHandlingForShareManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaShareFileNameHandlingForShareManualInstance& elementP);
  };
}
#endif

