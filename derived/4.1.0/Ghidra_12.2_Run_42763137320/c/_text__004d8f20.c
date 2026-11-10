/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d8f20; name: FUN_.text__004d8f20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004d8f20(long param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_58;
  long local_50;
  undefined4 local_48;
  
  puVar1 = _DAT_008a4630;
  uVar4 = (ulong)*(uint *)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x18) == 0) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  lVar6 = lVar5;
  do {
    if (*(long *)(lVar6 + 8) == param_2) {
      uVar4 = (**(code **)(*param_3 + 0x28))(param_3);
      if ((uVar4 & 1) == 0) {
        return 1;
      }
      local_48 = 0;
      local_58 = 0;
      local_50 = 0;
      FUN__text__004aa040(*puVar1,*(undefined4 *)(lVar6 + 0x1c),&local_58);
      if (local_50 == 0) {
        return 1;
      }
      iVar2 = (**(code **)(*param_3 + 0x30))(param_3,local_50,*(undefined8 *)(lVar6 + 0x10));
      uVar3 = *puVar1;
      if (iVar2 != 1) {
        FUN__text__004aa280(uVar3,*(undefined4 *)(lVar6 + 0x1c),&local_58);
        return 1;
      }
      FUN__text__004aa280(uVar3,*(undefined4 *)(lVar6 + 0x1c),(long *)(lVar6 + 8));
      *(long *)(lVar6 + 0x10) = local_50;
      *(undefined8 *)(lVar6 + 8) = local_58;
      lVar5 = *(long *)(param_1 + 0x10);
      uVar4 = (ulong)*(uint *)(param_1 + 0x18);
    }
    lVar6 = lVar6 + 0x20;
    if (lVar6 == lVar5 + uVar4 * 0x20) {
      return 0;
    }
  } while( true );
}


