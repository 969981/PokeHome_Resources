/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005919c4; name: FUN_.text__005919c4
 */


int FUN__text__005919c4(long param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  
  iVar6 = FUN__text__004dd6f0();
  if (iVar6 == 1) {
    if ((*(char *)(param_1 + 0xe4) != '\0') && (*(long *)(param_1 + 0xd8) != 0)) {
      FUN__text__00400fc0(5);
      *(undefined1 *)(param_1 + 0xe4) = 0;
    }
    *(undefined1 *)(param_1 + 0xb8) = 1;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    uVar3 = *(int *)(param_1 + 0xb0) - 1;
    iVar5 = *(int *)(param_1 + 0x84) / 400;
    *(int *)(param_1 + 0xb4) = iVar5;
    uVar4 = 0;
    if (*(uint *)(param_1 + 0x98) != 0) {
      uVar4 = *(uint *)(param_1 + 0x28) / *(uint *)(param_1 + 0x98);
    }
    if (uVar3 <= uVar4) {
      uVar4 = uVar3;
    }
    *(uint *)(param_1 + 0xa4) = uVar4;
    lVar7 = *(long *)(param_1 + 0x18);
    puVar1 = (uint *)(lVar7 + 0x313);
    iVar2 = *(int *)(lVar7 + 0x30c);
    if ((*puVar1 & 0x400000) != 0) {
      iVar2 = 0;
    }
    *(int *)(param_1 + 0xb4) = iVar2 + iVar5;
    *(uint *)(param_1 + 0x28) = iVar2 + *(uint *)(param_1 + 0x28);
    *(undefined4 *)(lVar7 + 0x30c) = 0;
    *puVar1 = *puVar1 & 0xfe3fffff;
  }
  return iVar6;
}


