/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00508550; name: FUN_.text__00508550
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00508550(long *param_1)

{
  int *piVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  
  *param_1 = _DAT_008a41d0 + 0x10;
  lVar4 = param_1[6];
  if (lVar4 != 0) {
    *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + -1;
    param_1[6] = 0;
  }
  if (param_1[0xf] != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN__text__00400fc0(9);
    param_1[0xf] = 0;
    *(undefined4 *)((long)param_1 + 0x84) = 0;
  }
  FUN__text__00532040(param_1 + 7,param_1);
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    if (*(uint *)(param_1 + 5) != 0) {
      lVar4 = lVar4 + 0x78;
      lVar6 = (ulong)*(uint *)(param_1 + 5) * 0x118;
      do {
        FUN__text__005099b0(lVar4 + -0x78);
        FUN__text__00507b30(lVar4);
        if (*(long *)(lVar4 + 0x30) != 0) {
          *(undefined4 *)(lVar4 + 0x38) = 0;
          FUN__text__00400fc0(0xb);
          *(undefined8 *)(lVar4 + 0x30) = 0;
          *(undefined4 *)(lVar4 + 0x3c) = 0;
        }
        FUN__text__0051cae0(lVar4 + 0x10);
        lVar6 = lVar6 + -0x118;
        lVar4 = lVar4 + 0x118;
      } while (lVar6 != 0);
      lVar4 = param_1[4];
    }
    *(undefined4 *)(param_1 + 5) = 0;
    FUN__text__00400fc0(0xb,lVar4);
    param_1[4] = 0;
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
  }
  lVar4 = *(long *)(param_1[1] + 0x18);
  if (lVar4 != 0) {
    FUN__text__004921e8(lVar4);
    FUN__text__004932ac(lVar4,0);
  }
  FUN__text__00529e60(param_1 + 0xc);
  *param_1 = 0x891bb8;
  if (param_1[2] == 0) {
    lVar4 = 0;
  }
  else {
    *(long *)(param_1[2] + 0x18) = param_1[3];
    lVar4 = param_1[2];
  }
  piVar3 = _DAT_008a3f78;
  piVar5 = (int *)param_1[3];
  plVar2 = *(long **)(_DAT_008a3f78 + 2);
  piVar1 = _DAT_008a3f78;
  if (*(long **)(_DAT_008a3f78 + 4) != param_1) {
    piVar1 = piVar5;
  }
  *(long *)(piVar1 + 4) = lVar4;
  if (plVar2 == param_1) {
    *(int **)(piVar3 + 2) = piVar5;
  }
  *piVar3 = *piVar3 + -1;
  return;
}


