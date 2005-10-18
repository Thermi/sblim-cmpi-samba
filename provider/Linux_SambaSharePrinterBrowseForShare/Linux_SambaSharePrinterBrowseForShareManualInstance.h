/**
 *  Linux_SambaSharePrinterBrowseForShareManualInstance.h
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


#ifndef Linux_SambaSharePrinterBrowseForShareManualInstance_h
#define Linux_SambaSharePrinterBrowseForShareManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaSharePrinterBrowseForShareInstanceName.h"

namespace genProvider {

  class Linux_SambaSharePrinterBrowseForShareManualInstance {
  public:
       Linux_SambaSharePrinterBrowseForShareManualInstance();
  	
       Linux_SambaSharePrinterBrowseForShareManualInstance
  	    (const Linux_SambaSharePrinterBrowseForShareManualInstance& original);
  	   
       Linux_SambaSharePrinterBrowseForShareManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaSharePrinterBrowseForShareManualInstance();
       
       Linux_SambaSharePrinterBrowseForShareManualInstance& operator=
  	    (const Linux_SambaSharePrinterBrowseForShareManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaSharePrinterBrowseForShareInstanceName& val);        
       const Linux_SambaSharePrinterBrowseForShareInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaSharePrinterBrowseForShareManualInstance& original);
       void reset();
       
       Linux_SambaSharePrinterBrowseForShareInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement{
  	Linux_SambaSharePrinterBrowseForShareManualInstance* m_elementP;
  	Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement();
  	~Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration {
  	private:
  	  Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration();
  	  
  	  Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration(
  	   const Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaSharePrinterBrowseForShareManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaSharePrinterBrowseForShareManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaSharePrinterBrowseForShareManualInstance& elementP);
  };
}
#endif

