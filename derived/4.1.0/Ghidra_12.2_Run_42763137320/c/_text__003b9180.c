/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b9180; name: FUN_.text__003b9180
 */


void FUN__text__003b9180(float param_1,long param_2)

{
  float fVar1;
  code *pcVar2;
  undefined4 local_8;
  float fStack_4;
  
  if (*(char *)(param_2 + 0x1ac) == '\0') {
    if (param_1 < *(float *)(param_2 + 0x1a0)) {
      pcVar2 = *(code **)(param_2 + 0x120);
      fVar1 = *(float *)(param_2 + 0x1a0);
    }
    else {
      pcVar2 = *(code **)(param_2 + 0x120);
      fVar1 = *(float *)(param_2 + 0x1a4);
      if (param_1 <= *(float *)(param_2 + 0x1a4)) goto joined_r0x003b9230;
    }
    param_1 = fVar1;
    if (pcVar2 != (code *)0x0) {
      local_8 = *(undefined4 *)(param_2 + 0x1d4);
      fStack_4 = param_1;
      (*pcVar2)(param_2 + 0x140,&fStack_4,&local_8);
      *(float *)(param_2 + 0x1d4) = param_1;
      return;
    }
  }
  else {
    pcVar2 = *(code **)(param_2 + 0x120);
joined_r0x003b9230:
    if (pcVar2 != (code *)0x0) {
      local_8 = *(undefined4 *)(param_2 + 0x1d4);
      fStack_4 = param_1;
      (*pcVar2)(param_2 + 0x140,&fStack_4,&local_8);
    }
  }
  *(float *)(param_2 + 0x1d4) = param_1;
  return;
}


