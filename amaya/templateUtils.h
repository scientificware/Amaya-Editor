#ifndef TEMPLATE_UTILS
#define TEMPLATE_UTILS

#define THOT_EXPORT extern
#include "amaya.h"
#include "document.h"

extern char *GetSchemaFromDocType (DocumentType docType);

extern char *GetAttributeStringValue (Element el, int att);

extern char *GetAttributeStringValue (Element el, Attribute attribute);

#endif /* TEMPLATE_UTILS */