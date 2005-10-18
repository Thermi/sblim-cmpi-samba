/**
 *  Linux_SambaHostManualInstance.h
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


#ifndef Linux_SambaHostManualInstance_h
#define Linux_SambaHostManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaHostInstanceName.h"

namespace genProvider {

  class Linux_SambaHostManualInstance {
  public:
       Linux_SambaHostManualInstance();
  	
       Linux_SambaHostManualInstance
  	    (const Linux_SambaHostManualInstance& original);
  	   
       Linux_SambaHostManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaHostManualInstance();
       
       Linux_SambaHostManualInstance& operator=
  	    (const Linux_SambaHostManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaHostInstanceName& val);        
       const Linux_SambaHostInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaHostManualInstance& original);
       void reset();
       
       Linux_SambaHostInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaHostManualInstanceEnumerationElement{
  	Linux_SambaHostManualInstance* m_elementP;
  	Linux_SambaHostManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaHostManualInstanceEnumerationElement();
  	~Linux_SambaHostManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaHostManualInstanceEnumeration {
  	private:
  	  Linux_SambaHostManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaHostManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaHostManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaHostManualInstanceEnumeration();
  	  
  	  Linux_SambaHostManualInstanceEnumeration(
  	   const Linux_SambaHostManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaHostManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaHostManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaHostManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaHostManualInstance& elementP);
  };
}
#endif

