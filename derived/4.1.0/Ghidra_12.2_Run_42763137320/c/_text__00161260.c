/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00161260; name: FUN_.text__00161260
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00161260(undefined8 *param_1,undefined8 param_2,undefined8 param_3,
                        undefined8 *param_4,int param_5)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 local_44;
  
  lVar3 = FUN__text__005f3244(*param_4);
  iVar2 = FUN__text__005f324c(*param_4);
  plVar1 = _DAT_0089f4d0;
  if (iVar2 != 0) {
    uVar7 = 0;
    do {
      lVar6 = *(long *)(*plVar1 + (long)param_5 * 0x20 + 0x1c0);
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      plVar4 = (long *)FUN__text__001625ac(lVar6);
      uVar5 = (**(code **)(*plVar4 + 0xb0))(plVar4,*(undefined2 *)(lVar3 + uVar7 * 2));
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      if ((uVar5 & 1) == 0) {
        local_44 = 2;
        FUN__text__00111970(param_1,param_3,&local_44);
        iVar2 = FUN__text__005f324c(*param_4);
        if (iVar2 == 0) {
          return;
        }
        uVar7 = 0;
        while( true ) {
          lVar6 = *(long *)(*plVar1 + (long)param_5 * 0x20 + 0x1c0);
          if (lVar6 != 0) {
            (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
          }
          plVar4 = (long *)FUN__text__001625ac(lVar6);
          uVar5 = (**(code **)(*plVar4 + 0xb0))(plVar4,*(undefined2 *)(lVar3 + uVar7 * 2));
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
          if ((uVar5 & 1) == 0) break;
          uVar7 = uVar7 + 1;
          uVar5 = FUN__text__005f324c(*param_4);
          if ((uVar5 & 0xffffffff) <= uVar7) {
            return;
          }
        }
        FUN__text__005f335c(*param_1,*(undefined2 *)(lVar3 + uVar7 * 2));
        return;
      }
      uVar7 = uVar7 + 1;
      uVar5 = FUN__text__005f324c(*param_4);
    } while (uVar7 < (uVar5 & 0xffffffff));
  }
  *param_1 = 0;
  return;
}


