/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003617a0; name: FUN_.text__003617a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003617a0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined4 local_6c;
  long local_68;
  undefined1 uStack_59;
  undefined8 *local_58;
  
  local_58 = (undefined8 *)((ulong)local_58 & 0xffffffff00000000);
  lVar4 = FUN__text__00371260(*_DAT_0089f448,&local_58);
  if ((*(long *)(param_2 + 8) != 0) &&
     (lVar5 = FUN__text__005dc81c(), uVar3 = _DAT_008a01d8, puVar2 = _DAT_0089f5c8, lVar5 != 0)) {
    lVar9 = 0;
    do {
      FUN__text__002a7cd4(&local_68,param_2,lVar9);
      puVar1 = puVar2;
      if (local_68 != 0) {
        puVar1 = (undefined8 *)(local_68 + 0x58);
      }
      local_6c = (undefined4)*puVar1;
      uVar6 = FUN__text__003608a0(lVar4,&local_6c);
      if (((uVar6 & 0xff) == 0) && (plVar7 = *(long **)(lVar4 + 0x58), plVar7 != (long *)0x0)) {
        (**(code **)(*plVar7 + 0x50))(plVar7,&local_6c);
      }
      local_58 = puVar2;
      if (local_68 != 0) {
        local_58 = (undefined8 *)(local_68 + 0x58);
      }
      lVar8 = FUN__text__002ad690(param_3,local_58,uVar3,&local_58,&uStack_59);
      *(int *)(lVar8 + 0x18) = (int)(uVar6 >> 0x20);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      }
      lVar9 = lVar9 + 1;
    } while (lVar5 != lVar9);
  }
  return;
}


