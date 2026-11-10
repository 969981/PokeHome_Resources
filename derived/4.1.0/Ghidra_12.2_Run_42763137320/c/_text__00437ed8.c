/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00437ed8; name: FUN_.text__00437ed8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__00437ed8(undefined8 param_1,long param_2,void *param_3,int param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar2 = (long *)FUN__text__00400f80(0x10,0x30);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  plVar4 = plVar2 + 1;
  *plVar4 = 0;
  *plVar2 = _DAT_008a4858 + 0x10;
  *(undefined4 *)(plVar2 + 3) = 1;
  plVar2[4] = param_2;
  *(int *)(plVar2 + 5) = (int)param_1;
  *(char *)((long)plVar2 + 0x2c) = (char)((ulong)param_1 >> 0x20);
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 3) = 1;
  if ((param_3 != (void *)0x0) && (param_4 != 0)) {
    *(undefined4 *)(plVar2 + 3) = 1;
    *(int *)(plVar2 + 2) = param_4 + 2;
    lVar3 = FUN__text__00400f80(0,(param_4 + 2) * 0x14);
    plVar2[1] = lVar3;
    if (lVar3 == 0) {
      *(undefined4 *)(plVar2 + 2) = 0;
    }
    else {
      *(undefined4 *)((long)plVar2 + 0x14) = 0;
      memcpy((void *)(lVar3 + 0xc),param_3,(ulong)(uint)(param_4 * 0xc));
      *(undefined4 *)(plVar2[1] + 8) = 9;
      *(undefined4 *)plVar2[1] = 0xff7fffff;
      *(undefined4 *)(plVar2[1] + 4) = *(undefined4 *)(plVar2[1] + 0x10);
      *(undefined4 *)(plVar2[1] + (ulong)((int)plVar2[2] - 1) * 0xc + 8) = 9;
      *(undefined4 *)(plVar2[1] + (ulong)((int)plVar2[2] - 1) * 0xc) = 0x7f7fffff;
      *(undefined4 *)(plVar2[1] + (ulong)((int)plVar2[2] - 1) * 0xc + 4) =
           *(undefined4 *)(plVar2[1] + (ulong)((int)plVar2[2] - 2) * 0xc + 4);
      FUN__text__00432e60(plVar4);
      iVar1 = FUN__text__004341c0(DAT_00ae9a70,param_1,plVar2);
      if (iVar1 == 1) {
        return plVar2;
      }
    }
  }
  FUN__text__00434700(DAT_00ae9a70,plVar2[5],plVar2);
  if (plVar2[1] != 0) {
    FUN__text__00400fc0(0);
  }
  *plVar4 = 0;
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 3) = 1;
  FUN__text__00400fc0(0x10,plVar2);
  return (long *)0x0;
}


