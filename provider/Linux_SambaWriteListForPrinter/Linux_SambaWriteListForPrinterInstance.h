/**
 *  Linux_SambaWriteListForPrinterInstance.h
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


#ifndef Linux_SambaWriteListForPrinterInstance_h
#define Linux_SambaWriteListForPrinterInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaWriteListForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaWriteListForPrinterInstance {
  public:
       Linux_SambaWriteListForPrinterInstance();
  	
       Linux_SambaWriteListForPrinterInstance
  	    (const Linux_SambaWriteListForPrinterInstance& original);
  	   
       Linux_SambaWriteListForPrinterInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaWriteListForPrinterInstance();
       
       Linux_SambaWriteListForPrinterInstance& operator=
  	    (const Linux_SambaWriteListForPrinterInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaWriteListForPrinterInstanceName& val);        
       const Linux_SambaWriteListForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaWriteListForPrinterInstance& original);
       void reset();
       
       Linux_SambaWriteListForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaWriteListForPrinterInstanceEnumerationElement{
  	Linux_SambaWriteListForPrinterInstance* m_elementP;
  	Linux_SambaWriteListForPrinterInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaWriteListForPrinterInstanceEnumerationElement();
  	~Linux_SambaWriteListForPrinterInstanceEnumerationElement();  	
  };
  

  class Linux_SambaWriteListForPrinterInstanceEnumeration {
  	private:
  	  Linux_SambaWriteListForPrinterInstanceEnumerationElement* firstElementP;
  	  Linux_SambaWriteListForPrinterInstanceEnumerationElement* currentElementP;
  	  Linux_SambaWriteListForPrinterInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaWriteListForPrinterInstanceEnumeration();
  	  
  	  Linux_SambaWriteListForPrinterInstanceEnumeration(
  	   const Linux_SambaWriteListForPrinterInstanceEnumeration& original);
  	  
  	  ~Linux_SambaWriteListForPrinterInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaWriteListForPrinterInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaWriteListForPrinterInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaWriteListForPrinterInstance& elementP);
  };
}
#endif

