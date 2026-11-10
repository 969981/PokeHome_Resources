/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d3fb0; name: FUN_.text__004d3fb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004d3fb0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = _DAT_008a4f18 + 0x168;
  *param_1 = _DAT_008a4f18 + 0x10;
  param_1[0x13] = lVar2;
  FUN__text__004590f0();
  FUN__text__004d1470(param_1,0);
  plVar1 = (long *)param_1[1];
  *(byte *)((long)param_1 + 0x1ac) = *(byte *)((long)param_1 + 0x1ac) & 0xfc;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,0);
    plVar1 = (long *)param_1[1];
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      FUN__text__00400fc0(5,plVar1);
    }
    param_1[1] = 0;
  }
  lVar2 = param_1[0x2d];
  if (lVar2 != 0) {
    if (*(uint *)(param_1 + 0x2e) != 0) {
      lVar3 = (ulong)*(uint *)(param_1 + 0x2e) * 0x30;
      do {
        FUN__text__004d3ca8(lVar2);
        lVar2 = lVar2 + 0x30;
        lVar3 = lVar3 + -0x30;
      } while (lVar3 != 0);
      lVar2 = param_1[0x2d];
    }
    *(undefined4 *)(param_1 + 0x2e) = 0;
    FUN__text__00400fc0(0,lVar2);
    param_1[0x2d] = 0;
    *(undefined4 *)((long)param_1 + 0x174) = 0;
  }
  FUN__text__004d0070(param_1);
  return;
}


