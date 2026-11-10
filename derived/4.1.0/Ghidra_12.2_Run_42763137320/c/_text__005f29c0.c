/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f29c0; name: FUN_.text__005f29c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN__text__005f29c0(long param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  ushort *puVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  
  puVar3 = *(ushort **)(param_1 + 0x90);
  if (puVar3[1] <= param_2) {
    FUN__text__005f33f0(param_3);
    return 0;
  }
  uVar1 = *_DAT_008a5c70 & 0xff;
  if ((uint)*puVar3 <= *_DAT_008a5c70) {
    uVar1 = 0;
  }
  if ((*(uint *)(param_1 + 0x88) == uVar1) ||
     (*(uint *)(param_1 + 0x88) = uVar1, *(int *)(param_1 + 0x54) == 0)) {
LAB__text__005f2a68:
    if (*(int *)(param_1 + 0x54) != 0) goto LAB__text__005f2a70;
LAB__text__005f2ab0:
    puVar5 = (uint *)(param_1 + 0xa0);
    FUN__text__005f2860(param_1,param_1 + 0x58,
                        *(int *)(*(long *)(param_1 + 0x90) + (ulong)*(uint *)(param_1 + 0x88) * 4 +
                                0xc) + param_2 * 8 + 4,puVar5,8);
    if (*(int *)(param_1 + 0x54) == 0) {
      lVar6 = (ulong)*(ushort *)(param_1 + 0xa4) << 1;
      lVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),lVar6,8);
      if (lVar2 != 0) {
        FUN__text__005f2860(param_1,param_1 + 0x58,
                            *(int *)(param_1 + 0xa0) +
                            *(int *)(*(long *)(param_1 + 0x90) +
                                     (ulong)*(uint *)(param_1 + 0x88) * 4 + 0xc),lVar2,lVar6);
        FUN__text__005f2bc0(param_1,lVar2,*(undefined2 *)(param_1 + 0xa4),param_2,param_3);
        (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),lVar2,lVar6,8);
        return *(undefined2 *)(param_1 + 0xa6);
      }
      goto LAB__text__005f2b08;
    }
  }
  else {
    uVar4 = (ulong)*(uint *)(puVar3 + (ulong)uVar1 * 2 + 6);
    if (*(char *)(param_1 + 0x1c0) != '\0') {
      FUN__text__005f2860(param_1,param_1 + 0x58,uVar4,*(undefined8 *)(param_1 + 0x98),4);
      FUN__text__005f2860(param_1,param_1 + 0x58,uVar4,*(undefined4 **)(param_1 + 0x98),
                          **(undefined4 **)(param_1 + 0x98));
      goto LAB__text__005f2a68;
    }
    *(ulong *)(param_1 + 0x98) = uVar4 + (long)puVar3;
    if (*(int *)(param_1 + 0x54) == 0) goto LAB__text__005f2ab0;
LAB__text__005f2a70:
    puVar5 = (uint *)(*(long *)(param_1 + 0x98) + (ulong)param_2 * 8 + 4);
  }
  FUN__text__005f2bc0(param_1,(ulong)*puVar5 + *(long *)(param_1 + 0x98),(short)puVar5[1],
                      (ulong)param_2,param_3);
LAB__text__005f2b08:
  return *(undefined2 *)((long)puVar5 + 6);
}


