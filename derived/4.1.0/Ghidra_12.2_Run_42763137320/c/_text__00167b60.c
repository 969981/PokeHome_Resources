/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00167b60; name: FUN_.text__00167b60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00167b60(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_48;
  
  puVar2 = _DAT_0089f550;
  lVar5 = 0;
  lVar6 = 0x1848;
  lVar7 = 10;
  lVar8 = 0x1878;
  do {
    lVar1 = param_1 + lVar5;
    FUN__text__00168178(lVar1 + 0x88,param_1 + lVar6);
    FUN__text__00113bb0(&local_48,*puVar2,1,param_1 + lVar6,0,*(undefined8 *)(param_1 + 0x1840),0);
    if (*(long *)(lVar1 + 200) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 200) + 0x48) + 0x18))();
    }
    lVar3 = local_48;
    *(long *)(lVar1 + 200) = local_48;
    if (local_48 != 0) {
      plVar4 = (long *)(local_48 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      if (*(long *)(lVar1 + 0xd0) != 0 || *(long *)(lVar1 + 0x150) != 0) {
        FUN__text__005d9010(lVar3,lVar1 + 0xc0,1);
      }
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    FUN__text__001596d0(&local_48,*puVar2,1,param_1 + lVar8,0,*(undefined8 *)(param_1 + 0x1840),0);
    if (*(long *)(lVar1 + 0x1d8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar1 + 0x1d8) + 0x48) + 0x18))();
    }
    lVar3 = local_48;
    *(long *)(lVar1 + 0x1d8) = local_48;
    if (local_48 != 0) {
      plVar4 = (long *)(local_48 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      if (*(long *)(lVar1 + 0x1e0) != 0 || *(long *)(lVar1 + 0x260) != 0) {
        FUN__text__005d9010(lVar3,lVar1 + 0x1d0,1);
      }
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    lVar6 = lVar6 + 0x60;
    lVar5 = lVar5 + 0x260;
    lVar7 = lVar7 + -1;
    lVar8 = lVar8 + 0x60;
  } while (lVar7 != 0);
  *(undefined4 *)(param_1 + 0x78) = 1;
  return;
}


