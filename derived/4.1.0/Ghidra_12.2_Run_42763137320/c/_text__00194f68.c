/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00194f68; name: FUN_.text__00194f68
 */


void FUN__text__00194f68(undefined8 param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long local_50;
  long local_48;
  undefined5 uStack_40;
  undefined3 local_3b;
  undefined5 uStack_38;
  undefined3 uStack_33;
  
  local_50 = *param_2;
  if (local_50 == 0) {
    FUN__text__001916b0(param_1,&local_50,param_3,0);
    lVar2 = *param_2;
  }
  else {
    plVar5 = (long *)(local_50 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN__text__001916b0(param_1,&local_50,param_3,0);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar2 = *param_2;
  }
  if ((lVar2 != 0) && (uVar3 = FUN__text__00306588(), (uVar3 & 1) == 0)) {
    lVar2 = FUN__text__00325bc0();
    iVar1 = *(int *)(lVar2 + 0x2c);
    if (((iVar1 != 0) &&
        (((*param_2 != 0 && (uVar3 = FUN__text__00306588(), (uVar3 & 1) == 0)) &&
         (uVar3 = FUN__text__00306a08(*param_2,2), (uVar3 & 1) == 0)))) &&
       (uVar3 = FUN__text__00306bcc(*param_2), (uVar3 & 1) == 0)) {
      uStack_38 = 0;
      uStack_40 = 0;
      local_3b = 0;
      FUN__text__00307180(*param_2,&uStack_40,0xd);
      uVar3 = FUN__text__0016af40(iVar1,&uStack_40);
      if ((uVar3 & 1) != 0) {
        lVar2 = *param_2;
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
        }
        lVar4 = FUN__text__00195358(param_1,param_3);
        if ((lVar4 == 0) || (*(int *)(lVar4 + 0x18) == 0)) {
          FUN__text__00306824(lVar2);
          if (lVar2 == 0) {
            return;
          }
        }
        else {
          uStack_40 = (undefined5)*(undefined8 *)(lVar4 + 8);
          local_3b = (undefined3)((ulong)*(undefined8 *)(lVar4 + 8) >> 0x28);
          uStack_38 = (undefined5)*(undefined8 *)(lVar4 + 0x10);
          uStack_33 = (undefined3)((ulong)*(undefined8 *)(lVar4 + 0x10) >> 0x28);
          local_48 = lVar2;
          if (lVar2 == 0) {
            FUN__text__00194d78(param_1,&local_48,&uStack_40,iVar1);
            return;
          }
          plVar5 = (long *)(lVar2 + 0x48);
          (**(code **)(*plVar5 + 0x10))(plVar5);
          FUN__text__00194d78(param_1,&local_48,&uStack_40,iVar1);
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
        return;
      }
    }
  }
  return;
}


