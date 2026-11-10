/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d0070; name: FUN_.text__004d0070
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004d0070(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = _DAT_008a4f00 + 0x168;
  *param_1 = _DAT_008a4f00 + 0x10;
  param_1[0x13] = lVar4;
  FUN__text__004d1470(param_1,0);
  plVar1 = (long *)param_1[0x32];
  *(byte *)((long)param_1 + 0x1ac) = *(byte *)((long)param_1 + 0x1ac) & 0xfc;
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)plVar1[0x11];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,_DAT_008a47f0);
      *(undefined8 *)(param_1[0x32] + 0x88) = 0;
      plVar1 = (long *)param_1[0x32];
    }
    (**(code **)(*plVar1 + 0x28))();
    *(undefined4 *)(param_1[0x32] + 0x90) = 0xffffffff;
    puVar3 = (undefined8 *)param_1[0x32];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN__text__00400fc0(5,puVar3);
      param_1[0x32] = 0;
    }
  }
  FUN__text__004d8c50(param_1 + 0x33);
  lVar4 = param_1[0x31];
  if (lVar4 != 0) {
    FUN__text__004d7c0c(lVar4);
    FUN__text__00400fc0(0xe,lVar4);
    param_1[0x31] = 0;
  }
  if (param_1[0x26] != 0) {
    *(undefined4 *)(param_1 + 0x27) = 0;
    FUN__text__00400fc0(0);
    param_1[0x26] = 0;
    *(undefined4 *)((long)param_1 + 0x13c) = 0;
  }
  lVar4 = param_1[0x28];
  if (lVar4 != 0) {
    if (*(uint *)(param_1 + 0x29) != 0) {
      lVar5 = (ulong)*(uint *)(param_1 + 0x29) * 0x30;
      do {
        FUN__text__004d3ca8(lVar4);
        lVar4 = lVar4 + 0x30;
        lVar5 = lVar5 + -0x30;
      } while (lVar5 != 0);
      lVar4 = param_1[0x28];
    }
    *(undefined4 *)(param_1 + 0x29) = 0;
    FUN__text__00400fc0(0,lVar4);
    param_1[0x28] = 0;
    *(undefined4 *)((long)param_1 + 0x14c) = 0;
  }
  if (param_1[0x20] != 0) {
    *(undefined4 *)(param_1 + 0x21) = 0;
    FUN__text__00400fc0(0);
    param_1[0x20] = 0;
    *(undefined4 *)((long)param_1 + 0x10c) = 0;
  }
  lVar4 = param_1[0x22];
  if (lVar4 != 0) {
    if (*(uint *)(param_1 + 0x23) != 0) {
      lVar5 = (ulong)*(uint *)(param_1 + 0x23) * 0x30;
      do {
        FUN__text__004d3ca8(lVar4);
        lVar4 = lVar4 + 0x30;
        lVar5 = lVar5 + -0x30;
      } while (lVar5 != 0);
      lVar4 = param_1[0x22];
    }
    *(undefined4 *)(param_1 + 0x23) = 0;
    FUN__text__00400fc0(0,lVar4);
    param_1[0x22] = 0;
    *(undefined4 *)((long)param_1 + 0x11c) = 0;
  }
  if (param_1[0x1a] != 0) {
    *(undefined4 *)(param_1 + 0x1b) = 0;
    FUN__text__00400fc0(0);
    param_1[0x1a] = 0;
    *(undefined4 *)((long)param_1 + 0xdc) = 0;
  }
  lVar4 = param_1[0x1c];
  if (lVar4 != 0) {
    if (*(uint *)(param_1 + 0x1d) != 0) {
      lVar5 = (ulong)*(uint *)(param_1 + 0x1d) * 0x30;
      do {
        FUN__text__004d3ca8(lVar4);
        lVar4 = lVar4 + 0x30;
        lVar5 = lVar5 + -0x30;
      } while (lVar5 != 0);
      lVar4 = param_1[0x1c];
    }
    *(undefined4 *)(param_1 + 0x1d) = 0;
    FUN__text__00400fc0(0,lVar4);
    param_1[0x1c] = 0;
    *(undefined4 *)((long)param_1 + 0xec) = 0;
  }
  if (param_1[0x14] != 0) {
    *(undefined4 *)(param_1 + 0x15) = 0;
    FUN__text__00400fc0(0);
    param_1[0x14] = 0;
    *(undefined4 *)((long)param_1 + 0xac) = 0;
  }
  lVar4 = param_1[0x16];
  if (lVar4 != 0) {
    if (*(uint *)(param_1 + 0x17) != 0) {
      lVar5 = (ulong)*(uint *)(param_1 + 0x17) * 0x30;
      do {
        FUN__text__004d3ca8(lVar4);
        lVar4 = lVar4 + 0x30;
        lVar5 = lVar5 + -0x30;
      } while (lVar5 != 0);
      lVar4 = param_1[0x16];
    }
    *(undefined4 *)(param_1 + 0x17) = 0;
    FUN__text__00400fc0(0,lVar4);
    param_1[0x16] = 0;
    *(undefined4 *)((long)param_1 + 0xbc) = 0;
  }
  *param_1 = _DAT_008a4ef8 + 0x10;
  FUN__text__0045cca8(param_1 + 0xd);
  FUN__text__00458e90(param_1);
  return;
}


