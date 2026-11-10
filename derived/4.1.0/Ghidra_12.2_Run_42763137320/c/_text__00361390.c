/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00361390; name: FUN_.text__00361390
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00361390(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_68;
  undefined1 local_5c [3];
  undefined1 uStack_59;
  undefined8 *local_58;
  
  local_58 = (undefined8 *)((ulong)local_58 & 0xffffffff00000000);
  local_5c[0] = param_3;
  uVar5 = FUN__text__00371260(*_DAT_0089f448,&local_58);
  if ((*(long *)(param_2 + 8) != 0) &&
     (lVar6 = FUN__text__005dc81c(), uVar3 = _DAT_008a01d8, puVar2 = _DAT_0089f5c8, lVar6 != 0)) {
    lVar8 = 0;
    do {
      FUN__text__002a7cd4(&local_68,param_2,lVar8);
      uVar4 = local_5c[0];
      local_58 = puVar2;
      if (local_68 != 0) {
        local_58 = (undefined8 *)(local_68 + 0x58);
      }
      lVar7 = FUN__text__002a92b0(param_4,local_58,uVar3,&local_58,&uStack_59);
      *(undefined1 *)(lVar7 + 0x18) = uVar4;
      puVar1 = puVar2;
      if (local_68 != 0) {
        puVar1 = (undefined8 *)(local_68 + 0x58);
      }
      local_58 = (undefined8 *)CONCAT44(local_58._4_4_,(int)*puVar1);
      FUN__text__003633c0(uVar5,&local_58,local_5c);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      }
      lVar8 = lVar8 + 1;
    } while (lVar6 != lVar8);
  }
  return;
}


