/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001f67f0; name: FUN_.text__001f67f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001f67f0(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long local_50;
  long local_48;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 == (undefined8 *)0x0)) {
LAB__text__001f6868:
    puVar7 = (undefined8 *)0x0;
    uVar6 = _DAT_00000070;
    lVar5 = lRam0000000000000388;
  }
  else {
    plVar1 = (long *)(**(code **)*puVar4)(puVar4);
    plVar2 = (long *)FUN__text__0018d6a0();
    if (plVar2 != plVar1) {
      do {
        plVar1 = (long *)*plVar1;
      } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
      if (plVar1 == (long *)0x0) goto LAB__text__001f6868;
    }
    puVar7 = puVar4 + -10;
    uVar6 = puVar4[4];
    lVar5 = puVar4[0x67];
  }
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  local_48 = lVar5;
  FUN__text__0019485c(uVar6,&local_48,(long)puVar7 + 0xa4);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  uVar3 = FUN__text__00306588(lVar5);
  if ((uVar3 & 1) == 0) {
    FUN__text__003068c0(lVar5,0,*(undefined4 *)(param_1 + 0x84));
    FUN__text__003068c0(lVar5,1,*(undefined4 *)(param_1 + 0x88));
    FUN__text__003068c0(lVar5,2,*(undefined4 *)(param_1 + 0x8c));
    FUN__text__003068c0(lVar5,3,*(undefined4 *)(param_1 + 0x90));
    FUN__text__003068c0(lVar5,4,*(undefined4 *)(param_1 + 0x94));
    FUN__text__003068c0(lVar5,5,*(undefined4 *)(param_1 + 0x98));
    local_50 = lVar5;
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    FUN__text__001951d4(uVar6,&local_50,(long)puVar7 + 0xa4,1);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    *(undefined4 *)((long)puVar7 + 0xcc) = 1;
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  return;
}


