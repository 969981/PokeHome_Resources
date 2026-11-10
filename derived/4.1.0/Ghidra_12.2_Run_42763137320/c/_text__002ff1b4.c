/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ff1b4; name: FUN_.text__002ff1b4
 */


void FUN__text__002ff1b4(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0xb8);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    (*pcVar1)(param_1 + 0xd0);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0xd0);
    uVar2 = param_2[3];
    *(undefined8 *)(param_1 + 0xb8) = param_2[1];
    *(undefined8 *)(param_1 + 200) = uVar2;
    uVar2 = *param_2;
    *(undefined8 *)(param_1 + 0xc0) = param_2[2];
    *(undefined8 *)(param_1 + 0xb0) = uVar2;
  }
  return;
}


