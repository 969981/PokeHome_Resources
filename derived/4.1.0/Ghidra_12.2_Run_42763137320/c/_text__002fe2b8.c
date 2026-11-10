/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fe2b8; name: FUN_.text__002fe2b8
 */


void FUN__text__002fe2b8(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x38);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    (*pcVar1)(param_1 + 0x50);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x50);
    uVar2 = param_2[3];
    *(undefined8 *)(param_1 + 0x38) = param_2[1];
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    uVar2 = *param_2;
    *(undefined8 *)(param_1 + 0x40) = param_2[2];
    *(undefined8 *)(param_1 + 0x30) = uVar2;
  }
  return;
}


