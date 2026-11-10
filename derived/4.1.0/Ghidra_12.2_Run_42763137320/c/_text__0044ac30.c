/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044ac30; name: FUN_.text__0044ac30
 */


undefined8 FUN__text__0044ac30(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  iVar1 = *(int *)(param_2 + 0x20);
  uVar2 = *(uint *)(param_2 + 0xd2) >> 0x11;
  puVar3 = (undefined8 *)(param_1 + 0x20);
  while (puVar3 = (undefined8 *)*puVar3, puVar3 != (undefined8 *)0x0) {
    if (iVar1 == *(int *)(puVar3 + 1) && (uVar2 & 1) == (uint)*(byte *)((long)puVar3 + 0xc)) {
      return 1;
    }
  }
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN__text__00400f80(0,0x10);
    if (puVar3 == (undefined8 *)0x0) {
      return 2;
    }
    *puVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    puVar4 = *(undefined8 **)(param_1 + 0x28);
  }
  else {
    puVar4 = *(undefined8 **)(param_1 + 0x28);
  }
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = puVar3;
  }
  else {
    *puVar4 = puVar3;
    puVar3 = *(undefined8 **)(param_1 + 0x30);
  }
  *(undefined8 **)(param_1 + 0x28) = puVar3;
  *(undefined8 *)(param_1 + 0x30) = *puVar3;
  *puVar3 = 0;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  *(ulong *)(*(long *)(param_1 + 0x28) + 8) = CONCAT44(uVar2,iVar1) & 0x1ffffffff;
  return 1;
}


