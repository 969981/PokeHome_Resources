/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00409260; name: FUN_.text__00409260
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00409260(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  EventType *pEVar3;
  ThreadType *pTVar4;
  long *plVar5;
  long lVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  code *pcVar12;
  
  puVar2 = _DAT_008a49d0;
  puVar1 = _DAT_008a49b0;
  if (*(undefined8 **)(_DAT_008a49d0 + 4) != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
    puVar11 = *(undefined8 **)(_DAT_008a49d0 + 4);
    do {
      while ((puVar10 = puVar11, puVar9 != (undefined8 *)0x0 ||
             (*(char *)((long)puVar10 + 0x555) == '\0'))) {
        pcVar12 = (code *)*puVar1;
        if (pcVar12 != (code *)0x0) {
          uVar8 = FUN__text__0040dc30();
          (*pcVar12)(uVar8,*(undefined4 *)((long)puVar10 + 100),*(undefined4 *)(puVar10 + 0xd),1,1);
        }
        puVar11 = (undefined8 *)puVar10[4];
        (**(code **)*puVar10)(puVar10);
        FUN__text__00400fc0(0,puVar10);
        puVar10 = puVar9;
        if (puVar11 == (undefined8 *)0x0) goto LAB__text__004092f8;
      }
      puVar9 = puVar10;
      puVar11 = (undefined8 *)puVar10[4];
    } while ((undefined8 *)puVar10[4] != (undefined8 *)0x0);
LAB__text__004092f8:
    if (puVar10 != (undefined8 *)0x0) {
      pcVar12 = (code *)*puVar1;
      if (pcVar12 != (code *)0x0) {
        uVar8 = FUN__text__0040dc30();
        (*pcVar12)(uVar8,*(undefined4 *)((long)puVar10 + 100),*(undefined4 *)(puVar10 + 0xd),1,1);
      }
      (**(code **)*puVar10)(puVar10);
      FUN__text__00400fc0(0,puVar10);
    }
  }
  *puVar2 = 0;
  puVar1 = _DAT_008a49c8;
  *(undefined8 *)(puVar2 + 2) = 0;
  *(undefined8 *)(puVar2 + 4) = 0;
  *puVar1 = 0x3f8000003f800000;
  plVar5 = _DAT_008a4a20;
  if (*_DAT_008a4a20 != 0) {
    FUN__text__00400fc0(0);
    *plVar5 = 0;
  }
  lVar6 = _DAT_008a4a28;
  if (*(long *)(_DAT_008a4a28 + 0x10) != 0) {
    bVar7 = *(long *)(_DAT_008a4a28 + 0x10) != _DAT_008a4a28;
    *(undefined4 *)(_DAT_008a4a28 + 0x18) = 0;
    if (bVar7) {
      FUN__text__00400fc0(4);
    }
    *(undefined8 *)(lVar6 + 0x10) = 0;
    *(undefined4 *)(lVar6 + 0x1c) = 0;
  }
  *_DAT_008a4a18 = 0;
  *_DAT_008a4a30 = 0;
  pTVar4 = _DAT_008a4a08;
  pEVar3 = _DAT_008a49f8;
  if (_DAT_008a4a08[0x40] != (ThreadType)0x0) {
    *_DAT_008a49d8 = 1;
    nn::os::SignalEvent(_DAT_008a49f8);
    nn::os::WaitThread(pTVar4);
    nn::os::DestroyThread(pTVar4);
    if (*(long *)(pTVar4 + 0x1c8) != 0) {
      free(*(void **)(pTVar4 + 0x1c0));
    }
    *(undefined8 *)(pTVar4 + 0x1c0) = 0;
    pTVar4[0x40] = (ThreadType)0x0;
  }
  if (pEVar3[0x13] == (EventType)0x1) {
    nn::os::FinalizeEvent(_DAT_008a49f8);
  }
  *(undefined8 *)(pEVar3 + 0x18) = 0;
  *(undefined8 *)(pEVar3 + 0x20) = 0;
  *(undefined8 *)pEVar3 = 0;
  *(undefined8 *)(pEVar3 + 8) = 0;
  *(undefined8 *)(pEVar3 + 0x10) = 0;
  *_DAT_008a4a38 = 0;
  *_DAT_008a4a40 = 0;
  return;
}


