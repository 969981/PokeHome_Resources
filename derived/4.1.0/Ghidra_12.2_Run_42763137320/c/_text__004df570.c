/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004df570; name: FUN_.text__004df570
 */


undefined8 * FUN__text__004df570(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x1c);
  if (uVar2 <= uVar5) {
    iVar1 = uVar2 + (uVar2 >> 1);
    if (uVar2 == 0) {
      iVar1 = 1;
    }
    uVar3 = FUN__text__004e01a0(param_1 + 0x10,iVar1);
    if ((uVar3 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    if (*(uint *)(param_1 + 0x1c) <= uVar5) {
      return (undefined8 *)0x0;
    }
    uVar5 = *(uint *)(param_1 + 0x18);
  }
  *(uint *)(param_1 + 0x18) = uVar5 + 1;
  if (*(long *)(param_1 + 0x10) == 0) {
    return (undefined8 *)0x0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)uVar5 * 0xc0);
  puVar4[4] = 0;
  puVar4[5] = 0x3f80000000000000;
  puVar4[2] = 0x3f800000;
  puVar4[3] = 0x3f800000;
  puVar4[8] = 0;
  *(undefined4 *)(puVar4 + 9) = 0x3f800000;
  *(undefined2 *)((long)puVar4 + 0x4c) = 0;
  *(undefined1 *)(puVar4 + 0x11) = 0;
  *(undefined4 *)(puVar4 + 0xe) = 0;
  *(undefined4 *)(puVar4 + 0x15) = 0;
  puVar4[0x17] = 0;
  *(undefined4 *)(puVar4 + 0x16) = param_3;
  puVar4[6] = 0xffff3f800000;
  puVar4[7] = 0x3f800000;
  *(undefined1 *)((long)puVar4 + 0x4e) = 1;
  puVar4[10] = 0x3f8000003f800000;
  puVar4[0xb] = 0;
  *(undefined1 *)(puVar4 + 0x12) = 0x32;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0x2b00000000;
  *puVar4 = param_2;
  puVar4[1] = 0;
  return puVar4;
}


