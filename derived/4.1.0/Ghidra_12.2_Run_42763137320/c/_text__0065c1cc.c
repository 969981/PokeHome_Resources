/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065c1cc; name: FUN_.text__0065c1cc
 */


void FUN__text__0065c1cc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long **)(param_4 + 0x12d8) != (long *)0x0) {
    plVar3 = *(long **)(param_4 + 0x12d8);
    do {
      lVar4 = *plVar3;
      plVar5 = (long *)plVar3[2];
      iVar1 = FUN__text__0066c6d8(*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x20),
                                  param_1,param_2);
      if (0 < iVar1) break;
      FUN__text__00656b90((long *)(param_4 + 0x12d8),plVar3,0);
      plVar3 = plVar5;
    } while (plVar5 != (long *)0x0);
    if (*(long *)(param_4 + 0x12d8) != 0) {
      uVar2 = *(undefined8 *)(lVar4 + 0x20);
      *(undefined8 *)(param_4 + 0x1290) = *(undefined8 *)(lVar4 + 0x18);
      *(undefined8 *)(param_4 + 0x1298) = uVar2;
      uVar2 = FUN__text__0066bf98(*(undefined8 *)(param_4 + 0x1290),
                                  *(undefined8 *)(param_4 + 0x1298),*(undefined8 *)(param_3 + 0xb0),
                                  param_4 + 0x12a0);
      *(undefined8 *)(param_3 + 0xb0) = uVar2;
      return;
    }
  }
  *(undefined8 *)(param_4 + 0x1290) = 0;
  *(undefined4 *)(param_4 + 0x1298) = 0;
  return;
}


