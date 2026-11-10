/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004137f0; name: FUN_.text__004137f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004137f0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  EventType *pEVar4;
  int *piVar5;
  
  piVar5 = _DAT_008a48c0;
  piVar3 = _DAT_008a48a0;
  while ((0 < *piVar3 || (0 < *piVar5))) {
    FUN__text__00405bf0();
  }
  while ((0 < piVar3[1] || (0 < piVar5[1]))) {
    FUN__text__00405bf0();
  }
  while ((0 < piVar3[2] || (0 < piVar5[2]))) {
    FUN__text__00405bf0();
  }
  while ((pEVar4 = _DAT_008a48b0, 0 < piVar3[3] || (0 < piVar5[3]))) {
    FUN__text__00405bf0();
  }
  if (_DAT_008a48b0[0x13] == (EventType)0x1) {
    nn::os::FinalizeEvent(_DAT_008a48b0);
  }
  *(undefined8 *)(pEVar4 + 0x18) = 0;
  *(undefined8 *)(pEVar4 + 0x20) = 0;
  *(undefined8 *)pEVar4 = 0;
  *(undefined8 *)(pEVar4 + 8) = 0;
  *(undefined8 *)(pEVar4 + 0x10) = 0;
  FUN__text__00412230();
  puVar2 = _DAT_008a4888;
  FUN__text__00400fc0(0x10,*_DAT_008a4888);
  puVar1 = _DAT_008a4880;
  *puVar2 = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN__text__00414230(_DAT_008a48c8);
  *_DAT_008a48d8 = 0;
  return;
}


