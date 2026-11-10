/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00418e30; name: FUN_.text__00418e30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00418e30(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined8 *local_60;
  undefined8 *local_58;
  
  plVar1 = _DAT_008a4d88;
  if ((int)_DAT_008a4d88[1] != 0) {
    plVar7 = (long *)*_DAT_008a4d88;
    if ((param_2 & 1) == 0) {
      do {
        lVar6 = *plVar7;
        *(undefined4 *)(lVar6 + 0x14c) = 0x2c;
        if (*(int *)(lVar6 + 0xf8) == 1) {
          FUN__text__0044e400(lVar6,lVar6 + 0x120);
        }
        (**(code **)(**(long **)(lVar6 + 0xe0) + 0xf0))();
        plVar7 = plVar7 + 1;
      } while (plVar7 != (long *)(*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 8));
    }
    else {
      do {
        lVar6 = *plVar7;
        *(undefined4 *)(lVar6 + 0x14c) = 0x2c;
        if ((*(int *)(lVar6 + 0xf8) == 1) &&
           (uVar4 = FUN__text__0044e400(lVar6,lVar6 + 0x120), (uVar4 & 1) != 0)) {
          *(undefined2 *)(lVar6 + 0x132) = 0;
          *(undefined4 *)(lVar6 + 0x13c) = 0xffffffff;
          *(undefined8 *)(lVar6 + 0x134) = 0;
          *(undefined4 *)(lVar6 + 0x14c) = 0x2b;
        }
        (**(code **)(**(long **)(lVar6 + 0xe0) + 0xf0))();
        plVar7 = plVar7 + 1;
      } while (plVar7 != (long *)(*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 8));
    }
  }
  FUN__text__00413d14(auStack_80,1);
  FUN__text__00413d14(auStack_70,1);
  puVar2 = _DAT_008a4db8;
  DAT_00aea24c = 1;
  if (((param_2 & 1) != 0) && (lVar6 = plVar1[1], (int)lVar6 != 0)) {
    *_DAT_008a4db8 = 0;
    uVar5 = FUN__text__00413d14(auStack_a0,1);
    FUN__text__004192d0(auStack_90,uVar5,*plVar1,puVar2,(int)lVar6,10);
    FUN__text__00413dec(auStack_80,auStack_90);
  }
  FUN__text__00413990(auStack_90,auStack_80,2,0x7152de,1);
  local_60 = (undefined8 *)0xffffffffffffffff;
  FUN__text__00412c50(&local_58,&local_60,0x10,8,0x712ad0,0,1);
  puVar3 = local_60;
  if (local_58 != (undefined8 *)0x0) {
    *local_58 = 0x887530;
  }
  local_60 = (undefined8 *)0xffffffffffffffff;
  local_58 = puVar3;
  FUN__text__00413d68(param_1,&local_58,1,local_88);
  return;
}


