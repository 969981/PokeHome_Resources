/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063d4a0; name: FUN_.text__0063d4a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0063d4a0(long param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  long local_98 [6];
  long local_68;
  
  uVar7 = tpidr_el0;
  uVar3 = 0;
  uVar6 = 0;
  uVar7 = uVar7 & 0xffffffffffffe000;
  lVar1 = _DAT_0089f6e0 + 0x10;
  do {
    FUN__text__00601f30(local_98,*(undefined8 *)(param_2 + 2),uVar3);
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 < *(long **)(param_1 + 0x70)) {
      if (*(long *)(uVar7 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(undefined8 *)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x78);
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
      memset(plVar5,0,0x110);
      *plVar5 = lVar1;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
      *(long **)(param_1 + 0x68) = plVar5 + 0x22;
    }
    else {
      FUN__text__0063d6e0(param_1 + 0x60);
    }
    lVar4 = *(long *)(param_1 + 0x60) + (ulong)(uVar6 & 0xffff) * 0x110;
    FUN__text__00113bb0(&local_68,DAT_008e1540,0,local_98,0,*(undefined8 *)(param_1 + 8),0);
    if (*(long *)(lVar4 + 8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar4 + 8) + 0x48) + 0x18))();
    }
    lVar2 = local_68;
    *(long *)(lVar4 + 8) = local_68;
    if (local_68 != 0) {
      plVar5 = (long *)(local_68 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      if (*(long *)(lVar4 + 0x10) != 0 || *(long *)(lVar4 + 0x90) != 0) {
        FUN__text__005d9010(lVar2,lVar4,1);
      }
      FUN__text__005d8de0(lVar2);
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(plVar5);
    }
    if ((local_98[3] != 0) && (local_98[0] != 0)) {
      (**(code **)(*(long *)(local_98[0] + 0x48) + 0x18))();
    }
    local_98[0] = 0;
    local_98[1] = 0xcbf29ce484222645;
    local_98[2] = 0x70f683;
    local_98[3] = 0;
    if (local_98[4] != 0) {
      (**(code **)(*(long *)(local_98[4] + 0x48) + 0x18))();
    }
    uVar6 = uVar6 + 1;
    uVar3 = uVar6 & 0xffff;
  } while (uVar3 <= *param_2);
  return;
}


