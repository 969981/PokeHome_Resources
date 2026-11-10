/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e69f0; name: FUN_.text__006e69f0
 */


float * FUN__text__006e69f0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar5 = param_2[-2];
  if ((0.0 <= fVar1) || (0.0 <= fVar5)) {
    if (fVar5 < fVar1) goto LAB__text__006e6a84;
  }
  else if (fVar1 < fVar5) {
LAB__text__006e6a84:
    pfVar3 = param_1;
    if (fVar1 < 0.0) {
      do {
        while( true ) {
          pfVar3 = pfVar3 + 2;
          fVar6 = *pfVar3;
          if (0.0 <= fVar6) break;
          if (fVar1 < fVar6) goto LAB__text__006e6acc;
        }
      } while (fVar1 <= fVar6);
    }
    else {
      do {
        pfVar3 = pfVar3 + 2;
      } while (fVar1 <= *pfVar3);
    }
    goto LAB__text__006e6acc;
  }
  pfVar3 = param_1 + 2;
  if (pfVar3 < param_2) {
    if (fVar1 < 0.0) {
      do {
        fVar6 = *pfVar3;
        if (0.0 <= fVar6) {
          if (fVar6 < fVar1) break;
        }
        else if (fVar1 < fVar6) break;
        pfVar3 = pfVar3 + 2;
      } while (pfVar3 < param_2);
    }
    else {
      do {
        if (*pfVar3 < fVar1) break;
        pfVar3 = pfVar3 + 2;
      } while (pfVar3 < param_2);
    }
  }
LAB__text__006e6acc:
  if (pfVar3 < param_2) {
    if (fVar1 < 0.0) {
      param_2 = param_2 + -2;
      do {
        if (0.0 <= fVar5) {
          if (fVar1 <= fVar5) goto LAB__text__006e6b90;
        }
        else if (fVar5 <= fVar1) goto LAB__text__006e6b90;
        param_2 = param_2 + -2;
        fVar5 = *param_2;
      } while( true );
    }
    do {
      param_2 = param_2 + -2;
    } while (*param_2 < fVar1);
  }
LAB__text__006e6b90:
  do {
    if (param_2 <= pfVar3) {
      if (pfVar3 + -2 != param_1) {
        *(undefined8 *)param_1 = *(undefined8 *)(pfVar3 + -2);
      }
      pfVar3[-2] = fVar1;
      pfVar3[-1] = fVar2;
      return pfVar3;
    }
    uVar4 = *(undefined8 *)pfVar3;
    *(undefined8 *)pfVar3 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar4;
    if (fVar1 < 0.0) {
      do {
        while( true ) {
          pfVar3 = pfVar3 + 2;
          fVar5 = *pfVar3;
          if (0.0 <= fVar5) break;
          if (fVar1 < fVar5) goto LAB__text__006e6b5c;
        }
      } while (fVar1 <= fVar5);
    }
    else {
      do {
        pfVar3 = pfVar3 + 2;
      } while (fVar1 <= *pfVar3);
    }
LAB__text__006e6b5c:
    if (fVar1 < 0.0) {
      do {
        while( true ) {
          param_2 = param_2 + -2;
          fVar5 = *param_2;
          if (0.0 <= fVar5) break;
          if (fVar5 <= fVar1) goto LAB__text__006e6b90;
        }
      } while (fVar5 < fVar1);
      goto LAB__text__006e6b90;
    }
    do {
      param_2 = param_2 + -2;
    } while (*param_2 < fVar1);
  } while( true );
}


