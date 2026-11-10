/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00474280; name: FUN_.text__00474280
 */


void FUN__text__00474280(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined2 local_38;
  
  if (*(int *)(param_1 + 0x378) != 0) {
    return;
  }
  if ((*(ushort *)(param_1 + 0x220) >> 6 & 1) != 0) {
    return;
  }
  local_40 = 0x100000000;
  local_38 = 0x100;
  local_60 = *(undefined8 *)(param_1 + 0x20);
  local_50 = 0;
  uStack_48 = 0;
  lStack_58 = param_1 + 0x368;
  (**(code **)(**(long **)(param_1 + 0x1e8) + 0x118))(*(long **)(param_1 + 0x1e8),&local_60,0,0);
  uVar5 = *(uint *)(param_1 + 0x378);
  uVar2 = *(uint *)(param_1 + 0x37c);
  uVar4 = uVar5;
  if (uVar5 < uVar2) {
LAB__text__00474324:
    uVar5 = uVar4 + 1;
    *(uint *)(param_1 + 0x378) = uVar5;
    if (*(long *)(param_1 + 0x370) == 0) {
      plVar6 = (long *)(ulong)uVar5;
      goto joined_r0x00474360;
    }
    *(undefined8 **)(*(long *)(param_1 + 0x370) + (ulong)uVar4 * 8) = &DAT_00aea7c0;
    plVar6 = (long *)(ulong)*(uint *)(param_1 + 0x378);
  }
  else {
    iVar1 = uVar2 + (uVar2 >> 1);
    if (uVar2 == 0) {
      iVar1 = 1;
    }
    uVar3 = FUN__text__0046b710(param_1 + 0x368,iVar1);
    uVar4 = *(uint *)(param_1 + 0x378);
    plVar6 = (long *)(ulong)uVar4;
    if (((uVar3 & 1) != 0) && (uVar5 < *(uint *)(param_1 + 0x37c))) goto LAB__text__00474324;
  }
  uVar5 = (uint)plVar6;
joined_r0x00474360:
  if (uVar5 != 0) {
    plVar7 = *(long **)(param_1 + 0x370);
    do {
      FUN__text__0046348c(plVar6,*plVar7,param_1);
      if ((*(byte *)(param_1 + 0x316) >> 2 & 1) != 0) {
        *(short *)(*plVar7 + 0x2a) = *(short *)(*plVar7 + 0x2a) + 1;
      }
      plVar7 = plVar7 + 1;
      plVar6 = (long *)(*(long *)(param_1 + 0x370) + (ulong)*(uint *)(param_1 + 0x378) * 8);
    } while (plVar7 != plVar6);
  }
  return;
}


