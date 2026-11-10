/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b9248; name: FUN_.text__003b9248
 */


void FUN__text__003b9248(float param_1,long param_2,uint param_3)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_38;
  float fStack_34;
  
  if (*(int *)(param_2 + 0x1b8) != 0) {
    *(undefined1 *)(param_2 + 0x1dc) = 0;
  }
  fVar5 = param_1;
  if (*(char *)(param_2 + 0x1ac) == '\0') {
    fVar2 = *(float *)(param_2 + 0x1a4);
    if (param_1 <= *(float *)(param_2 + 0x1a4)) {
      fVar2 = param_1;
    }
    fVar5 = *(float *)(param_2 + 0x1a0);
    if (*(float *)(param_2 + 0x1a0) <= param_1) {
      fVar5 = fVar2;
    }
  }
  fVar6 = *(float *)(param_2 + 0x1d4);
  *(undefined4 *)(param_2 + 0x1b8) = 1;
  fVar4 = fVar5 - fVar6;
  fVar2 = -*(float *)(param_2 + 0x1a8);
  if (fVar5 <= fVar6) {
    fVar2 = *(float *)(param_2 + 0x1a8);
  }
  fVar3 = (float)param_3;
  if (fVar3 <= (-(fVar2 * -0.5 * fVar3) - fVar4 / fVar3) / fVar2) {
    fVar4 = fVar4 / fVar3 + fVar3 * fVar2 * -0.5;
    pcVar1 = *(code **)(param_2 + 0x120);
    *(undefined4 *)(param_2 + 0x1bc) = 0;
    *(undefined4 *)(param_2 + 0x1d8) = 0;
    *(float *)(param_2 + 0x1d0) = fVar2;
  }
  else {
    fVar4 = (fVar4 + fVar4) / fVar3;
    pcVar1 = *(code **)(param_2 + 0x120);
    *(undefined4 *)(param_2 + 0x1bc) = 0;
    *(undefined4 *)(param_2 + 0x1d8) = 0;
    *(float *)(param_2 + 0x1d0) = -fVar4 / fVar3;
  }
  if (pcVar1 != (code *)0x0) {
    local_38 = fVar6;
    fStack_34 = fVar6;
    (*pcVar1)(param_2 + 0x140,&fStack_34,&local_38);
  }
  *(float *)(param_2 + 0x1d4) = fVar6;
  *(float *)(param_2 + 0x1c4) = fVar5;
  *(float *)(param_2 + 0x1c8) = fVar6;
  *(uint *)(param_2 + 0x1c0) = param_3;
  *(float *)(param_2 + 0x1cc) = fVar4;
  return;
}


