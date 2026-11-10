/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c19c0; name: FUN_.text__003c19c0
 */


void FUN__text__003c19c0(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  long local_38;
  
  plVar1 = (long *)FUN__text__003c1b20(param_2,0);
  if (plVar1 == (long *)0x0) {
    local_38 = param_1;
    plVar1 = (long *)FUN__text__003c1c90(param_2,&local_38,0);
    if (plVar1 != (long *)0x0) {
      iVar4 = 0;
      plVar3 = plVar1;
      do {
        plVar3 = (long *)plVar3[0xd];
        if (plVar3 == (long *)0x0) {
          iVar4 = 0;
          break;
        }
        iVar4 = iVar4 + 1;
        uVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3);
      } while ((uVar2 & 1) != 0);
      uVar2 = 1;
      do {
        while( true ) {
          if ((uVar2 & 1) == 0) {
            return;
          }
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          uVar2 = 1;
          plVar1 = (long *)plVar1[0xd];
          if (plVar1 == (long *)0x0) {
            return;
          }
        }
        uVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,param_1 + 8);
        plVar1 = (long *)plVar1[0xd];
      } while (plVar1 != (long *)0x0);
    }
  }
  else {
    iVar4 = 0;
    plVar3 = plVar1;
    do {
      plVar3 = (long *)plVar3[0xd];
      if (plVar3 == (long *)0x0) {
        iVar4 = 0;
        break;
      }
      iVar4 = iVar4 + 1;
      uVar2 = (**(code **)(*plVar3 + 0xd0))(plVar3);
    } while ((uVar2 & 1) != 0);
    uVar2 = 1;
    do {
      while( true ) {
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        uVar2 = 1;
        plVar1 = (long *)plVar1[0xd];
        if (plVar1 == (long *)0x0) {
          return;
        }
      }
      uVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,param_1 + 8);
      plVar1 = (long *)plVar1[0xd];
    } while (plVar1 != (long *)0x0);
  }
  return;
}


