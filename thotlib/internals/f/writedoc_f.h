/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern void TtaSaveDocument ( Document document,
                              char *documentName );
extern ThotBool StoreDocument ( PtrDocument pDoc,
                                PathBuffer docName,
                                PathBuffer dirName,
                                ThotBool copy,
                                ThotBool move );
extern void SetWriteDirectory ( PtrDocument pDoc,
                                PathBuffer fileName,
                                PathBuffer directoryName,
                                ThotBool withCopy,
                                ThotBool withMove );
extern ThotBool WriteDocument ( PtrDocument pDoc,
                                int mode );
extern void PivotLoadResources ( void );

#else /* __STDC__ */

extern void TtaSaveDocument ( Document document,
                                char *documentName );
extern ThotBool StoreDocument ( PtrDocument pDoc,
                                  PathBuffer docName,
                                  PathBuffer dirName,
                                  ThotBool copy,
                                  ThotBool move );
extern void SetWriteDirectory ( PtrDocument pDoc,
                                  PathBuffer fileName,
                                  PathBuffer directoryName,
                                  ThotBool withCopy,
                                  ThotBool withMove );
extern ThotBool WriteDocument ( PtrDocument pDoc,
                                  int mode );
extern void PivotLoadResources ( void );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */
