/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001eb034; name: FUN_.text__001eb034
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001eb034(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  puVar3 = _DAT_008a0680;
  uVar4 = _DAT_008a0680[1];
  **(undefined4 **)(param_1 + 0x180) = *_DAT_008a0680;
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 4) = uVar4;
  uVar4 = puVar3[3];
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 8) = puVar3[2];
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0xc) = uVar4;
  uVar4 = puVar3[5];
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x10) = puVar3[4];
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x14) = uVar4;
  uVar4 = puVar3[7];
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x18) = puVar3[6];
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x1c) = uVar4;
  uVar1 = puVar3[9];
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x20) = puVar3[8];
  uVar4 = puVar3[10];
  uVar2 = puVar3[0xb];
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x24) = uVar1;
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x28) = uVar4;
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x2c) = uVar2;
  uVar4 = FUN__text__0019c594(*(undefined4 *)(param_1 + 0xf8));
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x23288) = uVar4;
  *(undefined4 *)(*(long *)(param_1 + 0x180) + 0x23280) = 0xc;
  return;
}


