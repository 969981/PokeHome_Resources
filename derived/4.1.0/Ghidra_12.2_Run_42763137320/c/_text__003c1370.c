/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c1370; name: FUN_.text__003c1370
 */


void FUN__text__003c1370(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long **local_48;
  long lStack_40;
  long *local_38;
  
  local_38 = (long *)0x0;
  local_48 = &local_38;
  FUN__text__003c1580(param_2,&local_48,0);
  plVar2 = local_38;
  if (local_38 == (long *)0x0) {
    local_38 = (long *)0x0;
    local_48 = &local_38;
    lStack_40 = param_1;
    FUN__text__003c16e0(param_2,&local_48,0);
    plVar2 = local_38;
    if (local_38 == (long *)0x0) {
      local_48 = &local_38;
      local_38 = (long *)0x0;
      FUN__text__003c1860(param_2,&local_48,0);
      plVar2 = local_38;
      if (local_38 != (long *)0x0) {
        iVar4 = 0;
        plVar3 = local_38;
        do {
          plVar3 = (long *)plVar3[0xd];
          if (plVar3 == (long *)0x0) {
            iVar4 = 0;
            break;
          }
          iVar4 = iVar4 + 1;
          uVar1 = (**(code **)(*plVar3 + 0xd0))(plVar3);
        } while ((uVar1 & 1) != 0);
        uVar1 = 1;
        do {
          while( true ) {
            if ((uVar1 & 1) == 0) {
              return;
            }
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            uVar1 = 1;
            plVar2 = (long *)plVar2[0xd];
            if (plVar2 == (long *)0x0) {
              return;
            }
          }
          uVar1 = (**(code **)(*plVar2 + 0xc0))(plVar2,param_1 + 8);
          plVar2 = (long *)plVar2[0xd];
        } while (plVar2 != (long *)0x0);
      }
    }
    else {
      iVar4 = 0;
      plVar3 = local_38;
      do {
        plVar3 = (long *)plVar3[0xd];
        if (plVar3 == (long *)0x0) {
          iVar4 = 0;
          break;
        }
        iVar4 = iVar4 + 1;
        uVar1 = (**(code **)(*plVar3 + 0xd0))(plVar3);
      } while ((uVar1 & 1) != 0);
      uVar1 = 1;
      do {
        while( true ) {
          if ((uVar1 & 1) == 0) {
            return;
          }
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          uVar1 = 1;
          plVar2 = (long *)plVar2[0xd];
          if (plVar2 == (long *)0x0) {
            return;
          }
        }
        uVar1 = (**(code **)(*plVar2 + 0xc0))(plVar2,param_1 + 8);
        plVar2 = (long *)plVar2[0xd];
      } while (plVar2 != (long *)0x0);
    }
  }
  else {
    iVar4 = 0;
    plVar3 = local_38;
    do {
      plVar3 = (long *)plVar3[0xd];
      if (plVar3 == (long *)0x0) {
        iVar4 = 0;
        break;
      }
      iVar4 = iVar4 + 1;
      uVar1 = (**(code **)(*plVar3 + 0xd0))(plVar3);
    } while ((uVar1 & 1) != 0);
    uVar1 = 1;
    do {
      while( true ) {
        if ((uVar1 & 1) == 0) {
          return;
        }
        if (iVar4 != 0) break;
        uVar1 = (**(code **)(*plVar2 + 0xc0))(plVar2,param_1 + 8);
        plVar2 = (long *)plVar2[0xd];
        if (plVar2 == (long *)0x0) {
          return;
        }
      }
      iVar4 = iVar4 + -1;
      uVar1 = 1;
      plVar2 = (long *)plVar2[0xd];
    } while (plVar2 != (long *)0x0);
  }
  return;
}


