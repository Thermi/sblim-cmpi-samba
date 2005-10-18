/**
 *  Linux_SambaPrinterOptionsInstance.h
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


#ifndef Linux_SambaPrinterOptionsInstance_h
#define Linux_SambaPrinterOptionsInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaPrinterOptionsInstance {
  public:
       Linux_SambaPrinterOptionsInstance();
  	
       Linux_SambaPrinterOptionsInstance
  	    (const Linux_SambaPrinterOptionsInstance& original);
  	   
       Linux_SambaPrinterOptionsInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaPrinterOptionsInstance();
       
       Linux_SambaPrinterOptionsInstance& operator=
  	    (const Linux_SambaPrinterOptionsInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaPrinterOptionsInstanceName& val);        
       const Linux_SambaPrinterOptionsInstanceName&
        getInstanceName() const;

       unsigned int isAvailableSet() const;
       void setAvailable(const CMPIBoolean val);
       const CMPIBoolean getAvailable() const;

       unsigned int isCaptionSet() const;
       void setCaption(const char* val, int makeCopy = 1);
       const char* getCaption() const;

       unsigned int isCommentSet() const;
       void setComment(const char* val, int makeCopy = 1);
       const char* getComment() const;

       unsigned int isDescriptionSet() const;
       void setDescription(const char* val, int makeCopy = 1);
       const char* getDescription() const;

       unsigned int isElementNameSet() const;
       void setElementName(const char* val, int makeCopy = 1);
       const char* getElementName() const;

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
       void init(const Linux_SambaPrinterOptionsInstance& original);
       void reset();
       
       Linux_SambaPrinterOptionsInstanceName m_instanceName;
       CMPIBoolean m_Available;
       const char* m_Caption;
       const char* m_Comment;
       const char* m_Description;
       const char* m_ElementName;
       const char* m_Path;
       CMPIBoolean m_Printable;
       const char* m_SystemPrinterName;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int Available:1;
         unsigned int Caption:1;
         unsigned int Comment:1;
         unsigned int Description:1;
         unsigned int ElementName:1;
         unsigned int Path:1;
         unsigned int Printable:1;
         unsigned int SystemPrinterName:1;
       } isSet;
  };
  
  
  struct Linux_SambaPrinterOptionsInstanceEnumerationElement{
  	Linux_SambaPrinterOptionsInstance* m_elementP;
  	Linux_SambaPrinterOptionsInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaPrinterOptionsInstanceEnumerationElement();
  	~Linux_SambaPrinterOptionsInstanceEnumerationElement();  	
  };
  

  class Linux_SambaPrinterOptionsInstanceEnumeration {
  	private:
  	  Linux_SambaPrinterOptionsInstanceEnumerationElement* firstElementP;
  	  Linux_SambaPrinterOptionsInstanceEnumerationElement* currentElementP;
  	  Linux_SambaPrinterOptionsInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaPrinterOptionsInstanceEnumeration();
  	  
  	  Linux_SambaPrinterOptionsInstanceEnumeration(
  	   const Linux_SambaPrinterOptionsInstanceEnumeration& original);
  	  
  	  ~Linux_SambaPrinterOptionsInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaPrinterOptionsInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaPrinterOptionsInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaPrinterOptionsInstance& elementP);
  };
}
#endif

