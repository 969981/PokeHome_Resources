/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e5bcc; name: FUN_.text__003e5bcc
 */


void FUN__text__003e5bcc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar3 = param_2[2];
  uVar2 = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 0x30) = *param_2;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined1 *)(param_1 + 0x4d) = 1;
  FUN__text__003e5964();
  return;
}


