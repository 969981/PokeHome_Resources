/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069df34; name: FUN_.text__0069df34
 */


void FUN__text__0069df34(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((*(byte *)(param_1 + 0x194) >> 5 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    uVar1 = *(undefined8 *)(param_1 + 0x80);
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    uVar3 = *(undefined8 *)(param_1 + 0x90);
    *(byte *)(param_1 + 0x194) = *(byte *)(param_1 + 0x194) | 0x20;
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    param_2[5] = *(undefined8 *)(param_1 + 0xa8);
    param_2[4] = uVar5;
    param_2[1] = uVar2;
    *param_2 = uVar1;
    param_2[3] = uVar4;
    param_2[2] = uVar3;
  }
  return;
}


