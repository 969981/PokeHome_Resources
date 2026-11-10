/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00274acc; name: FUN_.text__00274acc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00274acc(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60 [3];
  long local_48;
  
  *(undefined4 *)(param_1 + 0x730) = param_2;
  uVar1 = *(undefined8 *)(param_1 + 0x728);
  local_60[0] = 0xc636a36f684155b1;
  lVar2 = *(long *)(*(long *)(param_1 + 0x720) + 0x2e8);
  if (lVar2 == 0) {
    FUN__text__005f2d98(uVar1,local_60,0);
    lVar2 = *(long *)(*(long *)(param_1 + 0x720) + 0x2e0);
  }
  else {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN__text__005f2d98(uVar1,local_60,lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar2 = *(long *)(*(long *)(param_1 + 0x720) + 0x2e0);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  FUN__text__00166508(lVar2,0,param_2,1,0,1);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  FUN__text__003c8c20(*(undefined8 *)(param_1 + 0x720),0x72d158,0xb);
  uVar1 = *_DAT_0089f598;
  local_78 = 0xc973b2050f4a2ee4;
  uStack_70 = 0x71d7fc;
  local_68 = 0x10;
  FUN__text__005e927c(local_60,&local_78);
  FUN__text__003ef578(*(undefined4 *)(_DAT_0089fcc8 + (long)*(int *)(param_1 + 0x730) * 4),uVar1,
                      local_60,0xffffffffffffffff,0);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


