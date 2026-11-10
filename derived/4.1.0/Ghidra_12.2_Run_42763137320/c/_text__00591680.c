/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00591680; name: FUN_.text__00591680
 */


undefined8 FUN__text__00591680(long param_1,uint param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar5 = FUN__text__004dd450();
  if (param_2 < 2) {
    uVar5 = FUN__text__00591494(param_1);
    if ((int)uVar5 != 1) {
      return 2;
    }
    uVar4 = 0;
    if (*(uint *)(param_1 + 0x98) != 0) {
      uVar4 = *(uint *)(param_1 + 0x28) / *(uint *)(param_1 + 0x98);
    }
    lVar6 = *(long *)(param_1 + 0x18);
    puVar1 = (uint *)(lVar6 + 0x313);
    *(byte *)(param_1 + 0x20) = (byte)(*puVar1 >> 0x14) & 2 | *(byte *)(param_1 + 0x20) & 0xfd;
    uVar3 = *(int *)(param_1 + 0xb0) - 1;
    if (uVar3 <= uVar4) {
      uVar4 = uVar3;
    }
    *(uint *)(param_1 + 0xa4) = uVar4;
    uVar2 = *(undefined4 *)(lVar6 + 0x30c);
    if ((*puVar1 & 0x400000) != 0) {
      uVar2 = 0;
    }
    *puVar1 = *puVar1 & 0xfe3fffff;
    *(undefined4 *)(lVar6 + 0x30c) = uVar2;
  }
  return uVar5;
}


