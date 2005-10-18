/**
 *  Linux_SambaPrinterOptionsManualInstance.h
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


#ifndef Linux_SambaPrinterOptionsManualInstance_h
#define Linux_SambaPrinterOptionsManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterOptionsManualInstance {
  public:
       Linux_SambaPrinterOptionsManualInstance();
  	
       Linux_SambaPrinterOptionsManualInstance
  	    (const Linux_SambaPrinterOptionsManualInstance& original);
  	   
       Linux_SambaPrinterOptionsManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterOptionsManualInstance();
       
       Linux_SambaPrinterOptionsManualInstance& operator=
  	    (const Linux_SambaPrinterOptionsManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterOptionsInstanceName& val);        
       const Linux_SambaPrinterOptionsInstanceName&
        getInstanceName() const;

       unsigned int isAvailableSet() const;
       void setAvailable(const CMPIBoolean val);
       const CMPIBoolean getAvailable() const;

       unsigned int isCommentSet() const;
       void setComment(const char* val, int makeCopy = 1);
       const char* getComment() const;

       unsigned int isPathSet() const;
       void setPath(const char* val, int makeCopy = 1);
       const char* getPath() const;

       unsigned int isPrintableSet() const;
       void setPrintable(const CMPIBoolean val);
       const CMPIBoolean getPrintable() const;

       unsigned int isSystemPrinterNameSet() const;
       void setSystemPrinterName(const char* val, int makeCopy = 1);
       const char* getSystemPrinterName() const;
       
  private:
       void init();
       void init(const Linux_SambaPrinterOptionsManualInstance& original);
       void reset();
       
       Linux_SambaPrinterOptionsInstanceName m_instanceName;
       CMPIBoolean m_Available;
       const char* m_Comment;
       const char* m_Path;
       CMPIBoolean m_Printable;
       const char* m_SystemPrinterName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int Available:1;
         unsigned int Comment:1;
         unsigned int Path:1;
         unsigned int Printable:1;
         unsigned int SystemPrinterName:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterOptionsManualInstanceEnumerationElement{
  	Linux_SambaPrinterOptionsManualInstance* m_elementP;
  	Linux_SambaPrinterOptionsManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterOptionsManualInstanceEnumerationElement();
  	~Linux_SambaPrinterOptionsManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterOptionsManualInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterOptionsManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterOptionsManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterOptionsManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterOptionsManualInstanceEnumeration();
  	  
  	  Linux_SambaPrinterOptionsManualInstanceEnumeration(
  	   const Linux_SambaPrinterOptionsManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterOptionsManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterOptionsManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterOptionsManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterOptionsManualInstance& elementP);
  };
}
#endif

