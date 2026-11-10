/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0023d30c; name: FUN_.text__0023d30c
 */


void FUN__text__0023d30c(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  FUN__text__00128ca0(param_1,1,1);
  pcVar1 = *(code **)(param_1 + 0x678);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x680) = 0;
    *(undefined8 *)(param_1 + 0x688) = 0;
    *(undefined8 *)(param_1 + 0x670) = 0;
    *(undefined8 *)(param_1 + 0x678) = 0;
    (*pcVar1)(param_1 + 0x690);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x690);
    uVar2 = param_2[3];
    *(undefined8 *)(param_1 + 0x678) = param_2[1];
    *(undefined8 *)(param_1 + 0x688) = uVar2;
    uVar2 = *param_2;
    *(undefined8 *)(param_1 + 0x680) = param_2[2];
    *(undefined8 *)(param_1 + 0x670) = uVar2;
  }
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x648),1);
  return;
}


