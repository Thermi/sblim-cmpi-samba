/**
 *  Linux_SambaCommonSecurityForPrinterManualInstance.h
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


#ifndef Linux_SambaCommonSecurityForPrinterManualInstance_h
#define Linux_SambaCommonSecurityForPrinterManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityForPrinterInstanceName.h"

namespace genProvider {

  class Linux_SambaCommonSecurityForPrinterManualInstance {
  public:
       Linux_SambaCommonSecurityForPrinterManualInstance();
  	
       Linux_SambaCommonSecurityForPrinterManualInstance
  	    (const Linux_SambaCommonSecurityForPrinterManualInstance& original);
  	   
       Linux_SambaCommonSecurityForPrinterManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaCommonSecurityForPrinterManualInstance();
       
       Linux_SambaCommonSecurityForPrinterManualInstance& operator=
  	    (const Linux_SambaCommonSecurityForPrinterManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaCommonSecurityForPrinterInstanceName& val);        
       const Linux_SambaCommonSecurityForPrinterInstanceName&
        getInstanceName() const;
       
  private:
       void init();
       void init(const Linux_SambaCommonSecurityForPrinterManualInstance& original);
       void reset();
       
       Linux_SambaCommonSecurityForPrinterInstanceName m_instanceName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
       } isSet;
  };
  
  
  struct Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement{
  	Linux_SambaCommonSecurityForPrinterManualInstance* m_elementP;
  	Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement();
  	~Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration {
  	private:
  	  Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration();
  	  
  	  Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration(
  	   const Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaCommonSecurityForPrinterManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaCommonSecurityForPrinterManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaCommonSecurityForPrinterManualInstance& elementP);
  };
}
#endif

