/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00463eb0; name: FUN_.text__00463eb0
 */


void FUN__text__00463eb0(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  if ((*(byte *)(*(long *)(param_1 + 0x70) + 200) >> 1 & 1) != 0) {
    FUN__text__00471000(param_1);
  }
  FUN__text__00463df0(param_1);
  plVar5 = *(long **)(param_1 + 0x70);
  FUN__text__0046b650(plVar5);
  FUN__text__00463420(plVar5 + 3);
  if (DAT_00aea6f0 == (long *)0x0) {
    plVar3 = (long *)0x0;
    plVar4 = (long *)0x0;
  }
  else if ((plVar5 < DAT_00aea6f0) || (DAT_00aea6f0 + 0xd00 <= plVar5)) {
    plVar3 = (long *)DAT_00aea6f0[0xd00];
    plVar4 = DAT_00aea6f0;
    if (plVar3 != (long *)0x0) {
      do {
        plVar2 = plVar3;
        if (plVar2 <= plVar5) {
          plVar3 = plVar2;
          if (plVar5 < plVar2 + 0xd00) break;
        }
        plVar3 = (long *)plVar2[0xd00];
        plVar4 = plVar2;
      } while (plVar3 != (long *)0x0);
    }
  }
  else {
    plVar3 = DAT_00aea6f0;
    plVar4 = (long *)0x0;
  }
  plVar2 = plVar3 + 0xd01;
  if (plVar3[0xd02] == 0) {
    plVar3[0xd02] = (long)plVar5;
    *plVar5 = 0;
    iVar1 = (int)*plVar2 + 1;
    *(int *)plVar2 = iVar1;
  }
  else {
    *plVar5 = plVar3[0xd02];
    plVar3[0xd02] = (long)plVar5;
    iVar1 = (int)*plVar2 + 1;
    *(int *)plVar2 = iVar1;
  }
  if (iVar1 == 0x80) {
    plVar5 = (long *)&DAT_00aea6f0;
    if (DAT_00aea6f0 != plVar3) {
      plVar5 = plVar4 + 0xd00;
    }
    *plVar5 = plVar3[0xd00];
    FUN__text__00400fc0(0);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  return;
}


