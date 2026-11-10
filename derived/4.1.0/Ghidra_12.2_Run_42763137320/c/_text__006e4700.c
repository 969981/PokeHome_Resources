/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e4700; name: FUN_.text__006e4700
 */


float * FUN__text__006e4700(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  pfVar3 = param_1 + 2;
  fVar6 = *pfVar3;
  if (fVar1 <= fVar6) {
    do {
      pfVar4 = pfVar3;
      if ((fVar6 <= fVar1) && ((int)fVar2 <= (int)pfVar4[1])) {
        pfVar3 = pfVar4;
        pfVar4 = pfVar4 + -2;
        break;
      }
      pfVar3 = pfVar4 + 2;
      fVar6 = *pfVar3;
    } while (fVar1 <= fVar6);
    if (pfVar4 != param_1) {
      do {
        do {
          pfVar4 = param_2;
          param_2 = pfVar4 + -2;
        } while (*param_2 < fVar1);
      } while ((*param_2 == fVar1) && ((int)fVar2 <= (int)pfVar4[-1]));
      goto LAB__text__006e47a4;
    }
  }
  while( true ) {
    pfVar4 = param_2;
    param_2 = pfVar4;
    if (pfVar4 <= pfVar3) break;
    param_2 = pfVar4 + -2;
    if ((fVar1 <= *param_2) && ((*param_2 != fVar1 || ((int)pfVar4[-1] < (int)fVar2)))) break;
  }
LAB__text__006e47a4:
  if (pfVar3 < param_2) {
    do {
      uVar5 = *(undefined8 *)pfVar3;
      *(undefined8 *)pfVar3 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar5;
      do {
        do {
          pfVar4 = pfVar3;
          pfVar3 = pfVar4 + 2;
          if (*pfVar3 < fVar1) goto LAB__text__006e4800;
        } while (fVar1 < *pfVar3);
      } while ((int)pfVar4[3] < (int)fVar2);
LAB__text__006e4800:
      do {
        do {
          pfVar4 = param_2;
          param_2 = pfVar4 + -2;
        } while (*param_2 < fVar1);
      } while ((*param_2 == fVar1) && ((int)fVar2 <= (int)pfVar4[-1]));
    } while (pfVar3 < param_2);
  }
  pfVar4 = pfVar3 + -2;
  if (pfVar4 != param_1) {
    *(undefined8 *)param_1 = *(undefined8 *)pfVar4;
  }
  pfVar3[-2] = fVar1;
  pfVar3[-1] = fVar2;
  return pfVar4;
}


