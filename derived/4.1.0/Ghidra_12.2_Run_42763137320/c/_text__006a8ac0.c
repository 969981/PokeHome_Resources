/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a8ac0; name: FUN_.text__006a8ac0
 */


void FUN__text__006a8ac0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN__text__006a30c8(param_1,0x714c32);
  if (lVar1 != 0) {
    uVar2 = FUN__text__006a8cbc(param_1,param_2,0x714c32,0);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  lVar1 = FUN__text__006a30c8(param_1,0x70dfee);
  if (lVar1 != 0) {
    uVar2 = FUN__text__006a8cbc(param_1,param_2,0x70dfee,0);
    *(undefined8 *)(param_1 + 0x70) = uVar2;
  }
  lVar1 = FUN__text__006a30c8(param_1,0x7214c8);
  if (lVar1 != 0) {
    uVar2 = FUN__text__006a8cbc(param_1,param_2,0x7214c8,0);
    *(undefined8 *)(param_1 + 0x78) = uVar2;
  }
  return;
}


