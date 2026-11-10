/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a1f30; name: FUN_.text__006a1f30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006a1f30(long param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  ushort uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  FUN__text__006a4ea0(param_1,param_3);
  *param_2 = *(undefined8 *)(param_1 + 8);
  param_2[1] = param_3 + 8;
  FUN__text__006a5220(param_2 + 0xf);
  param_2[0x14] = param_2;
  param_2[0x15] = param_2 + 0xf;
  puVar3 = (undefined8 *)(*DAT_00c5faa8)(0x10,4,*_DAT_008a6970);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0x89e950;
    puVar3[1] = param_2;
  }
  param_2[0x1a] = puVar3;
  if (*(short *)(param_3 + 0x40) != 0) {
    lVar6 = 0;
    uVar7 = 0;
    plVar1 = param_2 + 2;
    do {
      plVar4 = (long *)FUN__text__006a50c0(param_1,*(long *)(param_3 + 0x28) + lVar6);
      lVar5 = *plVar4;
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x80;
      *plVar4 = *plVar1;
      *(long **)(lVar5 + 8) = plVar1;
      *(long **)(*plVar1 + 8) = plVar4;
      *plVar1 = lVar5;
    } while (uVar7 < *(ushort *)(param_3 + 0x40));
  }
  if (*(short *)(param_3 + 0x42) != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      FUN__text__006caa10(param_2 + 0x14,*(long *)(param_3 + 0x30) + lVar6);
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x48;
    } while (uVar7 < *(ushort *)(param_3 + 0x42));
  }
  uVar2 = *(ushort *)(param_3 + 0x44);
  param_2[0x18] = *(undefined8 *)(param_3 + 0x38);
  *(uint *)(param_2 + 0x19) = (uint)uVar2;
  return;
}


