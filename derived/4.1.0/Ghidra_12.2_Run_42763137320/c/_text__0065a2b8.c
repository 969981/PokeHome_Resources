/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065a2b8; name: FUN_.text__0065a2b8
 */


undefined8 FUN__text__0065a2b8(long *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  if (param_1 == (long *)0x0) {
    return 1;
  }
  if (*param_1 != 0xbab1e) {
    return 1;
  }
  if ((param_2 == (long *)0x0) || ((int)param_2[0x2de] != -0x3f212453)) {
    return 2;
  }
  if (param_2[0x1b] == 0) {
    return 0;
  }
  if ((char)param_1[0x3c] != '\0') {
    return 8;
  }
  uVar1 = *(uint *)(param_2 + 0xc);
  puVar4 = (undefined8 *)param_2[2];
  if (puVar4 == (undefined8 *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = (long *)*puVar4 == param_2;
  }
  if (uVar1 < 0x11) {
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + -1;
    puVar4 = (undefined8 *)param_2[2];
  }
  if ((puVar4 == (undefined8 *)0x0) || (6 < (int)param_2[0xc] - 10U)) {
    FUN__text__0065a4c8(param_2);
    if (param_2[2] == 0) goto LAB__text__0065a3d0;
    if (!bVar2) {
      FUN__text__00670730(param_2);
      goto LAB__text__0065a3d0;
    }
  }
  else {
    *puVar4 = param_2;
    FUN__text__00650d38(param_2[2],2);
    FUN__text__0065a4c8(param_2);
    if (param_2[2] == 0) goto LAB__text__0065a3d0;
  }
  FUN__text__0065a554(param_2,*(undefined4 *)((long)param_2 + 100),uVar1 < 0x11);
LAB__text__0065a3d0:
  if (param_2[3] != 0) {
    FUN__text__00656b90(param_1 + 8,param_2 + 3,0);
  }
  if ((int)param_2[0x1a] == 2) {
    param_2[0x19] = 0;
    *(undefined4 *)(param_2 + 0x1a) = 0;
  }
  FUN__text__006782c0(param_2 + 0x2b5);
  FUN__text__00656c1c(param_2 + 0x25b,0);
  param_2[0x220] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0x11;
  FUN__text__0065a7a0(param_1,param_2);
  if ((undefined8 *)param_2[2] != (undefined8 *)0x0) {
    *(undefined8 *)param_2[2] = 0;
    param_2[2] = 0;
  }
  param_2[0x1b] = 0;
  plVar3 = (long *)param_1[4];
  do {
    if (plVar3 == (long *)0x0) {
LAB__text__0065a474:
      plVar3 = param_1 + 1;
      if ((long *)param_2[1] != (long *)0x0) {
        plVar3 = (long *)param_2[1];
      }
      *plVar3 = *param_2;
      plVar3 = param_1 + 2;
      if (*param_2 != 0) {
        plVar3 = (long *)(*param_2 + 8);
      }
      *plVar3 = param_2[1];
      *(int *)(param_1 + 3) = (int)param_1[3] + -1;
      FUN__text__0065a218(param_1);
      return 0;
    }
    if (*(long **)(*plVar3 + 0x20) == param_2) {
      FUN__text__00656b90(param_1 + 4,plVar3,0);
      goto LAB__text__0065a474;
    }
    plVar3 = (long *)plVar3[2];
  } while( true );
}


