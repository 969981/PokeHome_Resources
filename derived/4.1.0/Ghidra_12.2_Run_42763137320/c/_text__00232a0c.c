/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00232a0c; name: FUN_.text__00232a0c
 */


void FUN__text__00232a0c(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x778);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x780) = 0;
    *(undefined8 *)(param_1 + 0x788) = 0;
    *(undefined8 *)(param_1 + 0x770) = 0;
    *(undefined8 *)(param_1 + 0x778) = 0;
    (*pcVar1)(param_1 + 0x790);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x790);
    uVar2 = param_2[3];
    *(undefined8 *)(param_1 + 0x778) = param_2[1];
    *(undefined8 *)(param_1 + 0x788) = uVar2;
    uVar2 = *param_2;
    *(undefined8 *)(param_1 + 0x780) = param_2[2];
    *(undefined8 *)(param_1 + 0x770) = uVar2;
  }
  if (*(int *)(*(long *)(param_1 + 0x650) + 0x74) == 0) {
    return;
  }
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x768),1);
  return;
}


