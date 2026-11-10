/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030659c; name: FUN_.text__0030659c
 */


void FUN__text__0030659c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  thunk_FUN__text__00631018(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x58));
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  *(undefined2 *)(param_1 + 0xa8) = *(undefined2 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  return;
}


