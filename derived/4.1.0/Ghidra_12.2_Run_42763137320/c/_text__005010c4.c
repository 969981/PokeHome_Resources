/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005010c4; name: FUN_.text__005010c4
 */


void FUN__text__005010c4(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  int *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  FUN__text__005011f0(&local_50);
  if (local_50 != (int *)0x0) {
    *local_50 = *local_50 + 1;
  }
  uVar5 = *(uint *)(param_1 + 0x50);
  uVar3 = *(uint *)(param_1 + 0x54);
  if (uVar5 < uVar3) {
LAB__text__00501134:
    *(uint *)(param_1 + 0x50) = uVar5 + 1;
    if (*(long *)(param_1 + 0x48) != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x48) + (ulong)uVar5 * 0x10);
      *puVar1 = local_50;
      *(undefined4 *)(puVar1 + 1) = local_48;
      *(undefined4 *)((long)puVar1 + 0xc) = uStack_44;
      if (local_50 == (int *)0x0) goto LAB__text__005011b4;
      iVar2 = *local_50;
      *local_50 = iVar2;
      goto joined_r0x0050115c;
    }
  }
  else {
    iVar2 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar2 = 1;
    }
    uVar4 = FUN__text__00501ca0(param_1 + 0x48,iVar2);
    if (((uVar4 & 1) != 0) && (uVar5 < *(uint *)(param_1 + 0x54))) {
      uVar5 = *(uint *)(param_1 + 0x50);
      goto LAB__text__00501134;
    }
  }
  if (local_50 == (int *)0x0) {
LAB__text__005011b4:
    FUN__text__004ffd60(param_1);
    return;
  }
  iVar2 = *local_50 + -1;
  *local_50 = iVar2;
joined_r0x0050115c:
  if (iVar2 == 0) {
    FUN__text__00400fc0(uStack_44,local_50);
  }
  FUN__text__004ffd60(param_1);
  iVar2 = *local_50;
  *local_50 = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    FUN__text__00400fc0(uStack_44,local_50);
    return;
  }
  return;
}


