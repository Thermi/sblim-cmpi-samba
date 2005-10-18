/**
 *  Linux_SambaSharePrinterBrowseForPrinterManualInstance.h
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


#ifndef Linux_SambaSharePrinterBrowseForPrinterManualInstance_h
#define Linux_SambaSharePrinterBrowseForPrinterManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaSharePrinterBrowseForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaSharePrinterBrowseForPrinterManualInstance {
  public:
       Linux_SambaSharePrinterBrowseForPrinterManualInstance();
  	
       Linux_SambaSharePrinterBrowseForPrinterManualInstance
  	    (const Linux_SambaSharePrinterBrowseForPrinterManualInstance& original);
  	   
       Linux_SambaSharePrinterBrowseForPrinterManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaSharePrinterBrowseForPrinterManualInstance();
       
       Linux_SambaSharePrinterBrowseForPrinterManualInstance& operator=
  	    (const Linux_SambaSharePrinterBrowseForPrinterManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaSharePrinterBrowseForPrinterInstanceName& val);        
       const Linux_SambaSharePrinterBrowseForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaSharePrinterBrowseForPrinterManualInstance& original);
       void reset();
       
       Linux_SambaSharePrinterBrowseForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement{
  	Linux_SambaSharePrinterBrowseForPrinterManualInstance* m_elementP;
  	Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement();
  	~Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration {
  	private:
  	  Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration();
  	  
  	  Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration(
  	   const Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaSharePrinterBrowseForPrinterManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaSharePrinterBrowseForPrinterManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaSharePrinterBrowseForPrinterManualInstance& elementP);
  };
}
#endif

