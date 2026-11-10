/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053918c; name: FUN_.text__0053918c
 */


void FUN__text__0053918c(long param_1,void *param_2)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 *__dest;
  uint *puVar5;
  uint uVar6;
  
  plVar2 = (long *)(param_1 + (ulong)*(uint *)(param_1 + 0x30) * 0x10);
  puVar5 = (uint *)(plVar2 + 1);
  uVar6 = *puVar5;
  uVar3 = *(uint *)((long)plVar2 + 0xc);
  if (uVar3 <= uVar6) {
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar4 = FUN__text__0053d5f0(plVar2,iVar1);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (*(uint *)((long)plVar2 + 0xc) <= uVar6) {
      return;
    }
    uVar6 = *puVar5;
  }
  *puVar5 = uVar6 + 1;
  if (*plVar2 == 0) {
    return;
  }
  __dest = (undefined4 *)(*plVar2 + (ulong)uVar6 * 0x138);
  *__dest = 0;
  __dest[0x4c] = 0;
  *(undefined8 *)(__dest + 2) = 0;
  *(undefined8 *)(__dest + 4) = 0;
  *(undefined8 *)(__dest + 0x46) = 0;
  *(undefined8 *)(__dest + 6) = 0;
  *(undefined8 *)(__dest + 8) = 0;
  *(undefined8 *)(__dest + 10) = 0;
  *(undefined8 *)(__dest + 0xc) = 0;
  *(undefined8 *)(__dest + 0xe) = 0;
  *(undefined8 *)(__dest + 0x10) = 0;
  *(undefined8 *)(__dest + 0x12) = 0;
  *(undefined8 *)(__dest + 0x14) = 0;
  *(undefined8 *)(__dest + 0x16) = 0;
  *(undefined8 *)(__dest + 0x18) = 0;
  *(undefined8 *)(__dest + 0x1a) = 0;
  *(undefined8 *)(__dest + 0x1c) = 0;
  *(undefined8 *)(__dest + 0x1e) = 0;
  *(undefined8 *)(__dest + 0x20) = 0;
  *(undefined8 *)(__dest + 0x22) = 0;
  *(undefined8 *)(__dest + 0x24) = 0;
  *(undefined8 *)(__dest + 0x26) = 0;
  *(undefined8 *)(__dest + 0x28) = 0;
  *(undefined8 *)(__dest + 0x2a) = 0;
  *(undefined8 *)(__dest + 0x2c) = 0;
  *(undefined8 *)(__dest + 0x2e) = 0;
  *(undefined8 *)(__dest + 0x30) = 0;
  *(undefined8 *)(__dest + 0x48) = 0;
  *(undefined8 *)(__dest + 0x4a) = 0x3f80000000000000;
  *(undefined8 *)(__dest + 0x32) = 0;
  *(undefined8 *)(__dest + 0x34) = 0;
  *(undefined8 *)(__dest + 0x36) = 0;
  *(undefined8 *)(__dest + 0x38) = 0;
  *(undefined8 *)(__dest + 0x3a) = 0;
  *(undefined8 *)(__dest + 0x3c) = 0;
  *(undefined8 *)(__dest + 0x3e) = 0;
  *(undefined8 *)(__dest + 0x40) = 0;
  *(undefined8 *)(__dest + 0x42) = 0;
  *(undefined8 *)(__dest + 0x44) = 0;
  memcpy(__dest,param_2,0x134);
  return;
}


