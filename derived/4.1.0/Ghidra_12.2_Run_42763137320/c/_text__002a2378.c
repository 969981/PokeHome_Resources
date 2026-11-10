/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a2378; name: FUN_.text__002a2378
 */


void FUN__text__002a2378(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  long local_38;
  
  FUN__text__002a256c();
  iVar1 = FUN__text__00631008(param_2);
  iVar2 = FUN__text__0063378c(param_2);
  uVar3 = FUN__text__00631010(param_2);
  uVar4 = FUN__text__00634538(param_2);
  uVar5 = iVar1 - 1;
  uVar9 = (ulong)uVar5;
  if (0x1ec < uVar5) goto joined_r0x002a2490;
  if (*(int *)(param_1 + 0x54 + (ulong)uVar5 * 4) < param_3) {
    *(int *)(param_1 + 0x54 + uVar9 * 4) = param_3;
  }
  if (iVar2 == 2) {
    lVar6 = param_1 + uVar9 * 4;
    if ((uVar4 & 1) == 0) {
      *(undefined4 *)(lVar6 + 6000) = 1;
LAB__text__002a2464:
      lVar8 = 0x1f24;
LAB__text__002a2468:
      puVar7 = (undefined4 *)(lVar6 + lVar8);
    }
    else {
      *(undefined4 *)(lVar6 + 0x808) = 1;
      puVar7 = (undefined4 *)(lVar6 + 0xfbc);
    }
LAB__text__002a246c:
    *puVar7 = 1;
  }
  else {
    if (iVar2 == 1) {
      lVar6 = param_1 + uVar9 * 4;
      if ((uVar4 & 1) == 0) goto LAB__text__002a2464;
      puVar7 = (undefined4 *)(lVar6 + 0xfbc);
      goto LAB__text__002a246c;
    }
    if (iVar2 == 0) {
      lVar6 = param_1 + uVar9 * 4;
      if ((uVar4 & 1) != 0) {
        puVar7 = (undefined4 *)(lVar6 + 0x808);
        goto LAB__text__002a246c;
      }
      lVar8 = 6000;
      goto LAB__text__002a2468;
    }
  }
  FUN__text__002a2674(param_1,iVar1,uVar3,uVar4 & 1,1);
joined_r0x002a2490:
  if (param_3 != 3) {
    return;
  }
  FUN__text__0029e844(&local_38,DAT_008e1600);
  iVar1 = FUN__text__0029dd4c(local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  if (0x1ec < uVar5) {
    FUN__text__006312d0(param_2);
    return;
  }
  if (iVar1 - 1U < 0xb) {
    uVar4 = *(uint *)((long)(int)(iVar1 - 1U) * 4 + 0x732b70);
  }
  else {
    uVar4 = 0;
  }
  param_1 = param_1 + (ulong)uVar5 * 4;
  *(uint *)(param_1 + 0x2950) = *(uint *)(param_1 + 0x2950) | uVar4;
  iVar1 = FUN__text__006312d0(param_2);
  if (iVar1 - 1U < 0xb) {
    uVar5 = *(uint *)((long)(int)(iVar1 - 1U) * 4 + 0x732b70);
  }
  else {
    uVar5 = 0;
  }
  *(uint *)(param_1 + 0x2950) = *(uint *)(param_1 + 0x2950) | uVar5;
  return;
}


